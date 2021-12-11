
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back
#define sti(a) st.insert(a)
#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)
#define l s.length()
#define sts st.size()
#define mpss mps.size()
#define mpis mpi.size()
#define vs v.size()
#define sort(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

map<int, int>mpi;
map<string, int>mps;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator it;
vector<int>::iterator itv;

ll n;
ll t[50005];
void bs(ll num)
{
    ll low=0L,high=n+1,mid;
    ll a,b,i,j;
    while(low<=high)
    {
        mid=(low+high)/2;
        //cout<<t[mid]<<endl;
        if(t[mid]==99999999999)
        {
            i=mid-1;
            while(t[mid]==t[i]) i--;
            a=t[i];
            //a=t[mid-1];
            b=0;
            break;
        }
        if(t[mid]==0)
        {
            a=0;
            if(t[mid+1]==num) mid++;
            j=mid+1;
            while(t[mid]==t[j]) j++;

            b=t[j];
            break;
        }
        if(t[mid]==num)
        {
            i=mid-1;
            while(t[mid]==t[i]) i--;
            a=t[i];
            j=mid+1;
            while(t[mid]==t[j]) j++;
            b=t[j];
            break;
        }
        if(t[mid]<num&&t[mid+1]>num)
        {
            a=t[mid];
            j=mid+1;
            while(t[mid]==t[j]) j++;
            b=t[j];
            break;
        }
        if(t[mid]>num&&t[mid-1]<num)
        {
            i=mid-1;
            while(t[mid]==t[i]) i--;
            a=t[i];
            b=t[mid];
            break;
        }
        if(t[mid]<num)
        {
            low=mid+1;
        }
        else high=mid-1;

    }
    if(a==0||a==99999999999) cout<<"X ";
    else cout<<a<<" ";
    if(b==0||b==99999999999) cout<<"X"<<endl;
    else cout<<b<<endl;

}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mpi.clear();
    mps.clear();
    st.clear();
    v.clear();

    cin>>n;


    fl(1,n+1) cin>>t[i];
    t[n+1]=99999999999;
    ll q;
    cin>>q;
    fl(0,q)
    {
        ll a;
        cin>>a;
        /*if(a<t[0])
        {
            cout<<"X "<<t[0]<<endl;
            continue;
        }
        else if(a<t[0])
        {
            cout<<"X "<<t[0]<<endl;
            continue;
        }
        else if(a<t[0])
        {
            cout<<"X "<<t[0]<<endl;
            continue;
        }
        else if(a<t[0])
        {
            cout<<"X "<<t[0]<<endl;
            continue;
        }*/
        bs(a);
    }
    return 0;
}

