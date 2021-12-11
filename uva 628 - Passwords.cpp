
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
string s[102];
string num[]={"0","1","2","3","4","5","6","7","8","9"};
string rul;
string ans[260];
int n;
void backtrack(int pos)
{
    if(pos==rul.size())
    {
        for(int i=0; i<rul.size(); i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
        return;
    }
    else
    {
        if(rul[pos]=='#')
        {
            for(int i=0; i<n; i++)
            {
                ans[pos]=s[i];
                backtrack(pos+1);
            }
        }
        else
        {
            for(int i=0; i<10; i++)
            {
                ans[pos]=num[i];
                backtrack(pos+1);
            }
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();



    while(cin>>n)
    {
        cout<<"--"<<endl;

        for(int i=0; i<n; i++) cin>>s[i];;
        int q;
        cin>>q;
        f(0,q)
        {
            cin>>rul;
            backtrack(0);
        }

    }

    return 0;
}


