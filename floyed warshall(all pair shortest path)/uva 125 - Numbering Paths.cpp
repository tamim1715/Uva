
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

int char_to_int(char c)
{
    int x=c-48;
    return x;
}
char int_to_char(int x)
{
    int c=x+48;
    return c;
}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int w[40][40];
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

    int m,cas=0;
    while(cin>>m)
    {
        int a,b,n=0;
        memset(w, 0, sizeof(w));
        while(m--)
        {
            cin>>a>>b;
            w[a][b]=1;
            n=max(n, max(a,b));
        }

        for(int k=0; k<=n; k++)
        {
            for(int i=0; i<=n; i++)
            {
                for(int j=0; j<=n; j++)
                {
                    if(w[i][k]&&w[k][j])
                    {
                        w[i][j]+=w[i][k]*w[k][j];
                    }
                }
            }
        }
         for(int k=0; k<=n; k++)
        {
            if(w[k][k]){
            for(int i=0; i<=n; i++)
            {
                for(int j=0; j<=n; j++)
                {
                    if(w[i][k]&&w[k][j])
                    {
                        w[i][j]=-1;
                    }
                }
            }
            }
        }
        cout<<"matrix for city "<<cas++<<endl;
        for(int i=0; i<=n; i++)
        {
            cout<<w[i][0];
            for(int j=1; j<=n; j++)
            {
                cout<<" "<<w[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}

