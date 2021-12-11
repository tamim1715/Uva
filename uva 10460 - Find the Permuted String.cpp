
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
char c[20];
int cnt=0;
vector<string>vss;
void permutation(int at)
{
    if(at==l)
    {
        //cout<<++cnt<<endl;
        //c[at]='\0';
        //puts(c);
        //cout<<endl;
        vss.pb(c);
        return;
    }
    for(int i=at; i>=1; i--)
    {
        c[i]=c[i-1];
    }
    for(int i=0; i<=at; i++)
    {
        c[i]=s[at];
        //cout<<"age "<<i<<" "<<at<<" "<<c[i]<<endl;
        permutation(at+1);
        //cout<<"pore "<<" "<<i<<" "<<at<<" "<<c[i]<<endl;
        c[i]=c[i+1];
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    bool flag=false;
    int tst;
    cin>>tst;
    while(tst--)
    {
        //c.clear();
        cin>>s;
        int ind;
        cin>>ind;
        permutation(0);
       // cout<<vss[ind-1]<<endl;
        flag=true;
    }
    return 0;
}



