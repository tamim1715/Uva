
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
string s;
int k,n;
int num[1000];
void combination(int at, int last)
{
    if(at==k)
    {
        string p="";
        for(int i=0; i<k; i++)
            p+=s[num[i]];
        if(!mps.count(p)) cout<<p<<endl;
        mps[p]++;
        return;
    }
    for(int i=last+1; i<=n-k+at; i++)
    {
        num[at]=i;
        combination(at+1, i);
        if(s[i]==s[i+1]) i++;
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    while(cin>>s>>k)
    {
        mps.clear();
        memset(num,0, sizeof(num));
        n=s.length();
        sort(s.begin(), s.end());
        combination(0, -1);
    }


    return 0;
}


