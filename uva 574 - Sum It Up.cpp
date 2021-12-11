
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
int value,n,t[1009],sum=0;
set<vector<int> > s;
set<vector<int> > :: iterator it;
void backtack(int pos, int sum)
{

    if(sum==value)
    {
       s.insert(v);
       return;
    }
    for(int i=pos; i<n; i++)
    {
        v.pb(t[i]);
        //cout<<" prothom "<<v.back()<<endl;
        backtack(i+1, sum+t[i]);
        //cout<<" last "<<v.back()<<endl;
        v.pob();
    }

}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();


    while(cin>>value>>n)
    {
        if(value==0&&n==0) break;
        memset(t, 0, sizeof(t));
        s.clear();
        for(int i=0; i<n; i++)
        {
            cin>>t[i];
        }
        //cout<<"Sums of "<<value<<":"<<endl;

        backtack(0, 0);
        if(s.empty())
        {
            cout<<"NONE"<<endl;
            continue;
        }
        it=s.end();
        it--;
        for(; ; it--)
        {
            vector<int> v1=*it;
            for(int i=0; i<v1.size()-1; i++) cout<<v1[i]<<"+";
            cout<<v1[v1.size()-1]<<endl;
            if(it==s.begin()) break;
        }

    }

    return 0;
}


