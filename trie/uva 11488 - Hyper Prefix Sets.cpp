
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
int nnode=1,mx=0;

struct tamim
{
    int cnt;
    int next[2];
}t[500000];

void new_node(int cur)
{
    t[cur].next[0]=-1;
    t[cur].next[1]=-1;
    t[cur].cnt=1;
}

void in(string s)
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

struct node
{
    bool endmark;
    node* next[27];
    noe()
    {
        endmark=false;
        for(int i=0; i<26; i++)
        {
            next[i]=NULL;
        }
    }
}* root;

void insert(string s)
{
    node* cur=root;
    for(int i=0; i<s.L; i++)
    {
        int id=s[i]-'a';
        if(cur->next[id]==NULL)
        {
            cur->next[id]=new node();

        }
        cur=cur->next[id];
    }
    cur->endmark=true;
}

bool search(string s)
{
    node* cur=root;
    for(int i=0; i<s.L; i++)
    {
        int id=s[i]-'a';
        if(cur->next[id]==NULL)
        {
            return false;

        }
        cur=cur->next[id];
    }
    return cur->endmark;
}

void del(node* cur)
{

    for(int i=0; i<26; i++)
    {
        if(cur->next[i])
        {
            del(cur->next[i]);
        }
    }
    delete(cur);
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    root=new node();

    cout<<"Enter your number of words: "<<endl;
    int n;
    string s;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        insert(s);
    }
    int query;
    cout<<"enter your number of query: "<<endl;
    cin>>query;
    for(int i=0; i<query; i++)
    {
        cin>>s;
        if(search(s)) cout<<"FOUND"<<endl;
        else cout<<"NOT FOUND"<<endl;

    }
    del(root);


    return 0;
}


{
    int now=0;
    for(int i=0; i<s.L; i++)
    {
        if(t[now].next[s[i]-'0']==-1)
        {
            t[now].next[s[i]-'0']=++nnode;
            new_node(nnode);
            now=t[now].next[s[i]-'0'];

        }
        else
        {
            now=t[now].next[s[i]-'0'];
            t[now].cnt++;
            //cout<<t[now].cnt<<endl;
            mx=max(t[now].cnt*(i+1), mx);


        }
    }
    //cout<<"in "<<mx<<endl;

}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        nnode=0;
        mx=0;
        new_node(0);
        int n;
        cin>>n;
        while(n--)
        {
            string s;
            cin>>s;
            in(s);
            int p=s.L;
            mx=max(mx, p);
            //cout<<mx<<endl;
        }

        cout<<mx<<endl;



    }


    return 0;
}

