
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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }
//ll bigmod(ll n, ll k){ll ans=1LL; while(k){ if(k%2LL) ans=(ans*n)%mod; k/=2LL; n=(n*n)%mod; } return ans;}

map<int, int>mp;
vector<string>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    v.clear();
    v.pb("1");
    v.pb("2");
    v.pb("3");
    for(int i=3; i<=1000; i++)
    {
        string ans="";
        string a=v[v.size()-1];
        string b=v[v.size()-2];
        int x=a.size();
        int y=b.size();
        int carry=0;
        while(x&&y)
        {
            x--,y--;
            int p=(a[x]-48)+(b[y]-48)+carry;
            carry=p/10;
            ans+=((p%10)+48);
        }
        while(x--)
        {
            int p=(a[x]-48)+carry;
            carry=p/10;
            ans+=((p%10)+48);
        }
        while(y--)
        {
            int p=(b[y]-48)+carry;
            carry=p/10;
            ans+=((p%10)+48);
        }
        if(carry) ans+='1';
        reverse(all(ans));
        v.pb(ans);
        //cout<<ans<<endl;
    }
    //cout<<v[100]<<endl;
    int n;
    while(cin>>n)
    {
        cout<<v[n]<<endl;
    }


    return 0;
}
