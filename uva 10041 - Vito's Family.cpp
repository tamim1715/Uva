#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
#include<cmath>
#include<string>
#include<iomanip>
#include<set>
#include<queue>
#include<stack>
//add in git djfklajsdlfkfjkl




#define ll long long
#define pb push_back

using namespace std;

vector<pair<int, int> >v;

int main()
{
   int tst;
   cin>>tst;
   while(tst--)
   {

       int n;
       cin>>n;
       ll t[n];
       for(int i=0; i<n; i++) cin>>t[i];
       sort(t, t+n);
       ll ans=0LL;
       for(int i=1; i<n; i++) 
       {
           ans+=(t[i]-t[i-1]);
       }
       cout<<ans<<endl;

   }
}