
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
queue<int>q;
map<int, vector<int> >path;
map<int, int>visited;
int degree[100009];
void bfs()
{
    int a,b;
    while(!q.empty())
    {
        a=q.front();
        q.pop();
        visited[a]=1;
        v.pb(a);
        for(int i=0; i<path[a].size(); i++)
        {
            b=path[a][i];
            if(!visited[b]){
            degree[b]--;
            if(degree[b]==0)
            {
                q.push(b);
            }
            }
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,m,a,b;

    while(cin>>n>>m and (n or m)){
            memset(degree, 0, sizeof(degree));

            v.clear();
            path.clear();
            visited.clear();
            while(!q.empty()) q.pop();
    while(m--)
    {
        cin>>a>>b;
        degree[b]++;
        path[a].pb(b);

    }
    for(int i=1; i<=n; i++)
    {
        if(degree[i]==0)
        {
            q.push(i);
        }
    }
    bfs();
    bool flag=false;

    if(v.size()!=n)
    {
        cout<<"IMPOSSIBLE"<<endl;
        continue;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    }

    return 0;
}


