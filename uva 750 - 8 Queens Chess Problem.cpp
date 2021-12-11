
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
    for(int i=1; i<=8; i++)
    {
        if(diagonal1[at+i]||diagonal2[n+i-at]||column[i]) continue;
        queen[at]=i;
        diagonal1[at+i]=diagonal2[n+i-at]=column[i]=1;
        nqueen(at+1, n);
        diagonal1[at+i]=diagonal2[n+i-at]=column[i]=0;
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    mp.clear();
    nqueen(1,8);
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        if(flag) cout<<endl;
        cin>>a>>b;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8"<<endl<<endl;
        int p=0;
        for(int i=1; i<cnt; i++)
        {
            if(mp[i][b-1]==a)
            {
                if(++p<10) cout<<" ";
                cout<<p<<"      "<<mp[i][0];
                for(int j=1; j<8; j++)
                {
                    cout<<" "<<mp[i][j];
                }
                cout<<endl;
            }
        }
        flag=true;

    }

    return 0;
}


