
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back
#define sti(a) st.insert(a)
#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)
#define l s.length()
#define sts st.size()
#define mpss mps.size()
#define mpis mpi.size()
#define vs v.size()
#define sort(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

map<int, int>mpi;
map<string, int>mps;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator it;
vector<int>::iterator itv;

int main()
{
    //freopen("tamim.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mpi.clear();
    mps.clear();
    st.clear();
    v.clear();

    //int y;
    ll y;
    while(scanf("%lld", &y)!=EOF){
       //cin>>y;
    //int n;
    ll n,mx=0LL,lower=0LL,upper=0LL;
    cin>>n;
    ll t[n];
    fl(0,n) cin>>t[i];
    fl(0,n)
    {
        ll x=i;
        ll cnt=0LL;
        while(t[x]<t[i]+y&&x<n) x++,cnt++;
        if(cnt>mx)
        {
            mx=cnt;
            lower=t[i];
            upper=t[x-1];

        }

    }
    cout<<mx<<" "<<lower<<" "<<upper<<endl;


    }

    return 0;
}

