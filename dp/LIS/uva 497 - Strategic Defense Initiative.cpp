
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

int dp[100005],next_i[100005];

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    cin.ignore();
    cin.ignore();
    while(tst--)
    {
        string s;
        v.clear();
        CLR(dp);
        memset(next_i, -1, sizeof(next_i));

        while(getline(cin, s)&&s!="")
        {
            stringstream s1(s);
            int val;
            s1>>val;
            v.pb(val);

        }
        int mx=0,start=0;
        for(int i=v.size()-1; i>=0; i--)
        {
            int cnt=0,p=-1;
            for(int j=i+1; j<v.size(); j++)
            {
                if(v[i]<v[j])
                {
                    if(cnt<dp[j])
                    {
                        cnt=dp[j];
                        p=j;
                    }
                }
            }
            dp[i]=cnt+1;
            next_i[i]=p;
            if(dp[i]>mx)
            {
                mx=dp[i];
                start=i;
            }

        }
        cout<<"Max hits: "<<mx<<endl;
        while(start!=-1)
        {
            cout<<start+1<<endl;
            start=next_i[start];
        }



    }


    return 0;
}

