
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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
//map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
//vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
//vector<int>::iterator itv;

//void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }
int parent[2000];
vector<pair<int, pair<int, int> > >v;
vector<int>v1;
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
    freopen("tamim.txt", "w", stdout);
    fast();

    int n,m,a,b,c,x,y;
    while(cin>>n>>m&&(n||m))
    {
        v.clear();
        v1.clear();
        make_set(n);
        f(0,m)
        {
            cin>>a>>b>>c;
            v.pb({c, {a,b}});
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            a=v[i].second.first;
            b=v[i].second.second;
            x=find_parent(a);
            y=find_parent(b);
            if(x!=y)
            {
                parent[y]=x;
            }
            else
            {
                v1.pb(v[i].first);
            }
        }
        if(v1.empty()) cout<<"forest"<<endl;
        else
        {
            s(v1);
            cout<<v1[0];
            f(1, v1.size())
            {
                cout<<" "<<v1[i];
            }
            cout<<endl;
        }
    }


    return 0;
}


