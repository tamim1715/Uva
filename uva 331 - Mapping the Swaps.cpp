
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
int t[50];
int ans,cnt;
void backtrack(int n, int at)
{
    int flag=0,a;
    cout<<at<<endl;
    for(int i=1; i<n; i++)
    {
        if(t[i]<t[i-1]){
       swap(t[i], t[i-1]);
       //a=t[i],t[i]=t[i-1],t[i-1]=a;
        backtrack(n, at+1);
        //a=t[i],t[i]=t[i-1],t[i-1]=a;
        swap(t[i], t[i-1]);
        flag=1;
        }
    }
    cout<<at<<" "<<flag<<endl;
    if(!flag)
    {
        if(ans>at)
        {
            ans=at;
            cnt=0;
        }
        if(ans==at) cnt++;
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,cas=0;
    while(cin>>n&&n)
    {
        memset(t, 0, sizeof(t));
        for(int i=0; i<n; i++) cin>>t[i];
        ans=999999999;
        cnt=0;
        backtrack(n, 0);
        if(!ans) cnt=0;
        cout<<"There are "<<cnt<<" swap maps for input data set "<<++cas<<"."<<endl;
    }


    return 0;
}

