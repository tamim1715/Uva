
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
    int tst,n;
    bool flag=0;
    string s;
    while(cin>>s)
    {
        int mod4,mod100,mod400,mod15,mod55;
        mod4=mod100=mod400=mod15=mod55=0;

        for(int i=0; i<s.L; i++)
        {
            mod4=((mod4*10)%4+(s[i]-'0'))%4;
            mod100=((mod100*10)%100+(s[i]-'0'))%100;
            mod400=((mod400*10)%400+(s[i]-'0'))%400;
            mod15=((mod15*10)%15+(s[i]-'0'))%15;
            mod55=((mod55*10)%55+(s[i]-'0'))%55;
        }
        if(flag) cout<<endl;
        if((mod400==0)||(mod4==0&&mod100!=0))
        {
            cout<<"This is leap year."<<endl;
            if(mod15==0) cout<<"This is huluculu festival year."<<endl;
            if(mod55==0) cout<<"This is bulukulu festival year."<<endl;
        }
        else if(mod15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            //if(mod55==0) cout<<"This is bulukulu festival year."<<endl;
        }
        //else if(mod55==0) cout<<"This is bulukulu festival year."<<endl;
        else cout<<"This is an ordinary year."<<endl;
        flag=1;
    }


    return 0;
}

