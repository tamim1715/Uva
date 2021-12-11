
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

#define L length()


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
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int edge[200009],sum[200009];

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n;
    while(scanf("%d", &n)==1)
    {
        memset(edge, 0, sizeof(edge));
        memset(sum, 0, sizeof(sum));
        int edgen=(1<<n);
        for(int i=0; i<edgen; i++)
        {
            cin>>edge[i];
        }
        //cout<<n<<endl;
        for(int i=0; i<edgen; i++)
        {
            int edge_cost=0;
            for(int j=0; j<n; j++)
            {
                int x=i^(1<<j);
                edge_cost+=edge[x];
                //cout<<i<<" "<<j<<" "<<x<<endl;
            }
            sum[i]=edge_cost;
            //cout<<sum[i]<<endl;

        }
        int mx=0;
        for(int i=0; i<edgen; i++)
        {
            for(int j=0; j<n; j++)
            {
                int x=i^(1<<j);
                mx=max(mx, sum[i]+sum[x]);
                //cout<<mx<<" "<<sum[i]<<" "<<sum[x]<<endl;
            }
        }
        cout<<mx<<endl;

    }


    return 0;
}

