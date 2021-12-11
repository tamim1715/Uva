
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

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G1,G2,component;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

stack<int>s;

void dfs1(int u)
{
    visited[u]=1;
    for(int i=0; i<G1[u].size(); i++)
    {
        int v=G1[u][i];
        if(!visited[v])
        {
            dfs1(v);
        }
    }
    s.push(u);
}
void dfs2(int u,int mark)
{
    component[mark].pb(u);
    visited[u]=1;
    for(int i=0; i<G2[u].size(); i++)
    {
        int v=G2[u][i];
        if(!visited[v])
        {
            dfs2(v, mark);
        }
    }
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int n,m;
    while(cin>>n>>m&&(n||m))
    {
        int a,b,c,mark=1;
        G1.clear();
        G2.clear();
        component.clear();
        visited.clear();
        while(!s.empty()) s.pop();
        for(int i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            if(c==1)
            {
                G1[a].pb(b);
                G2[b].pb(a);
            }
            else
            {
                G1[a].pb(b);
                G2[b].pb(a);
                G1[b].pb(a);
                G2[a].pb(b);
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]) dfs1(i);
        }
        visited.clear();
        while(!s.empty())
        {
            int x=s.top();
            s.pop();
            if(!visited[x]) dfs2(x, mark), mark++;

        }
        if(mark==2) cout<<1<<endl;
        else cout<<0<<endl;
    }

    return 0;
}

