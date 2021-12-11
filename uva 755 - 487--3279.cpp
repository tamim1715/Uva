
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

#define L s.length()


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
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<string, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
map<string, int>::iterator it;


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int tst;
    bool flag=false;
    cin>>tst;
    while(tst--)
    {
        if(flag) cout<<endl;
        mp.clear();
        int n;
        cin>>n;
        string s;
        for(int i=0; i<n; i++)
        {
            string s1="";
            cin>>s;
            for(int i=0; i<s.length(); i++)
            {
                int x=0;
                if(s1.length()==3) s1+='-';
                if(s[i]=='-') continue;
                if(s[i]>='0'&&s[i]<='9') s1+=s[i];
                else
                {
                    if(s[i]=='A'||s[i]=='B'||s[i]=='C') s1+='2';
                    else if(s[i]=='D'||s[i]=='E'||s[i]=='F') s1+='3';
                    else if(s[i]=='G'||s[i]=='H'||s[i]=='I') s1+='4';
                    else if(s[i]=='J'||s[i]=='K'||s[i]=='L') s1+='5';
                    else if(s[i]=='M'||s[i]=='N'||s[i]=='O') s1+='6';
                    else if(s[i]=='P'||s[i]=='R'||s[i]=='S') s1+='7';
                    else if(s[i]=='T'||s[i]=='U'||s[i]=='V') s1+='8';
                    else if(s[i]=='W'||s[i]=='X'||s[i]=='Y') s1+='9';

                }

            }
            //cout<<s1<<" "<<s1.length()<<endl;
            if(s1.length()==8) mp[s1]++;
        }
        bool flag1=false;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            if(it->second>=2)
            {
                cout<<it->first<<" "<<it->second<<endl;
                flag1=true;
            }
        }

        if(!flag1) cout<<"No duplicates."<<endl;
        flag=true;


    }

    return 0;
}


