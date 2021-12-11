
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
vector<pair<int, pair<int, int> > > v;
int parent[200005];

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

    int n,m,sum=0,total=0,x,y,z,a,b,c;
    while(cin>>n>>m&&(m||n))
    {
        v.clear();
        sum=0,total=0;
        make_set(n);
        for(int i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            v.pb(make_pair(c, make_pair(a,b)));
            sum+=c;
        }
        sort(v.begin(), v.end());
        for(int i=0; i<m; i++)
        {
            a=v[i].second.first;
            b=v[i].second.second;
            x=find_parent(a);
            y=find_parent(b);
            if(x!=y)
            {
                total+=v[i].first;
                parent[y]=x;
            }
        }
        cout<<sum-total<<endl;
    }



    return 0;
}

