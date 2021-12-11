
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
    string s;
    string s3="ay";
    //cin.ignore();
    while(getline(cin, s))
    {
        //cout<<s<<endl;
        for(int i=0; i<s.L; i++)
        {
            //int x=s[i];
            if(s[i]==' '||s[i]=='\n'||!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
            {
                cout<<s[i];
                //cout<<"tamim"<<endl;
                continue;
            }
            string s1="";
            string s2="";
            int j;
            if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
            {

                j=i+1;
                bool flag=true;
                while(j<s.L&&s[j]!=' ')
                {
                    if(!((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')))
                    {
                        s1+=s[i];
                        s1+=s3;
                        cout<<s1;
                        flag=false;
                        break;
                    }
                    s1+=s[j];
                    j++;

                }
                if(flag) cout<<s1+s[i]+s3;


            }
            else
            {
                j=i;
                bool flag=true;
                while(j<s.L&&s[j]!=' ')
                {
                    if(!((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')))
                    {
                        //s1+=s[i];
                        s1+=s3;
                        cout<<s1;
                        flag=false;
                        break;
                    }
                    s1+=s[j];
                    j++;

                }
                if(flag) cout<<s1+s3;
                //s1+=s3+s2;
                //cout<<s1;

            }
            i=j-1;





        }
        cout<<endl;

    }


    return 0;
}

