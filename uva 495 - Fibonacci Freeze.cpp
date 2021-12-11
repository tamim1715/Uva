
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
//vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

vector<int>v[5003];


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    v[0].pb(0);
    v[1].pb(1);

    for(int i=2; i<=5001; i++)
    {
        int j=0,k=0,c=0,add;
        while(j<v[i-1].size()&&k<v[i-2].size())
        {
            add=v[i-1][j]+v[i-2][k]+c;
            c=(add/10);
            add%=10;
            v[i].pb(add);
            j++;
            k++;

        }
        if(j<v[i-1].size())
        {
            add=v[i-1][j]+c;
            c=(add/10);
            add%=10;
            v[i].pb(add);
            j++;
        }
        if(k<v[i-2].size())
        {
            add=v[i-2][k]+c;
            c=(add/10);
            add%=10;
            v[i].pb(add);
            k++;
        }
        if(c) v[i].pb(c);
    }

    int n;

    while(scanf("%d", &n)==1)
    {
        cout<<"The Fibonacci number for "<<n<<" is ";
        for(int i=v[n].size()-1; i>=0; i--) cout<<v[n][i];
        cout<<endl;
    }


    return 0;
}

