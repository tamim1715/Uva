
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



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=0;
    cin>>tst;
    while(tst--)
    {
        cas++;

        int n;
        cin>>n;
        ll t[n],w[n];
        for(int i=0; i<n; i++) cin>>t[i];
        for(int i=0; i<n; i++) cin>>w[i];

        ll dp1[n],dp2[n];
        CLR(dp1);
        CLR(dp2);
        ll ins=0LL,des=0LL,mx=0;
        for(int i=n-1; i>=0; i--)
        {
            dp1[i]=w[i];
            mx=0;
            for(int j=i+1; j<n; j++)
            {

                if(t[i]<t[j])
                {
                    mx=max(mx, dp1[j]);
                }
            }
            dp1[i]+=mx;
            ins=max(ins, dp1[i]);

        }
        for(int i=0; i<n; i++)
        {
            dp2[i]=w[i];
            mx=0;
            for(int j=i-1; j>=0; j--)
            {
                if(t[j]>t[i])
                {
                    mx=max(mx, dp2[j]);
                }
            }
            dp2[i]+=mx;
            des=max(des, dp2[i]);
        }
        if(ins>=des)
        {
            cout<<"Case "<<cas<<". Increasing ("<<ins<<"). Decreasing ("<<des<<")."<<endl;
        }
        else cout<<"Case "<<cas<<". Decreasing ("<<des<<"). Increasing ("<<ins<<")."<<endl;


    }


    return 0;
}

