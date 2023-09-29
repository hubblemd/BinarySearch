#include <bits/stdc++.h>
#define int long long
#define f first
#define s second
#define pb push_back
#define yes cout << "yes" << endl
#define no cout << "no" << endl

using namespace std;



void solve() 
{
    int n,m;cin>>n>>m;
    vector<int>city(n),tower(m);
    for(int i=0;i<n;i++) cin>>city[i];
   
    int low=0,high=2e9,ans=0;
    while(low<=high)
    {
        int mid = low + (high - low) / 2;
        if(madhav(mid,city,tower,n,m)==true)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
        //cout<<"\n";
   }
  
   cout<<ans<<endl;
}
    
signed main() 
{
    int t =1;
    //cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
/*this will be done to check how to reflect changes on git through vs*/

