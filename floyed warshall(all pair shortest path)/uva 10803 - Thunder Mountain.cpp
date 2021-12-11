
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

double w[110][110];
void set_n(int n){
for(int i=0; i<=n; i++)
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


    int n,cas=0,tst;
    cin>>tst;
    while(tst--)
    {
        cin>>n;
        set_n(n);
        //int a,b;
        double x[110],y[110];
        for(int i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n;  j++)
            {
                double temp=sqrt((float)(x[i]-x[j])*(x[i]-x[j])+(float)(y[i]-y[j])*(y[i]-y[j]));
                if(temp<=10)
                {
                    w[i][j]=temp;
                }
            }
        }
        for(int k=0; k<n; k++)
            for(int i=0; i<n; i++)
               for(int j=0; j<n; j++)
                   w[i][j]=min(w[i][j], w[i][k]+w[k][j]);
        double  mx=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                //cout<<w[i][j]<<" ";
                mx=max(mx, w[i][j]);
            }
            //cout<<endl;
        }
        cout<<"Case #"<<++cas<<":"<<endl;
        if(mx==INF) cout<<"Send Kurdy"<<endl;
        else cout<<fixed<<setprecision(4)<<mx<<endl;
        cout<<endl;

    }
    //cout<<endl;

    return 0;
}

