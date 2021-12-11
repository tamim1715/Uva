
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

#define pii pair<int, int>
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
vector<pii>v1,v3;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n;
    while(scanf("%d", &n)==1)
    {
        char a;
        v1.clear();
        v3.clear();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf(" %c", &a);
                if(a=='1')
                {
                    v1.pb({i,j});
                }
                if(a=='3')
                {
                    v3.pb({i,j});
                }
            }
            //cout<<i<<endl;
        }
        int mx=0;
        //cout<<v1.size()<<" "<<v3.size()<<endl;
        for(int i=0; i<v1.size(); i++)
        {
            int mn=INF;
            for(int j=0; j<v3.size(); j++)
            {
                int p=(abs(v1[i].F-v3[j].F)+abs(v1[i].S-v3[j].S));
                if(p<mn)
                {
                    //cout<<p<<" "<<mn<<endl;
                    mn=p;
                   // cout<<mn<<endl;
                }
            }
            mx=max(mx, mn);
        }
        printf("%d\n", mx);


    }


    return 0;
}

