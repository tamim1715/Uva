
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

#define l s.length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define xx  first
#define yy  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;
int w[10000][10000],dist[100000];
void set_(int n)
{
    for(int i=0; i<=n; i++)
    {
        dist[i]=INF;
        for(int j=0; j<=n; j++)
        {
            w[i][j]=INF;
        }
    }
}

void dikjstra(int u, int e)
{
    dist[u]=0;
    priority_queue<pair<int, int> >pq;
    pq.push({-0, -u});
    while(!pq.empty())
    {
        u=-pq.top().second;
        int uw=-pq.top().first;
        pq.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            int vw=w[u][v];
            if(uw+vw<dist[v])
            {
                dist[v]=uw+vw;
                pq.push({-dist[v], -v});
            }
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int n,m,a,b,c,s,e;
    cin>>n>>m>>s>>e;
    set_(n);
    for(int i=0; i<m; i++)
    {
        cin>>a>>b>>c;
        G[a].pb(b);
        G[b].pb(a);
        w[a][b]=c;
        w[b][a]=c;
    }
    cout<<"source :"<<endl;

    //cin>>s>>e;
    dikjstra(s,e);
    cout<<dist[e]<<endl;
    return 0;
}

