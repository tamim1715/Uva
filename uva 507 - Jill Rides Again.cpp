
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
    freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=0;
    cin>>tst;
    while(tst--)
    {
        cas++;
        int sum=0,st=0,en=0,check=2,mx=0;
        int n;
        cin>>n;
        int a;
        for(int i=2; i<=n; i++)
        {
            cin>>a;
            sum+=a;
            if(sum<0) sum=0,check=i;
            if(sum>mx||(sum==mx&&(i-check)>(en-st)))
            {
                mx=sum;
                st=check;
                en=i;
            }
        }
        if(st&&en) cout<<"The nicest part of route "<<cas<<" is between stops "<<st<<" and "<<en<<endl;
        else cout<<"Route "<<cas<<" has no nice parts"<<endl;

    }


    return 0;
}

