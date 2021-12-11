
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
    int tst;
    cin>>tst;
    cin.ignore();
    bool flag=false;
    while(tst--)
    {
        if(flag) cout<<endl;
        flag=true;
        string s;
        while(getline(cin ,s)){
                if(s=="") break;
        for(int i=0; i<s.L; i++)
        {
            if(s[i]=='0') s[i]='O';
            if(s[i]=='1') s[i]='I';
            if(s[i]=='2') s[i]='Z';
            if(s[i]=='3') s[i]='E';
            if(s[i]=='4') s[i]='A';
            if(s[i]=='5') s[i]='S';
            if(s[i]=='6') s[i]='G';
            if(s[i]=='7') s[i]='T';
            if(s[i]=='8') s[i]='B';
            if(s[i]=='9') s[i]='P';

        }
        cout<<s<<endl;
    }

    }


    return 0;
}

