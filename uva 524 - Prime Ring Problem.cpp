
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
map<int, vector<int> > v;
map<int, int>visited;
set<int>st;
vector<int>vr;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;
map<int, vector<int> >:: iterator it;

void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear();  visited.clear(); }
int n;
int used[40],num[40],p=0;
bool flag[40];

int check()
{
    if(!flag[num[1]+num[n]]) return 0;
    f(1, n)
    {
        if(!flag[num[i]+num[i+1]]) return 0;
    }
    return 1;
}
void permutation(int at, int n)
{
    if(at==n+1)
    {
        int c=check();
        if(c)
        {
            for(int i=1; i<=n; i++)
            {
                v[p].pb(num[i]);
            }
            p++;
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(!used[i])
        {
            if(at-2>=1)
            {
                if(!flag[num[at-1]+num[at-2]]) continue;
            }
            used[i]=1;
            num[at]=i;
            permutation(at+1, n);
            used[i]=0;
        }
    }



}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();
    memset(flag, false, sizeof(flag));
    flag[2]=true;
    flag[3]=true;
    flag[5]=true;
    flag[7]=true;
    flag[11]=true;
    flag[13]=true;
    flag[17]=true;
    flag[19]=true;
    flag[23]=true;
    flag[29]=true;
    flag[31]=true;
    flag[37]=true;

    int m=0;
    bool flag2=false;
    while(cin>>n)
    {
        if(flag2) cout<<endl;
        fresh();
        cout<<"Case "<<++m<<":"<<endl;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        num[1]=1;
        permutation(2,n);
        for(int j=0; j<p; j++)
        {
        //int x=it->first;
        //cout<<x<<endl;
           cout<<v[j][0];
          for(int i=1; i<v[j].size(); i++)
          {
              cout<<" "<<v[j][i];
          }
          cout<<endl;
       }
       flag2=true;
       p=0;
    }

    return 0;
}


