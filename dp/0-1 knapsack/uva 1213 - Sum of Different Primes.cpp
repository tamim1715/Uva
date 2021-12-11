
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
vector<int>v,v1;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

ll dp[187][1125][20];
int mark[1126];
int n, m;

void seive()
{
    for(int i=2; i<=1124; i+=2) mark[i]=1;
    v.pb(2);
    mp[2]++;
    for(int i=3; i<=1124; i+=2)
    {
        if(!mark[i])
        {
            v.pb(i);
            mp[i]++;
            if(i*i<=1124)
            {
                for(int j=i*i; j<=1124; j+=i*2) mark[j]=1;

            }
        }
    }


}
int cnt=0;
ll go(int ind, int k, int val)
{
    //cout<<ind<<" "<<k<<" "<<val<<endl;
    if(k==0)
    {
        if(val==0) return 1;
        return 0;
    }
    if(ind>=v1.size()) return 0;
    if(val<0) return 0;
    if(dp[ind][val][k]!=-1) return dp[ind][val][k];


    dp[ind][val][k]=go(ind+1, k-1, val-v1[ind])+go(ind+1, k, val);

    return dp[ind][val][k];

}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    v.clear();

    seive();



    while(cin>>n>>m&&(n||m))
    {
        CLR(dp);
        v1.clear();
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>n) break;
            v1.pb(v[i]);
        }

        cout<<go(0, m, n)<<endl;
    }



    return 0;
}
