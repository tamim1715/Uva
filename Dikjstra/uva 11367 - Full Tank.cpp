
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

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n,m;
int cost[1009],w[10009][10009],dist[10000],memo[1005][1005];
void set_n(int n)
{
    for(int i=0; i<n; i++)
    {
        dist[i]=INF;
        for(int i=0; i<m; i++) w[i][j]=0;
    }
}

void dikjastra(int u, int tank, int volume)
{
    dist[u]=0;
    int cost=0;
    priority_queue<pair<int, int> >pq;
    pq.push({-dist[u], -u});
    while(!pq.empty())
    {
        int uw=-pq.top().first;
        u=-pq.top().second;
        pq.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            int vw=w[u][v];

            if(vw+uw<dist[v])
            {
                dist[v]=vu+vw;
                pq.push({-dsit[v], -v});
            }
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    cin>>n>>m;

    set_n(n);
    int a,b,c,q,;
    f(0, n) cin>>t[i];
    f(0, m)
    {
        cin>>a>>b>>c;
        G[a].pb(b);
        G[b].pb(a);
        w[a][b]=c;
        w[b][a]=c;
    }
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        dikjastra(a,0, c);
        cout<<dist[b]<<endl;

    }
    return 0;
}

