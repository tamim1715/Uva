
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
map<int, vector<int> > mp;
map<int, int>visited;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

//void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }
int column[20],diagonal1[40],diagonal2[40],queen[20];
int a,b;
int cnt=1;
void nqueen(int at, int n)
{
    if(at==n+1)
    {
        //cout<<++cnt<<endl;
        for(int i=1; i<=8; i++) mp[cnt].pb(queen[i]);
        cnt++;
        return;
    }
    f(1, n+1)
    {

        if(column[i]||diagonal1[i+at]||diagonal2[n+i-at]) continue;
        queen[at]=i;
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=1;
        nqueen(at+1, n);
        column[i]=diagonal1[i+at]=diagonal2[n+i-at]=0;

    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    mp.clear();
    nqueen(1,8);
    bool flag=false;
    int cas=0;
    int t[10];
    while(cin>>t[0]>>t[1]>>t[2]>>t[3]>>t[4]>>t[5]>>t[6]>>t[7])
    {

        int mn=10,x=8;
        for(int j=1; j<cnt; j++)
        {
            x=8;

            if(mp[j][0]==t[0]) x--;
            if(mp[j][1]==t[1]) x--;
            if(mp[j][2]==t[2]) x--;
            if(mp[j][3]==t[3]) x--;
            if(mp[j][4]==t[4]) x--;
            if(mp[j][5]==t[5]) x--;
            if(mp[j][6]==t[6]) x--;
            if(mp[j][7]==t[7]) x--;
            //cout<<x<<endl;
            mn=min(mn, x);
            if(mn==0) break;
        }
        cout<<"Case "<<++cas<<": "<<mn<<endl;
    }

    return 0;
}



