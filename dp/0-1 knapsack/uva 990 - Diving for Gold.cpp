
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
#define CLR1(a)  memset(a,-1,sizeof(a))

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
vector<pii>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

int dp[50],n;
int path[50];
int t,w,mx=0,cnt=0;

void update()
{
    int sum=0,cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(dp[i])cnt1++, sum+=v[i].S;
    }
    if(sum>mx)
    {
        mx=sum;
        for(int i=0; i<n; i++) path[i]=dp[i];
        cnt=cnt1;
    }
}



void go(int i, int baki)
{
    if(i==n)
    {
        update();
        return;
    }
    dp[i]=0;
    go(i+1, baki);
    dp[i]=1;
    if(baki-v[i].F>=0)
    {
        go(i+1, baki-v[i].F);
    }


}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    bool flag=false;
    while(cin>>t>>w)
    {

        CLR(dp);
        CLR(path);
        if(flag) cout<<endl;
        v.clear();

        cin>>n;
        int a,b;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            v.pb({3*w*a,b});
        }
        go(0, t);
        cout<<mx<<endl;
        cout<<cnt<<endl;
        for(int i=0; i<n; i++)
        {
            if(path[i]) cout<<v[i].F/(3*w)<<" "<<v[i].S<<endl;
        }



        flag=true;
    }


    return 0;
}

