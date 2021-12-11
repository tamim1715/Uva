
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

int t[]={1,5,10,25,50};
ll dp[8000][5];

ll coin(int i, int w)
{
    if(dp[w][i]!=-1) return dp[w][i];

    dp[w][i]=0;
    for(int j=i; j<5&&w>=t[j]; j++)
    {
        dp[w][i]+=coin(j, w-t[j]);
    }
    return dp[w][i];
}

int main()
{

    int n;
    CLR(dp);
    for(int i=0; i<5; i++) dp[0][i]=1;
    while(cin>>n)
    {

        cout<<coin(0,n)<<endl;
    }
    return 0;
}



