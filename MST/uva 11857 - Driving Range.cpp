
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back
#define sti(a) st.insert(a)
#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)
#define l s.length()
#define sts st.size()
#define mpss mps.size()
#define mpis mpi.size()
#define vs v.size()
#define s(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}



vector<pair<int, pair<int, int> > > v;
int parent[250000];
map<string, int>mp;
map<int ,int> visited;
map<int, vector<int> > path;
/*void dfs(int u)
{
    visited[u]=1;
    for(int i=0; i<path[u].size(); i++)
    {
        int v=path[u][i];
        if(!visited[v]) dfs(v);
    }
}*/
void make_set(int n)
{
    for(int i=0; i<=n; i++) parent[i]=i;
}
int find_parent(int u)
{
    if(u==parent[u]) return u;
    parent[u]=find_parent(parent[u]);
    return parent[u];
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int n,m;
    while(cin>>n>>m&&(n||m))
    {
        //mp.clear();
        v.clear();
        //visited.clear();
        //path.clear();
        bool flag=true;
        make_set(n);
        int s1,s2;
        int p=0,c,a,b,x,y,ans=0;
        for(int i=0; i<m; i++)
        {
            cin>>s1>>s2>>c;
            v.pb({c, {s1, s2}});
        }
        if(n-1>m)
        {
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        sort(v.begin(), v.end());
        int cnt=0;
        for(int i=0; i<v.size(); i++)
        {
            a=v[i].second.first;
            b=v[i].second.second;
            x=find_parent(a);
            y=find_parent(b);
            //cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
            if(x!=y)
            {
                parent[y]=x;
                if(v[i].first>ans) ans=v[i].first;
                //path[a].pb(b);
                //path[b].pb(a);
                cnt++;

            }
        }

        /*dfs(0);
        visited[0]=1;
        for(int i=0; i<n ;i++)
        {
            if(!visited[i])
            {
                flag=false;
                break;
            }
        }*/
        if(cnt!=n-1) cout<<"IMPOSSIBLE"<<endl;
        else cout<<ans<<endl;


    }


    return 0;
}

