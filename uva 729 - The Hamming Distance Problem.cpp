
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
//#define vs v.size()
#define s(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
//set<int>st;
//vector<int>v;
set<vector<char> >st;
vector<char>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<vector<char> >:: iterator sit;
vector<int>::iterator itv;

void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }

//string s="";
bool flag=false;
int used[50];
int n;
/*void permutation(int at,string s)
{
    if(at==n)
    {
        st.insert(v);
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(!used[i])
        {
            used[i]=1;
            v.pb(s[i]);
            //cout<<"age "<<s[i]<<endl;
            permutation(at+1, s);
            // cout<<"pore "<<s[i]<<endl;
            v.pob();
            used[i]=0;
        }
    }
}*/
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int tst;
    cin>>tst;
    while(tst--)
    {
        if(flag) cout<<endl;
        v.clear();
        st.clear();

        int h;
        string s="";
        cin>>n>>h;
        int zero=n-h;
        while(zero--) s+='0';
        while(h--) s+='1';
        /*permutation(0, s);
        for(sit=st.begin(); sit!=st.end(); sit++)
        {
            vector<char>vs =*sit;
            for(int i=0; i<vs.size(); i++)
            {
                cout<<vs[i];
            }
            cout<<endl;
        }
        flag=true;*/
        cout<<s<<endl;
        while(next_permutation(s.begin(), s.end()))
        {
            cout<<s<<endl;
        }
        flag=true;

    }

    return 0;
}



