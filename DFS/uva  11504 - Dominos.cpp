
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
vector<pair<int, int> >v;
map<int, vector<int> >G;
map<int, int>visited;


int last[100009];
int t=0;
int cnt=0;
void dfs(int u)
{
     visited[u]=1;
     t++;
     for(int i=0; i<G[u].size(); i++)
     {
         int v=G[u][i];
         if(!visited[v]) dfs(v);
     }
     t++;
     last[u]=t;
     v.pb({last[u], u});
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int tst,n,m,a,b;
    cin>>tst;
    while(tst--)
    {
        visited.clear();
        G.clear();
        v.clear();

        cin>>n>>m;
        for(int i=1; i<=m; i++)
        {
            cin>>a>>b;
            G[a].pb(b);
        }

        for(int i=1; i<=n; i++)
        {
            if(!visited[i]) dfs(i);
        }

        sort(all(v));
        reverse(all(v));
        cnt=0;
        visited.clear();
        for(int i=0; i<n; i++){
            if(!visited[v[i].second]) cnt++, dfs(v[i].second);
        }
        cout<<cnt<<endl;
    }

    return 0;
}

