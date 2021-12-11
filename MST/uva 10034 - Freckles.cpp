
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
vector<pair<double, pair<double, double> > >v,v1;
int parent[109];
void make_set(int n)
{
    for(int i=0; i<=n; i++)
      parent[i]=i;
}
int find_parent(int u)
{
    if(u==parent[u]) return u;
    parent[u]=find_parent(parent[u]);
    return parent[u];
}
int main()
{
    freopen("tamim.txt", "w", stdout);
    fast();

    int tst,n,n1,n2,x,y,num1,num2;
    double sum=0.00, a,b,x1,x2,y1,y2,d;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        v.clear();
        v1.clear();
        sum=0.00;
        if(flag) cout<<endl;

        cin>>n;
        make_set(n);
        for(int i=1; i<=n; i++)
        {
            cin>>a>>b;
            v.pb({i, {a,b}});
        }
        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                num1=v[i].first;
                num2=v[j].first;
                x1=v[i].second.first;
                y1=v[i].second.second;
                x2=v[j].second.first;
                y2=v[j].second.second;
                d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
                v1.pb({d, {num1, num2}});
            }
        }
        sort(v1.begin(), v1.end());
        for(int i=0; i<v1.size(); i++)
        {
            num1=v1[i].second.first;
            num2=v1[i].second.second;
            x=find_parent(num1);
            y=find_parent(num2);
            if(x!=y)
            {
                parent[y]=x;
                sum+=v1[i].first;
            }
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
        flag= true;
    }


    return 0;
}

