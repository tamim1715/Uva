
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
int w[20009][20009],dist[20009];
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
void dikjstra(int u)
{
    dist[u]=0;
    priority_queue<pair<int, int> > pq;
    pq.push({-dist[u], -u});
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
                //cout<<v<<" "<<uw<<" "<<vw<<endl;
                dist[v]=uw+vw;
                //cout<<v<<" "<<dist[v]<<" "<<uw<<" "<<vw<<endl;
                pq.push({-dist[v], -v});
            }

        }

    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=0;
    cin>>tst;
    while(tst--)
    {

        G.clear();
        int n,m,s,e,a,b,c;
        cin>>n>>m>>s>>e;
        set_(n);
        while(m--)
        {
            cin>>a>>b>>c;
            G[a].pb(b);
            G[b].pb(a);
            w[a][b]=c;
            w[b][a]=c;
        }
        //cout<<dist[e]<<endl;
        dikjstra(s);
        if(dist[e]==INF) cout<<"Case #"<<++cas<<": unreachable"<<endl;
        else cout<<"Case #"<<++cas<<": "<<dist[e]<<endl;
    }


    return 0;
}

