
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
    freopen("tamim.txt", "w", stdout);
    fast();
   string s;
    while(getline(cin, s))
    {
        string s1="";

        if(s[0]>='0'&&s[0]<='9')
        {
            reverse(all(s));
            for(int i=0; i<s.L; i++)
            {
                int p=0;

                if(s[i]=='1')
                {
                    p=p*10+s[i]-'0';
                    p=p*10+s[i+1]-'0';
                    p=p*10+s[i+2]-'0';
                    i+=2;

                }
                else
                {
                    p=p*10+s[i]-'0';
                    p=p*10+s[i+1]-'0';
                    i++;
                }
                char c=p;
                s1+=c;

            }
            cout<<s1<<endl;
            continue;

        }
        s1="";
        for(int i=0; i<s.L; i++)
        {
            int p=s[i];
            string s2="";
            while(p)
            {
                s2+=(p%10+'0');
                p/=10;
            }
            reverse(all(s2));
            s1+=s2;
        }
        reverse(all(s1));
        cout<<s1<<endl;


    }


    return 0;
}

