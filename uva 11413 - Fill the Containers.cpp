
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
int t[10009],n,k,sum=0;
bool test(int mx)
{
    int tot=0,cur=0;
    for(int i=0; i<n; i++)
    {
        if(t[i]>mx) return false;
        if(t[i]+cur>mx) cur=0;
        if(cur==0) tot++;

        if(tot>k) return false;
        cur+=t[i];
    }
    return true;
}
void bs()
{
    int low=1,high=sum,mid,best=high+1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        //cout<<mid<<endl;
        if(test(mid))
        {
            best=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<best<<endl;
}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();


    while(scanf("%d %d",&n,&k)==2)
    {

        sum=0;

        memset(t, 0, sizeof(t));
        for(int i=0; i<n; i++){
                scanf("%d", &t[i]);
                sum+=t[i];
        }
        //cout<<cnt<<endl;
        bs();
    }

    return 0;
}

