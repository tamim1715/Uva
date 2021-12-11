
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

    int tst,cas=0;
    cin>>tst;
    while(tst--)
    {
        cas++;
        int n;
        cin>>n;
        int t[n];
        int x=0;
        f(0,n){
             cin>>t[i];
             if(i==0) x=t[i];
             x=max(x, t[i]-t[i-1]);
        }
        int ans=x;
        f(0,n){

            if(!i&&t[i]==x) x--;
            else if(t[i]-t[i-1]==x)
            {
                x--;
            }
            else if(t[i]-t[i-1]>x)
            {
                ans++;
                break;
            }
        }
        //if(x==abs(t[n-1]-t[n-2])) x++;
        cout<<"Case "<<cas<<": "<<ans<<endl;

    }
    return 0;
}

