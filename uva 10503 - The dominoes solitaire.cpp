
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
int n,m,p[20],q[20],used[20];
int hudai1,hudai2,suru,goal;
bool permutation(int at, int num)
{
    if(at==n)
    {
        if(num==goal) return true;
        return false;
    }
    for(int i=0; i<m; i++)
    {
        if(!used[i])
        {
            if(p[i]==num||q[i]==num)
            {
                bool ok;
                used[i]=1;
                if(p[i]==num) ok=permutation(at+1, q[i]);
                else ok=permutation(at+1, p[i]);
                if(ok) return true;
                used[i]=0;
            }
        }
    }
    return false;
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    while(scanf("%d %d", &n,&m)&&n)
    {
        memset(used, 0, sizeof(used));
       // memset(p,0,sizeof(p));
       // memset(q,0,sizeof(q));
        cin>>hudai1>>suru>>goal>>hudai2;
        f(0,m) cin>>p[i]>>q[i];
        if(permutation(0, suru)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


