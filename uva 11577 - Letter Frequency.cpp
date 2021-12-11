
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
vector<pii>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    cin.ignore();
    while(tst--)
    {
        string s;


        getline(cin, s);

        //cout<<s<<endl;
        mp.clear();
        v.clear();
        for(int i=0; i<s.L; i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
            mp[s[i]]++;
            //cout<<s[i]<<" "<<mp[s[i]]<<endl;
        }
        for(char c='a'; c<='z'; c++)
        {
            //cout<<c<<" "<<mp[c]<<endl;
            if(mp[c]>=1)
            {
                v.pb({mp[c], c});
                //cout<<c<<endl;
            }
        }

        sort(all(v));
        reverse(all(v));
        string s1="";
        s1+=v[0].S;
        for(int i=1; i<v.size(); i++)
        {
            if(v[i].F==v[i-1].F) s1+=v[i].S;
            else break;
        }
        sort(all(s1));
        cout<<s1<<endl;

    }


    return 0;
}

