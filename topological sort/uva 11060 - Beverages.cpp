
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define l s.length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define xx  first
#define yy  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<string, int>degree;
vector<string>v1;
vector<pair<int, string> > v2;
map<string, int>order;
queue<string>q;
map<string, vector<string> >path;
map<string, int>visited;
map<string, int>:: iterator it;
map<string, vector<string> >:: iterator it1;
void bfs()
{
    v2.clear();
    while(!q.empty())
    {
        v2.clear();
        string f=q.front();
        q.pop();
        v1.pb(f);
        visited[f]=1;
        for(int i=0; i<path[f].size(); i++)
        {
            string v=path[f][i];
            if(!visited[v])
            {
                degree[v]--;
                if(degree[v]==0)
                {
                    v2.pb({order[v], v});
                }
            }
        }
        while(!q.empty())
        {
            string x=q.front();
            q.pop();
            v2.pb({order[x], x});
        }
        sort(all(v2));
        for(int i=0; i<v2.size(); i++)
        {
            q.push(v2[i].second);
        }


    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,m;
    //bool flag=false;
    string s1,s2;
    int cas=0;
    while(scanf("%d",&n)==1)
    {
        //if(flag) cout<<endl;
        v1.clear();
        path.clear();
        visited.clear();
        order.clear();
        v2.clear();
        while(!q.empty()) q.pop();
        degree.clear();
        for(int i=0; i<n; i++)
        {
            cin>>s1;
            order[s1]=i;
            degree[s1]=0;
        }
        cin>>m;
        while(m--)
        {
            cin>>s1>>s2;
            degree[s2]++;
            path[s1].pb(s2);
            //-path[s2].pb(s1);
        }
        for(it=degree.begin(); it!=degree.end(); it++)
        {
            if(it->second==0)
            {
                q.push(it->first);
            }
        }
        v2.clear();
       while(!q.empty())
        {
            string x=q.front();
            q.pop();
            v2.pb({order[x], x});
        }
        sort(all(v2));
        for(int i=0; i<v2.size(); i++)
        {
            q.push(v2[i].second);
        }
        bfs();
        cout<<"Case #"<<++cas<<": Dilbert should drink beverages in this order:";
        for(int i=0; i<v1.size(); i++) cout<<" "<<v1[i];
        cout<<"."<<endl;
        //flag=true;
        cout<<endl;
    }

    return 0;
}

