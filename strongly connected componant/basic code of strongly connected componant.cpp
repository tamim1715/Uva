
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

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp,st,et;
vector<int>v;
map<int, vector<int> >G,G1,component;
map<int, int>visited;
map<int, vector<int> >:: iterator it;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int cnt=1;
stack<int>s;
void dfs(int u)
{
    visited[u]=1;
    st[u]=cnt++;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v]) dfs(v);
    }
    et[u]=cnt;
    s.push(u);
}

void dfs2(int u, int mark)
{
    component[mark].pb(u);
    visited[u]=true;
    for(int i=0; i<G1[u].size(); i++)
    {
        int v=G1[u][i];
        if(!visited[v]) dfs2(v, mark);

    }
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,m,a,b;

    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        G[a].pb(b);
        G1[b].pb(a);

    }
    for(int i=1; i<=n; i++)
    {
        if(!visited[i]) dfs(i);
    }
    int mark=0;
    visited.clear();
    while(!s.empty())
    {
        int u=s.top();
        s.pop();
        if(!visited[u])
        {
            mark++;
            dfs2(u, mark);
        }
    }
    for(it=component.begin(); it!=component.end(); it++)
    {
        cout<<it->first<<" = ";
        int x=it->first;
        for(int i=0; i<component[x].size(); i++)
        {
            cout<<component[x][i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

