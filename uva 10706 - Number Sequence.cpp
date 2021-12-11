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

    string s="",s1="";
    for( ll i=1; l<=2147483647; i++)
    {
        //cout<<i<<endl;
        string p="";
        ll q=i;
        while(q)
        {
            int r=q%10;
            char c=q-48;
            p+=c;
            q/=10;
        }
        reverse(p.begin(), p.end());
        s1+=p;
        s+=s1;
        cout<<l<<endl;
    }

    ll tst;
    cin>>tst;
    while(tst--)
    {
        ll n;
        cin>>n;
        cout<<s[n+1]<<endl;
    }

    return 0;
}
