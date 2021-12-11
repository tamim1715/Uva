
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

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

bool flag=false;
int check=0;

int dp[220][60];

int go(int ind, int val)
{
    if(val==check) return 1;
    if(val>check||ind>=v.size()) return 0;
    if(dp[val][ind]==1) return 1;

    dp[val][ind]=max(go(ind+1, val+v[ind]), go(ind+1, val));
    return dp[val][ind];
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    cin.ignore();
    while(tst--)
    {
        flag=false;

        v.clear();
        CLR(dp);

        string s,s2;
        getline(cin, s);
        stringstream s1;
        s1<<s;
        int sum=0;
        while(s1>>s2)
        {
            int x=0;
            for(int i=0; i<s2.size(); i++)
            {
                x=(x*10)+(s2[i]-48);
            }
            v.pb(x);
            sum+=x;
        }
        check=sum/2;

        if(sum%2==0&&go(0,0)) {yes;}
        else {no;}




    }


    return 0;
}

