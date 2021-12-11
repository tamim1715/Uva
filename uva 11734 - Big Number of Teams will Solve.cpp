
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



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst,cas=0;
    cin>>tst;
    cin.ignore();
    while(tst--)
    {
        cout<<"Case "<<++cas<<": ";
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        bool flag=true;
        int space=0,check=0;
        for(int i=0; i<s1.L; i++)
        {
            if(s1[i]==s2[check]) {check++; continue;}
            if(s1[i]!=s2[check] &&s1[i]==' ') space++;
            else
            {
                flag=false;
                break;
            }
        }
        if(!flag||check!=s2.L) cout<<"Wrong Answer"<<endl;
        else if(flag&&space) cout<<"Output Format Error"<<endl;
        else cout<<"Yes"<<endl;

    }


    return 0;
}

