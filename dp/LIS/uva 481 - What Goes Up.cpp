
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
vector<ll>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

/*ll dp[10009],next_lis[10009];

ll func(int i)
{
    if(dp[i]!=-1) return dp[i];
    ll ans=0LL;
    for(int j=i+1; j<v.size(); j++)
    {
        if(v[j]>v[i]){
        ll p=func(j);
        if(p>ans)
        {
            ans=p;
            next_lis[i]=j;
        }
        }
    }
    dp[i]=ans+1;
    return dp[i];
}


void lis()
{
    ll ans=0LL,start=0LL;
    for(int i=0; i<v.size(); i++)
    {
        ll p=func(i);
        if(p>ans)
        {
            ans=p;
            start=i;
        }

    }
    cout<<ans<<endl;
    cout<<"-"<<endl;
    while(start!=-1)
    {
        cout<<v[start]<<endl;
        start=next_lis[start];

    }
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    v.clear();
    ll num;
    for(int i=0; i<10001; i++)
    {
        dp[i]=-1;
        next_lis[i]=-1;
    }
    while(scanf("%lld", &num)==1LL)
    {
        v.pb(num);

    }
    lis();


    return 0;
}*/



int m[1000009],m_id[1000009],p[1000009],t[1000009];
int num,r=0,endr=0,i=0;



int main()
{
    fast();

    while(scanf("%d", &t[i])==1)
    {
        int pos=lower_bound(m, m+r, t[i])-m;
        m[pos]=t[i];
        m_id[pos]=i;
        p[i]=pos>0? m_id[pos-1]: -1;
        if(r==pos)
        {
            r++;
            endr=i;
        }
        i++;
        //if(t[i-1]==10) break;
    }

    cout<<r<<endl<<"-"<<endl;
    vector<int>ans;
    while(endr!=-1)
    {
        ans.pb(endr);
        endr=p[endr];
    }
    reverse(all(ans));
    for(i=0; i<ans.size(); i++) cout<<t[ans[i]]<<endl;
}

