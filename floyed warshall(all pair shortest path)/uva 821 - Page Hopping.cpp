
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
set<int>s;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int w[102][102];
void set_n(int n)
{
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++) w[i][j]=INF;
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int a,b;
    set_n(100);
    int mx=0,cas=0;
    while(cin>>a>>b&&(a||b))
    {
        s.insert(a);
        s.insert(b);
        mx=max(mx, max(a,b));
        w[a][b]=1;
        while(cin>>a>>b&&(a||b))
        {
            w[a][b]=1;
            mx=max(mx, max(a,b));
            s.insert(a);
            s.insert(b);
        }
        for(int k=1; k<=mx; k++)
        {
            for(int i=1; i<=mx; i++)
            {
                for(int j=1; j<=mx; j++)
                {
                    //if(i==j)
                    if(w[i][j]>w[i][k]+w[k][j]) w[i][j]=w[i][k]+w[k][j];
                }
            }
        }
        int cnt=0,p=s.size();
        for(int i=1; i<=mx; i++)
        {
            for(int j=1; j<=mx; j++)
            {
                if(i==j) continue;
                //cout<<w[i][j]<<" ";
                if(w[i][j]!=INF) cnt+=w[i][j];
                w[i][j]=INF;
            }
            //cout<<endl;
        }
        cout<<"Case "<<++cas<<": average length between pages = ";
        cout<<fixed<<setprecision(3)<<float(cnt)*1.0/(float)(p*p-p)*1.0<<" clicks"<<endl;

        //set_n(100);
        mx=0;
        s.clear();
    }

    return 0;
}

