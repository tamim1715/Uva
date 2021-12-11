
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
#define s(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }
int tot,t[100],n,tst;
void backtack(int cur, int pos)
{
    if(pos==n) return;
    //cout<<pos<<" prothom "<<cur<<endl;
    if(t[pos]==0)
    {
        tot++;
        t[pos]=cur;
        //cout<<pos<<" age if "<<cur<<endl;
        return backtack(cur+1, pos);
        //cout<<pos<<" pore if "<<cur<<endl;
    }
    for(int i=0; i<=pos; i++)
    {
        int x=sqrt(t[i]+cur);
        if(x*x==t[i]+cur)
        {
            //cout<<t[i]<<" age for "<<cur<<endl;
            tot++;
            t[i]=cur;
            return backtack(cur+1, pos);
            //cout<<pos<<" pore for "<<cur<<endl;
        }
    }
    //cout<<pos<<" last  "<<cur<<endl;
    backtack(cur, pos+1);
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    cin>>tst;
    while(tst--)
    {
        cin>>n;
        tot=0;
        memset(t, 0, sizeof(t));
        backtack(1,0);
        cout<<tot<<endl;
    }

    return 0;
}

