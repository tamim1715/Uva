
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

map<string, int>mp;
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
   // freopen("tamim.txt", "w", stdout);
    fast();

    int n,m;
    int cas=0;
    while(cin>>n>>m&&(n||m))
    {
        set_n(n);
        string s1,s2;
        mp.clear();
        int p=1;
        while(m--)
        {
            cin>>s1>>s2;
            if(mp[s1]==0)
            {
                mp[s1]=p++;
            }
            if(mp[s2]==0) mp[s2]=p++;
            w[mp[s1]][mp[s2]]=1;
            w[mp[s2]][mp[s1]]=1;

        }
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i==j) w[i][j]=0;
                    if(w[i][j]>w[i][k]+w[k][j]) w[i][j]=w[i][k]+w[k][j];
                }
            }
        }
        bool flag=true;
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(w[i][j]==INF)
                {
                    flag=false;
                    break;
                }
                mx=max(mx, w[i][j]);
            }
        }

        if(flag) cout<<"Network "<<++cas<<": "<<mx<<endl;
        else cout<<"Network "<<++cas<<": DISCONNECTED"<<endl;
        cout<<endl;
    }

    return 0;
}

