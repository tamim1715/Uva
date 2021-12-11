
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
int can[26],mp[26][26],used[26];
char str[26];
void permutation(int at, int n)
{
    if(at==n)
    {
        str[at]='\0';
        puts(str);
        return;
    }
    for(int i=0; i<26 ;i++)
    {
        if(can[i]==1&&used[i]==0)
        {
            for(int j=0; j<26; j++)
            {
                if(mp[i][j]==1&&used[j]==1) return;
            }
            used[i]=1;
            str[at]=i+'a';
            permutation(at+1, n);
            used[i]=0;
        }
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    stringstream s1;
    string s;
    char  x=0;
    //cin.ignore();
    while(getline(cin, s))
    {
        cout<<s<<endl;
        if(x) puts("");
        x=1;
        memset(can, 0, sizeof(can));
        memset(mp, 0, sizeof(mp));
        memset(used, 0, sizeof(used));

        s1.clear();
        s1<<s;
        int n=0;
        char c;
        while(s1>>c)
        {
            can[c-'a']=1;

        }
        for(int i=0; i<26; i++) n+=can[i];
        string s2;
        getline(cin, s2);
        s1.clear();
        s1<<s2;
        char c1,c2;
        while(s1 >> c1 >> c2)
        {
            mp[c1-'a'][c2-'a']=1;

        }
        //cout<<n<<endl;
        permutation(0, n);
        //cout<<endl;

    }

    return 0;
}


