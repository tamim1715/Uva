
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
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

int char_to_int(char c)
{
    int x=c-48;
    return x;
}
char int_to_char(int x)
{
    int c=x+48;
    return c;
}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int w[505][505];
int next[505][505];
int t[1009];
/*void set_n(int n)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n;j++) w[i][j]=INF,next[i][j]=j;
    }
}*/

int main()
{
   // freopen("tamim.txt", "w", stdout);
    fast();

    bool flag=false;

    int tst;
    cin>>tst;
    cin.ignore(1, '\n');
    //cin.ignore(1, '\n');
    while(tst--)
    {

        //set_n(100);
        string s;
        //cin.ignore();
        getline(cin, s);
        //cout<<s<<endl;
        stringstream s1(s);
        int x=1,temp,a;
        while(s1>>temp)
        {
            if(temp==-1) w[1][x]=INF,next[1][x]=x;
            else w[1][x]=temp,next[1][x]=x;
            //cout<<w[1][x]<<" "<<x<<endl;
            x++;
        }
        //cout<<x<<endl;
        for(int i=2; i<x; i++)
        {
            for(int j=1; j<x; j++)
            {
                cin>>a;
                if(a==-1) w[i][j]=INF;
                else w[i][j]=a;
                next[i][j]=j;
            }
        }
        for(int i=1; i<x; i++)
        {
            cin>>a;
            t[i]=a;
        }
        for(int k=1; k<x; k++)
        {
            for(int i=1; i<x; i++)
            {
                for(int j=1; j<x; j++)
                {
                    if(w[i][j]>(ll)(w[i][k]+w[k][j]+t[k]))
                    {
                        w[i][j]=w[i][k]+w[k][j]+t[k];
                        next[i][j]=next[i][k];
                    }
                }
            }
        }
        cin.ignore(1, '\n');

        while(getline(cin, s), !s.empty())
        {
            v.clear();

            int st,dst;
            stringstream s1(s);
            s1>>st;
            s1>>dst;
            temp=st;
            v.pb(st);
            while(st!=dst)
            {
                st=next[st][dst];
                v.pb(st);
            }

             st=temp;
         if(flag) cout<<endl;
         cout<<"From "<<st<<" to "<<dst<<" :"<<endl;
         cout<<"Path: ";
         for(int i=0; i<v.size(); i++)
         {
             if(i) cout<<"-->";
             cout<<v[i];
         }
         cout<<endl;
         cout<<"Total cost : "<<w[st][dst]<<endl;
          flag=true;
        }

    }
    return 0;
}

