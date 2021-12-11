
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

map<int, int>mpi;
map<string, int>mps;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

int main()
{
    //freopen("tamim.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mpi.clear();
    mps.clear();
    st.clear();
    v.clear();
    string s;
    cin>>s;
    vector<vector<int> > mp(256);
    vector<int >::iterator it;
    f(0,l)
    {
        //int p=s[i];
        mp[s[i]].pb(i);
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s1;
        cin>>s1;
        int ind=-1,st;
        bool flag=true;
        f(0,s1.length())
        {
            //cout<<ind<<endl;
            it=upper_bound(mp[s1[i]].begin(), mp[s1[i]].end(), ind);
            if(it==mp[s1[i]].end())
            {
                flag=false;
                break;
            }
            //cout<<ind<<endl;
            ind = it-mp[s1[i]].begin();
            ind=mp[s1[i]][ind];
            //cout<<ind<<endl;
            if(i==0) st=ind;
        }
        if(!flag) cout<<"Not matched"<<endl;
        else cout<<"Matched "<<st<<" "<<ind<<endl;
    }
    return 0;
}

