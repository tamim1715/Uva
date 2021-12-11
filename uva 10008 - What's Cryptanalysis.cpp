
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

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))

#define pii pair<int, char>
#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<char, int>mp;
vector<pii>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

vector<char>v1;
bool cmp(pii a, pii b)
{
    if(a.first==b.first) return a.S<b.S;
    return a.first>b.first;
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    mp.clear();
    v.clear();
    v1.clear();
    cin>>tst;
    cin.ignore();
    while(tst--)
    {
        //cout<<"tamim"<<endl;
        string s;

        getline(cin, s);
        for(int i=0; i<s.L; i++)
        {
            if(s[i]>='a'&&s[i]<='z') s[i]-=32, mp[s[i]]++;
            else if(s[i]>='A'&&s[i]<='Z') mp[s[i]]++;
            if(s[i]>='A'&&s[i]<='Z' &&mp[s[i]]==1) v1.pb(s[i]);
        }

    }
    for(int i=0; i<v1.size(); i++)
    {
        v.pb({mp[v1[i]], v1[i]});
        //cout<<v1[i]<< " ";
    }
    //cout<<"  tamim"<<endl;
    sort(v.begin(), v.end(), cmp);
    for(int i=0;  i<v.size(); i++)
    {
        cout<<v[i].S<<" "<<v[i].F<<endl;
    }


    return 0;
}

