
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

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;
int dist[1000],w[1000][1000],level[1000];
int n,m,cas=0;

void set_(int n)
{
    for(int i=0; i<=n; i++)
    {
        dist[i]=INF;
        for(int j=0; j<=n; j++) w[i][j]=INF;
    }

}
void dikjstra(int u)
{
    dist[u]=0;
    level[u]=0;
    priority_queue<pair<int, int> >pq;
    pq.push({-dist[u], -u});
    while(!pq.empty())
    {
        u=-pq.top().S;
        int uw=-pq.top().F;
        pq.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            int vw=w[u][v];
            if(uw+vw<dist[v])
            {
                if(v==n-1&&(level[u]+1)%2) continue;
                dist[v]=uw+vw;
                pq.push({-dist[v], -v});
                level[v]=level[u]+1;
            }
        }

    }

}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();


    while(cin>>n>>m)
    {
        G.clear();
        set_(n);
        int a,b,c;
        while(m--)
        {
            cin>>a>>b>>c;
            G[a].pb(b);
            G[b].pb(a);
            w[a][b]=c;
            w[b][a]=c;

        }
        dikjstra(0);
        cout<<"Set #"<<++cas<<endl;
        if(dist[n-1]==INF)
        {
            cout<<"?"<<endl;
        }
        else
           cout<<dist[n-1]<<endl;
    }

    return 0;
}

