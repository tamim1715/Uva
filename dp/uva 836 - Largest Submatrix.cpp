
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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
//ll bigmod(ll n, ll k){ll ans=1LL; while(k){ if(k%2LL) ans=(ans*n)%mod; k/=2LL; n=(n*n)%mod; } return ans;}

map<int, int>mp;
vector<string>v;
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
    int tst;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        if(flag) cout<<endl;
        flag=true;
        string s;
        cin>>s;
        int n=s.L;
        int t[n+1][n+1];
        int r[n+1][n+1];
        int c[n+1][n+1];
        CLR(t);
        CLR(r);
        CLR(c);
        for(int j=0; j<n; j++)
        {
            t[0][j]=(s[j]-48);
        }

        for(int i=1; i<n; i++)
        {
            cin>>s;
            for(int j=0; j<n; j++)
            {
                t[i][j]=(s[j]-48);
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0&&j==0)
                {
                    if(t[i][j]) r[i][j]=1,c[i][j]=1;
                }
                else if(i==0)
                {
                    if(t[i][j]) r[i][j]=1+r[i][j-1],c[i][j]=1;
                }
                else if(j==0)
                {
                    if(t[i][j]) c[i][j]=1+c[i-1][j],r[i][j]=1;
                }
                else
                {
                    if(t[i][j]) c[i][j]=1+c[i-1][j],r[i][j]=1+r[i][j-1];
                }

            }

        }
        int mx=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!t[i][j]) continue;
                int mn=c[i][j];
                for(int x=j; x<n; x++)
                {
                    if(!t[i][x]) break;
                    mn=min(mn, c[i][x]);
                    mx=max(mx, (r[i][x]-(r[i][j]-1))*mn);
                }
            }
        }
        cout<<mx<<endl;

    }


    return 0;
}
