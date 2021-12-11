
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
//map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
//vector<int>path;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;
map<int, int>mp;
//void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }

int n,m,p;
int path[100][100];

void dfs(int u, int x) {
    if(x > p)
        p = x;
    int i;
    for(i = 0; i < n; i++) {
        if(path[u][i]) {
            path[u][i] = 0;
            path[i][u] = 0;
            dfs(i, x+1);
           path[u][i] = 1;
            path[i][u] = 1;
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    int a,b;
    while(scanf("%d %d", &n, &m)==2)
    {
        if(m==0&&n==0) break;
        memset(path, 0, sizeof(path));
        while(m--)
        {
            scanf("%d %d", &a, &b);
            path[a][b]=1;
            path[b][a]=1;
            //cout<<path[a][b]<<endl;

        }
        p=0;
        for(int i=0; i<n; i++)
        {
            dfs(i, 0);
        }
        cout<<p<<endl;

    }
    return 0;
}


