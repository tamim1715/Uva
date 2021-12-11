
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
map<int, vector<int> >G;
map<int, int>visited;

void dfs(int u)
{
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v])
        {
            visited[v]=1;
            dfs(v);
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n;
    while(cin>>n&&n)
    {
        G.clear();
        visited.clear();
        int a,x;

        while(cin>>a&& a)
        {
            while(cin>>x&&x)
            {
                G[a].pb(x);
            }

        }
        int p,s;
        cin>>p;
        for(int i=0; i<p; i++)
        {
            cin>>s;
            visited.clear();

            dfs(s);
            v.clear();
            for(int i=1; i<=n; i++)
            {
                if(!visited[i]) v.pb(i);
            }
            cout<<v.size();
            for(int i=0; i<v.size(); i++) cout<<" "<<v[i];
            cout<<endl;
        }

    }



    return 0;
}

