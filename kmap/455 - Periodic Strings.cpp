
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


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

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
int p[2000000];
int failuryfunction(string s)
{
    int n=s.L, now;
    p[0]=now=-1;
    for(int i=1; i<n; i++)
    {
        while(now!=-1&&s[now+1]!=s[i]) now=p[now];
        if(s[now+1]==s[i]) p[i]= ++now;
        else p[i]=now=-1;
    }
    return now;
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int tst;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        memset(p, -1, sizeof(p));
        if(flag) cout<<endl;
        string s;
        cin>>s;
        int x=failuryfunction(s);
        //int c=s.L-x-1;
        //cout<<c<<endl;
        if(s.L%(s.L-x-1)) cout<<s.L<<endl;
        //if(c>0) if(s[c]!=s[0]) x=-1;
         else  cout<<(s.L-x)-1<<endl;
        flag=true;
    }

    return 0;
}

