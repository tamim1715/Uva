

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
int cost[110];
int w[110][110];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int n,e,t,m;
void set_n(int n)
{
    for(int i=0; i<=n; i++)
    {
        cost[i]=INF;
        for(int j=0; j<=n; j++) w[i][j]=0;
    }
}
void dikjstra(int u)
{
    cost[u]=0;
    priority_queue<pair<int, int> >pq;
    pq.push({-cost[u], -u});
    while(!pq.empty())
    {
        int uw=-pq.top().F;
        u=-pq.top().S;
        pq.pop();
        for(int i=0; i<G[u].size(); i++)
        {
            int v=G[u][i];
            int vw=w[u][v];
            if(vw+uw<cost[v])
            {
                cost[v]=vw+uw;
                pq.push({-cost[v], -v});
            }
        }
    }
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
        G.clear();
        visited.clear();
        if(flag) cout<<endl;
        int a,b,c;
        //cout<<cost[0]<<endl;
        cin>>n>>e>>t>>m;
        set_n(n);

        while(m--)
        {
            cin>>a>>b>>c;
            G[b].pb(a);
            w[b][a]=c;
        }
        dikjstra(e);
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            //cout<<i<<" "<<cost[i]<<endl;
            if(cost[i]<=t) cnt++;
        }
        cout<<cnt<<endl;
       flag=1;
    }

    return 0;
}

