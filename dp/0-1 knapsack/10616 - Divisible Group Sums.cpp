
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
#define CLR(a)  memset(a,-1,sizeof(a))

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

int t[205],dp[205][205][15],n,m,d,q,cnt;

int go(int i, int sum, int cnt)
{
    if(cnt==m)
    {
        if(sum==0) return 1;
        return 0;
    }
    if(n==i) return 0;
    int &ret=dp[i][sum][cnt];
    if(ret!=-1) return ret;

    dp[i][sum][cnt]=go(i+1, sum%d, cnt)+go(i+1, (sum+t[i])%d, cnt+1);
    return dp[i][sum][cnt];
}

int main()
{
    int cas=0;
    while(cin>>n>>q&&(n||q))
    {
        cout<<"SET "<<++cas<<":"<<endl;
        for(int i=0; i<n; i++) cin>>t[i];

        for(int i=1; i<=q; i++)
        {
            memset(dp, -1, sizeof(dp));
            cin>>d>>m;
            int result=go(0, 0, 0);
            cout<<"QUERY "<<i<<": "<<result<<endl;
        }

    }


    return 0;

}
