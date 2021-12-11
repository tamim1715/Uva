
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

int w[109][109];
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
    int n;
    int x;
    bool flag=0;
    int cas=0;
    while(cin>>n)
    {
        set_n(20);
        int a,b;
        x=1;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            w[x][a]=1;
            w[a][x]=1;
        }
        x++;
        for(int i=1; i<19; i++)
        {
            cin>>n;
            for(int i=1; i<=n; i++)
            {
               cin>>a;
               w[x][a]=1;
               w[a][x]=1;
            }
             x++;
        }
        for(int k=1; k<=20; k++)
        {
            for(int i=1; i<=20; i++)
            {
                for(int j=1; j<=20; j++)
                {
                    if(i==j) continue;
                    if(w[i][j]>w[i][k]+w[k][j]) w[i][j]=w[i][k]+w[k][j];
                }
            }
        }
        //if(flag) cout<<endl;
        cout<<"Test Set #"<<++cas<<endl;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            if(a<10) cout<<" ";
            cout<<a<<" to ";
            if(b<10) cout<<" ";
            cout<<b<<":";
            if(w[a][b]<10) cout<<" ";
            cout<<w[a][b]<<endl;
        }
        cout<<endl;
        flag=1;
    }

    return 0;
}

