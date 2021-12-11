
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
#define sort(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }

vector<int>bestpath;
int t[100],n,p,best=0;
void dfs(vector<int>path, int sum, int x)
{
    sum+=t[x];
    //cout<<sum<<endl;
    path.pb(t[x]);
    if(sum>best||(sum==best&&path.size()>bestpath.size()))
    {
        best=sum;
        bestpath=path;
    }
    f(x+1, n)
    {
        if(sum+t[i]<=p)
        {
            //cout<<"age "<<i<<" "<<sum<<endl;
            dfs(path, sum, i);
            //cout<<"pore "<<i<<" "<<sum<<endl;
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    //int p,n;
    while(cin>>p>>n)
    {
        memset(t, 0, sizeof(t));

        f(0,n) cin>>t[i];

        best=0;
        f(0,n)
        {
            vector<int>path;
            dfs(path, 0, i);
        }
        f(0, bestpath.size()) cout<<bestpath[i]<<" ";
        cout<<"sum:"<<best<<endl;

    }
    return 0;
}


