
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
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

int t[102];
int dp[102][51009];
int n,sum,close=0,check=0;

int knapsack(int i, int val)
{
    if(i>=n) return 0;
    if(dp[i][val]) return dp[i][val];
    if(val+t[i]<=check) dp[i][val]=max(knapsack(i+1, val+t[i])+t[i],knapsack(i+1, val));
    else dp[i][val]=knapsack(i+1, val);
    return dp[i][val];


}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        CLR(dp);
        sum=0;
        close=0;
        check=0;
        cin>>n;
        for(int i=0; i<n; i++) cin>>t[i], sum+=t[i];
        check=sum/2;

        close=knapsack(0,0);
        //sum-=close;
        //cout<<sum<<" "<<close<<endl;

        cout<<sum-(2*close)<<endl;


    }


    return 0;
}


