
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

#define L s.length()


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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, string>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int w[101][101];
void set_n(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n ;j++)
        {
            w[i][j]=INF;

        }
    }
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,m,a,b,c,cas=0;
    string s;
    while(cin>>n>>m&&n)
    {
        set_n(n);
        mp.clear();
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            mp[i]=s;
        }
        for(int i=1; i<=m; i++)
        {
            cin>>a>>b>>c;
            w[a][b]=c;//min(w[a][b],c);
            w[b][a]=c;//min(w[b][a],c);
        }
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(w[i][j]>w[i][k]+w[k][j])  w[i][j]=w[i][k]+w[k][j];
                }
            }
        }
        int cnt=0,pos,mn=INF+1;
        for(int i=1; i<=n ;i++)
        {
            cnt=0;
            for(int j=1; j<=n ;j++)
            {
                if(i==j) continue;
                cnt+=w[i][j];
            }
            if(cnt<mn)
            {
                mn=cnt;
                pos=i;
            }
        }
        cout<<"Case #"<<++cas<<" : "<<mp[pos]<<endl;

    }

    return 0;
}

