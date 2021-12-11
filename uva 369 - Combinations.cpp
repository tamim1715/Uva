
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



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,r;
    while(cin>>n>>r&&(n||r))
    {
         v.clear();
         for(int i=max(r, n-r)+1; i<=n; i++) v.pb(i);
         reverse(all(v));
         ll ans=1LL,check=1LL;
         for(int i=min(r, n-r); i>=2; i--)
         {
             int j=0;
             for(j=0; j<v.size(); j++)
             {
                 if(v[j]%i==0)
                 {
                     v[j]/=i;
                     break;
                 }
             }
             if(j==v.size()) check*=i;
         }
         for(int i=0; i<v.size(); i++)
         {
             ans*=v[i];
         }
         ans/=check;
         cout<<n<<" things taken "<<r<<" at a time is "<<ans<<" exactly."<<endl;
    }


    return 0;
}

