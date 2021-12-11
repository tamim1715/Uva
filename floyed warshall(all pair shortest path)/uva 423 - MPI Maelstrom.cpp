
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
    for(int i=0; i<=n ;i++)
    {
        for(int j=0; j<=n; j++)
        {
            w[i][j]=INF;
        }
    }
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n;
    while(scanf("%d", &n)==1)
    {
        set_n(n);
        int x;
        //char c;
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<i; j++)
            {
                //if(i==j) break;
                if(scanf("%d", &x)==1){

                w[i][j]=x;
                w[j][i]=x;
                }
                else scanf("%*c");
            }
            //cout<<i<<endl;
        }
        /*for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cout<<w[i][j]<<" ";
            cout<<endl;
        }*/
        //cout<<"tamim"<<endl;
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(w[i][j]>w[i][k]+w[k][j])
                    {
                        w[i][j]=w[i][k]+w[k][j];
                    }
                }
            }
        }
       /* cout<<endl;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) cout<<w[i][j]<<" ";
            cout<<endl;
        }*/
        int mx=0;
        for(int i=2; i<=n; i++)
        {
            if(w[1][i]==INF) continue;
            mx=max(mx, w[1][i]);
        }
        cout<<mx<<endl;
    }

    return 0;
}

