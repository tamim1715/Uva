
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
int p[300009],mx=0,now;

int prefixfunction(string s)
{
    now=p[0]=-1;
    for(int i=1; s[i]; i++)
    {
        while(now!=-1&&s[i]!=s[now+1]) now=p[now];
        if(s[i]==s[now+1]) p[i]=++now;
        else now=p[i]=-1;
        mx=max(0, p[i]);
    }
    return mx;
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

   string s;
   while(cin>>s)
   {
       mx=0;
       memset(p, -1, sizeof(p));
       string t=s;
       reverse(all(s));
       s+="#";
       s+=t;
       int x=prefixfunction(s);
       //cout<<x<<" "<<t<<" "<<s<<endl;
       string p=t.substr(0, t.L-x-1);
       reverse(all(p));
       cout<<t<<p<<endl;
   }

    return 0;
}

