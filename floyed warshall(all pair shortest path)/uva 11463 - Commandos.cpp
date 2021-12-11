
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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int w[101][101];
void set_n(int n)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++) w[i][j]=INF;
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=0;
    cin>>tst;
    set_n(100);
    while(tst--)
    {
        int n,m,a,b;
        cin>>n>>m;
        set_n(n);
        while(m--)
        {
            cin>>a>>b;
            w[a][b]=1;
            w[b][a]=1;
        }

        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==j){w[i][j]=0; continue;}
                    if(w[i][j]>w[i][k]+w[k][j])
                    {
                        w[i][j]=w[i][k]+w[k][j];
                    }
                }
            }
        }
       /* for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++) cout<<w[i][j]<<" ";
            cout<<endl;
        }*/
        int s,e;
        cin>>s>>e;
        int mx=0;
        for(int i=0; i<n; i++)
        {

                if(w[s][i]!=INF&&w[i][e]!=INF)
                {
                    //cout<<mx<<" "<<i<<" "<<w[s][i]<<" "<<w[i][e]<<endl;
                    mx=max(mx, w[s][i]+w[i][e]);
                }
                //w[i][j]=INF;

        }
        cout<<"Case "<<++cas<<": "<<mx<<endl;

        //set_n()
    }



    return 0;
}

