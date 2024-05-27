#include<bits/stdc++.h>
using namespace std;
//const int N=2e5+7;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k,d;
      cin>>n>>k>>d;
      int arr[n];
       //map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          //mp[arr[i]]++;

      }


     int hashing[k+1]={0};
     int l=0;
     int r=0;
     int minisub=0;
     int ans=INT_MAX;
     while(r<n)
     {

             if(r-l+1<d)
             {
                 if(hashing[arr[r]]==0)
                 {
                     minisub++;
                     hashing[arr[r]]++;
                 }
                 else{
                    hashing[arr[r]]++;
                 }

                  r++;


             }
             else if(r-l+1==d)
             {
                 if(hashing[arr[r]]==0)
                 {
                     hashing[arr[r]]++;
                     minisub++;
                     ans=min(minisub,ans);
                 }
                 else{
                        hashing[arr[r]]++;
                     ans=min(minisub,ans);
                 }
                 r++;
             }
             else{
                    hashing[arr[l]]--;
                  if(hashing[arr[l]]==0)
                  {
                      //hashing[l]++;
                     // ans--;
                      minisub--;
                  }
                l++;
             }


     }
     cout<<ans<<endl;



  }
}
