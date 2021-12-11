
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
//map<int, vector<int> >G;
map<int, int>visited;
int cost[1009][1009],G[1009][1009];

int n,m;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

/*void set_cost(int x, int y)
{
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=y; j++) cost[i][j]=INF;
    }
}*/
void dikjstra(int u1, int u2)
{
    cost[u1][u2]=G[u1][u2];
    priority_queue<pair<int, pair<int, int> > > pq;
    pq.push({-G[u1][u2], {u1, u2}});
    while(!pq.empty())
    {
        int wu=-pq.top().first;
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        for(int i=0; i<4; i++)
        {
            int a=x+dx[i];
            int b=y+dy[i];
            if(a<0||a>n||b<0||b>m) continue;
            if(cost[x][y]+G[a][b]<cost[a][b])
            {
                cost[a][b]=cost[x][y]+G[a][b];
                pq.push({-cost[a][b], {a, b}});
            }
        }
        /*if(x-1>=0)
        {
            if(cost[x-1][y]>(cost[x][y]+G[x-1][y]))
            {
                cost[x-1][y]=cost[x][y]+G[x-1][y];
                pq.push({cost[x-1][y], {-(x-1), -y}});
            }
        }
        if(x+1<n)
        {
            if(cost[x+1][y]>(cost[x][y]+G[x+1][y]))
            {
                cost[x+1][y]=cost[x][y]+G[x+1][y];
                pq.push({cost[x+1][y], {-(x+1), -y}});
            }
        }
        if(y-1>=0)
        {
            if(cost[x][y-1]>(cost[x][y]+G[x][y-1]))
            {
                cost[x][y-1]=cost[x][y]+G[x][y-1];
                pq.push({cost[x][y-1], {-(x), -(y-1)}});
            }
        }
        if(y+1<m)
        {
            if(cost[x][y+1]>(cost[x][y]+G[x][y+1]))
            {
                cost[x][y+1]=cost[x][y]+G[x][y+1];
                pq.push({cost[x][y+1], {-(x), -(y+1)}});
            }
        }*/

    }
}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();

    int tst;
    cin>>tst;
    while(tst--)
    {

        cin>>n>>m;
        memset(G, 0, sizeof(G));
        memset(cost, INF, sizeof(cost));
        //set_cost(n, m);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++) cin>>G[i][j];
        }
        dikjstra(0, 0);
        cout<<cost[n-1][m-1]<<endl;
    }


    return 0;
}

