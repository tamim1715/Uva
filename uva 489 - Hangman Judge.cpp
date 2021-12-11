
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

map<char, int>mp,mp1;

vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n;

    while(cin>>n&&n!=-1)
    {
        string a,b;
        cin>>a>>b;
        mp.clear();
        mp1.clear();
        bool flag=true;
        int cnt=0;
        int cnt1=0;
        for(int i=0; i<a.L; i++)
        {
            if(mp[a[i]]==0)
            {
                mp[a[i]]++;
                cnt++;
            }
        }
        for(int i=0; i<b.L; i++)
        {
            if(mp[b[i]])
            {
                mp[b[i]]=0;
                cnt--;
                mp1[b[i]]=1;
            }
            else if(mp1[b[i]]==0)
            {
                cnt1++;
                mp1[b[i]]=1;

            }
            if(cnt1==7) break;

        }
        cout<<"Round "<<n<<endl;
        if(cnt==0) cout<<"You win."<<endl;
        else if(cnt1<7) cout<<"You chickened out."<<endl;
        else cout<<"You lose."<<endl;

    }


    return 0;
}

