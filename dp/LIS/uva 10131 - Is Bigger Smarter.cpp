
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
vector<pair<int, int> >v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

struct tamim
{
    int a,b,c;
}t[100000];

bool cmp(tamim p, tamim q)
{
    if(p.a==q.a) return p.b>q.b;
    return p.a<q.a;
}
int dp[100004],pev[100004];
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    memset(pev, -1, sizeof(pev));
    int cnt=0;
    int x,y;
    while(scanf("%d %d", &x, &y)==2)
    {
        t[cnt].a=x;
        t[cnt].b=y;
        t[cnt].c=cnt+1;
        cnt++;
        //if(cnt==9) break;

    }
    sort(t, t+cnt, cmp);
    //cout<<"tamim"<<endl;
    //for(int i=0; i<cnt; i++) cout<<t[i].a<<" "<<t[i].b<<" "<<t[i].c<<endl;
    int mx=0,start=-1;
    for(int i=cnt-1; i>=0; i--)
    {
        int cnt1=0,pe=-1;
        for(int j=i+1; j<cnt; j++)
        {
            if(t[i].b>t[j].b&&t[i].a!=t[j].a)
            {
                if(cnt1<dp[j]){
                  cnt1=dp[j];
                  pe=j;
                }
            }
        }
        dp[i]=cnt1+1;
        pev[i]=pe;
        if(dp[i]>mx)
        {
            mx=dp[i];
            start=i;
        }
    }
    cout<<mx<<endl;
    while(start!=-1)
    {
        cout<<t[start].c<<endl;
        start=pev[start];
    }

    return 0;
}

