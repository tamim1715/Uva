
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

#define L s.length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<string, int>mp;
map<int, string>mp1;
vector<int>v;
map<int, vector<int> >G,G1,component;
map<int, int>visited;
map<int, vector<int> >:: iterator it;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

stack<int>s;


void dfs(int u)
{
    visited[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v]) dfs(v);
    }
    s.push(u);
}

void dfs2(int u, int mark)
{
    component[mark].pb(u);
    visited[u]=1;
    for(int i=0; i<G1[u].size(); i++)
    {
        int v=G1[u][i];
        if(!visited[v]) dfs2(v, mark);
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,m,val=1,cas=0;
    string s1,s2;
    bool flag=false;
    while(cin>>n>>m&&(n||m))
    {
        if(flag) cout<<endl;
        val=1;
        G.clear();
        G1.clear();
        while(!s.empty()) s.pop();
        mp1.clear();
        mp.clear();
        visited.clear();
        component.clear();
        for(int i=0; i<m; i++)
        {
            cin>>s1>>s2;
            if(mp[s1]==0)
            {
                mp[s1]=val;
                mp1[val]=s1;
                val++;
            }
            if(mp[s2]==0)
            {
                mp[s2]=val;
                mp1[val]=s2;
                val++;
            }
            G[mp[s1]].pb(mp[s2]);
            G1[mp[s2]].pb(mp[s1]);
        }
        for(int i=1; i<val; i++)
        {
            if(!visited[i]) dfs(i);
        }
        visited.clear();
        int mark=0;
        while(!s.empty())
        {
            int i=s.top();
            s.pop();
            if(!visited[i])
            {
                mark++;
                dfs2(i, mark);
            }
        }
        cout<<"Calling circles for data set "<<++cas<<":"<<endl;
        for(it=component.begin(); it!=component.end(); it++)
        {
            int p=it->first;
            sort(component[p].begin(), component[p].end());
            //if(component[p].size()>=1) cout<<mp1[component[p][0]];
            for(int i=0; i<component[p].size()-1; i++)
            {
                int x=component[p][i];
                cout<<mp1[x]<<", ";
            }
            cout<<mp1[component[p][component[p].size()-1]]<<endl;
        }
        flag=true;
    }


    return 0;
}

