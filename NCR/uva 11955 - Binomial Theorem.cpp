

/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))

#define pii pair<int, int>
#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}



void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};
ll ncr(int n, int r)
{
    v.clear();
    for(int i=max(r, n-r)+1; i<=n; i++) v.pb(i);
    for(int i=min(r, n-r); i>=2; i--)
    {
        int x=i;

        for(int j=0; j<=v.size(); j++)
        {
            int val=gcd(v[j], x);
            if(v[j]%val==0)
            {
                v[j]/=val;
                x/=val;
            }
            if(x<=1) break;
        }

    }
    ll ans=1LL;
    for(int i=0; i<v.size(); i++) ans*=v[i];
    return ans;
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=1;
    cin>>tst;
    while(tst--)
    {
        string s,s1="",s2="";
        cin>>s;
        int i=1;
        while(s[i]!='+') s1+=s[i],i++;
        i++;
        while(s[i]!=')') s2+=s[i], i++;
        int p=s[s.L-1]-48;
        if(s[s.L-2]!='^')  p+=(s[s.L-2]-48)*10;
        cout<<"Case "<<cas++<<": ";
        if(p>1) cout<<s1<<"^"<<p<<"+";
        else cout<<s1<<"+";
        for(int i=1; i<p; i++)
        {
            cout<<ncr(p,i)<<"*";
            if(p-i>1) cout<<s1<<"^"<<p-i<<"*";
            else cout<<s1<<"*";
            if(i>1) cout<<s2<<"^"<<i<<"+";
            else cout<<s2<<"+";
        }
        if(p>1) cout<<s2<<"^"<<p<<endl;
        else cout<<s2<<endl;

    }


    return 0;
}

