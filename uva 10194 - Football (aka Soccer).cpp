
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
#define mod 1e9+7

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
//vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct tamim{
    string name;
    int win,lose,tie,point,goaldifference,goal,khaiche,played;
};
//vector<tamim>v;
bool cmp(tamim a, tamim b)
{
    if(a.point!=b.point) return a.point>b.point;
    else if(a.win!=b.win) return a.win>b.win;
    else if(a.goaldifference!=b.goaldifference) return a.goaldifference>b.goaldifference;
    else if(a.goal!=b.goal) return a.goal>b.goal;
    else if(a.played!=b.played) return a.played<b.played;
    return a.name<b.name;
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    bool flag=false;
    while(tst--)
    {
        if(flag) cout<<endl;
        flag=true;
        string s;
        cin.ignore();
        getline(cin, s);
        cout<<s<<endl;
        int n,m;
        cin>>n;
        tamim t[n];
        cin.ignore();
        for(int i=0; i<n; i++)
        {
            getline(cin, s);
            t[i].name=s;
            t[i].goal=0;
            t[i].khaiche=0;
            t[i].win=0;
            t[i].lose=0;
            t[i].point=0;
            t[i].goaldifference=0;
            t[i].tie=0;
            t[i].played=0;
        }
       // for(int i=0; i<n; i++) cout<<t[i].name<<" ";
       // cout<<endl;
        cin>>m;
        //string s1="",s2="";
        //int a,b;
        cin.ignore();
        while(m--)
        {
            string s1="",s2="";
            int a=0,b=0;

            getline(cin,s);
            int i;
            for(i=0; s[i]!='#'; i++)
            {
                //if(s[i]==)
                s1+=s[i];
            }
            i++;
            a=char_to_int(s[i]);
            i++;
            if(s[i]!='@') a=a*10+char_to_int(s[i]), i++;
            i++;
            b=char_to_int(s[i]);
            i++;
            if(s[i]!='#') b=b*10+char_to_int(s[i]), i++;
            i++;
            for( ; s[i]<s.L; i++)
            {
                s2+=s[i];
            }
            int x,y,x1,y1,d1,d2,w1=0,w2=0,l1=0,l2=0;
            if(a>b)
            {
                x=3;
                y=0;
                x1=0;
                y1=0;
                d1=a-b;
                d2=b-a;
                w1=1;
                l2=1;

            }
            else if(a<b)
            {
                y=3;
                x=0;
                y1=0;
                x1=0;
                d1=a-b;
                d2=b-a;
                w2++;
                l1--;
            }
            else
            {
                y=1;
                x=1;
                y1=1;
                x1=1;
                d1=a-b;
                d2=b-a;
            }
            for(int i=0; i<n; i++)
            {
                if(t[i].name==s1)
                {
                    t[i].point+=x;
                    t[i].goal+=a;
                    t[i].khaiche+=b;
                    t[i].win+=w1;
                    t[i].lose+=l1;
                    t[i].goaldifference+=d1;
                    if(x==y) t[i].tie+=1;
                    t[i].played++;
                }
                if(t[i].name==s2)
                {
                    t[i].point+=y;
                    t[i].goal+=b;
                    t[i].khaiche+=a;
                    t[i].win+=w2;
                    t[i].lose+=l2;
                    t[i].goaldifference+=d2;
                    if(x==y) t[i].tie+=1;
                    t[i].played++;
                }
            }
            //cout<<s1<<" "<<s2<<" "<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<x1<<" "<<y1<<" "<<d1<<" "<<d2<<" "<<w1<<" "<<w2<<" "<<l1<<" "<<l2<<endl;
        }
        sort(t, t+n, cmp);

        for(int i=0; i<n; i++)
        {
            cout<<i+1<<") "<<t[i].name<<" "<<t[i].point<<"p, "<<t[i].played<<"g ("<<t[i].win<<"-"<<t[i].tie<<"-"<<t[i].lose<<"), "<<t[i].goaldifference<<"gd ("<<t[i].goal<<"-"<<t[i].khaiche<<")"<<endl;
        }
    }


    return 0;
}

