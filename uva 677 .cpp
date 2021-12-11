
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
//vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
//vector<int>::iterator itv;

//void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }
int n,m;
int used[50];
int v[50][50];
int num[50];
int tot=0;
void permutation(int at,int cur)
{
    if(at==m+1)
    {
        tot++;
        cout<<'('<<num[0]+1;
        for(int i=1; i<at; i++)
        {
            cout<<','<<num[i]+1;
        }
        cout<<')'<<endl;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(v[cur][i]==1&&!used[i])
        {
            num[at]=i;
            used[i]=1;
            permutation(at+1, i);
            used[i]=0;

        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    while(scanf("%d%d", &n, &m))
    {
        memset(used, 0, sizeof(used));
        memset(v, 0, sizeof(v));
        memset(num, 0, sizeof(num));
        f(0,n)
        {
            for(int j=0; j<n; j++) cin>>v[i][j];
        }
        tot=0;
        used[0]=1;
        permutation(1,0);
        if(!tot) cout<<"no walk of length "<<m<<endl;

        if(scanf("%d",&m)==-1) break;
        else cout<<endl;
    }


    return 0;
}


