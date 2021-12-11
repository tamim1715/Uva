
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

#define pii pair<int, int>
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
map<char, int>::iterator it;
vector<pii>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

bool cmp(pii a, pii b)
{
    if(a.F==b.F) return a.S>b.S;
    return a.F<b.F;

}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    string s;
    bool flag=false;
    while(getline(cin, s))
    {
        mp.clear();
        v.clear();
        if(flag) cout<<endl;
        flag=true;

        for(int i=0; i<s.L; i++)
        {
            //int x=s[i];

             mp[s[i]]++;

        }
        int x=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->S >=1){
            v.pb({it->S, it->F});
            x++;
            }
        }
        sort(all(v), cmp);
        for(int i=0; i<x; i++)
        {
            cout<<v[i].S<<" "<<v[i].F<<endl;
        }


    }



    return 0;
}

