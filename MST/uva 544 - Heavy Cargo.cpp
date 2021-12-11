
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
void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
//vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
//vector<int>::iterator itv;

//void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }
vector<pair<int, pair<int, int> > >v;
int parent[2000];

/*int dfs(int u, mn)
{
    visited[u]=1;
    for(int i=0; i<path[u].size(); i++)
    {
        int v=path[u][i];
        if(!visited[v])
        {
            if(v==q) return min(mn, )
            mn=min(mn, )
            dfs(v);
        }
    }

}*/
void make_set(int n)
{
    for(int i=0; i<=n; i++) parent[i]=i;
}
int find_parent(int  u)
{
    if(u==parent[u]) return u;
    parent[u]=find_parent(parent[u]);
    return parent[u];
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,m,c,x,y,p,a,b,mn,cas=0,ans;
    bool flag=false;
    string s,s1;
    while(cin>>n>>m&&(n||m))
    {
        if(flag) cout<<endl;
        v.clear();
        mps.clear();
        make_set(n);
        p=0;
        for(int i=0; i<m; i++)
        {
            cin>>s>>s1>>c;
            if(!mps.count(s)) mps[s]=p++;
            if(!mps.count(s1)) mps[s1]=p++;
            v.pb({c,{mps[s],mps[s1]}});

        }
        cin>>s>>s1;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        mn=INF;
        for(int i=0; i<v.size(); i++)
        {
            a=v[i].second.first;
            b=v[i].second.second;
            x=find_parent(a);
            y=find_parent(b);
            if(x!=y)
            {
                if(mn>v[i].first) mn=v[i].first;
                parent[y]=x;
            }
            if(find_parent(mps[s])==find_parent(mps[s1]))
            {
                ans=mn;
                break;
            }
        }
        cout<<"Scenario #"<<++cas<<endl;
        cout<<ans<<" tons"<<endl;
        flag=true;

    }
    cout<<endl;


    return 0;
}

