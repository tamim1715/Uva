
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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}



vector<pair<int, pair<int, int> > > v;
int parent[2500];
map<string, int>mp;
void make_set(int n)
{
    for(int i=1; i<=n; i++) parent[i]=i;
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


    int tst;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        mp.clear();
        v.clear();
        if(flag) cout<<endl;
        int n,m;
        cin>>n>>m;
        make_set(n);
        int p=0,c,a,b,x,y,ans=0;
        string s1,s2;
        for(int i=0; i<m; i++)
        {
            cin>>s1>>s2>>c;
            if(mp[s1]==0) mp[s1]=++p;
            if(mp[s2]==0) mp[s2]=++p;
            v.pb({c, {mp[s1], mp[s2]}});
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            a=v[i].second.first;
            b=v[i].second.second;
            x=find_parent(a);
            y=find_parent(b);
            //cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
            if(x!=y)
            {
                parent[y]=x;
                ans+=v[i].first;

            }
        }
        cout<<ans<<endl;
        flag=true;

    }


    return 0;
}

