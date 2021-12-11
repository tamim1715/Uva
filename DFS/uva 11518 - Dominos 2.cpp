
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
map<int, vector<int> >G;
map<int, int>visited;

int cnt=0;
void dfs(int u)
{
    visited[u]=1;
    cnt++;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v]) dfs(v);
    }
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int tst;
    cin>>tst;
    while(tst--)
    {
        G.clear();
        visited.clear();
        int n,m,l,a,b,c;
        cin>>n>>m>>l;
        while(m--)
        {
            cin>>a>>b;
            G[a].pb(b);
        }
        cnt=0;
        while(l--)
        {
            cin>>c;
            if(!visited[c])
                 dfs(c);
        }
        cout<<cnt<<endl;
    }


    return 0;
}

