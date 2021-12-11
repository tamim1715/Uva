
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

int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
//vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int w[2005][2005];
int dist[2005];
int u[2005],v[2005];
void set_n(int n)
{
    for(int i=0; i<n; i++)
    {
        dist[i]=INF;
        for(int j=0; j<n; j++) w[i][j]=INF;
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
        int n,m,a,b,c;
        G.clear();
        cin>>n>>m;
        set_n(n);
        CLR(u);
        CLR(v);
        for(int i=0; i<m; i++)
        {
            cin>>a>>b>>c;
            u[i]=a;
            v[i]=b;
            G[a].pb(b);
            //G[b].pb(a);
            w[a][b]=c;
            //w[b][a]=c;
        }
        dist[0]=0;
        for(int i=0; i<n -1; i++)
        {
            for(int i=0; i<m; i++)
            {
                if(dist[v[i]]>dist[u[i]]+w[u[i]][v[i]])
                {
                    dist[v[i]]=dist[u[i]]+w[u[i]][v[i]];
                }
            }
        }
        int cycle=false;
        for(int i=0; i<m; i++)
        {
            if(dist[v[i]]>dist[u[i]]+w[u[i]][v[i]])
            {
                cycle=true;
                break;
            }
        }
        if(cycle) cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;

    }
    return 0;
}


