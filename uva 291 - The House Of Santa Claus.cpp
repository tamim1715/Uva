
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
int mp[5][5] = {
    {0,1,1,0,1},
    {1,0,1,0,1},
    {1,1,0,1,1},
    {0,0,1,0,1},
    {1,1,1,1,0}
    };
int num[9];
void permutation(int at, int now)
{
    num[at]=now;
    if(at==8)
    {
        for(int i=0; i<=8; i++)
        {
            cout<<num[i]+1;
        }
        cout<<endl;
        return;
    }
    for(int i=0; i<5; i++)
    {
        if(mp[now][i]==1)s
        {
            mp[now][i]=mp[i][now]=0;
            permutation(at+1, i);
            mp[now][i]=mp[i][now]=1;
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    //sett();

    permutation(0,0);
    return 0;
}


