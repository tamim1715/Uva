
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

int t[1001000];

int s,e,r;

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,m;
    while(cin>>n>>m&&(n||m))
    {
        memset(t, 0, sizeof(t));
        int c=false;
        for(int i=0; i<n; i++)
        {
            cin>>s>>e;
            if(c) continue;
            for(int i=s; i<e; i++)
            {
                if(c) break;
                if(t[i]) c=1;
                t[i]=1;
            }
        }
        for(int i=0; i<m; i++)
        {
            cin>>s>>e>>r;
            if(c) continue;
            while(s<1000000)
            {
                if(c) break;;
                for(int i=s; i<e; i++)
                {
                   if(c) break;
                   if(t[i]) c=1;
                   t[i]=1;
                }
                s=min(s+r, 1000000);
                e=min(e+r, 1000000);
            }
        }
        if(c) cout<<"CONFLICT"<<endl;
        else cout<<"NO CONFLICT"<<endl;
    }

    return 0;
}

