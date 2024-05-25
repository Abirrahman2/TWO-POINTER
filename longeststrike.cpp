#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,k;
      cin>>n>>k;
      int arr[n];
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          mp[arr[i]]++;
      }
      sort(arr,arr+n);
      vector<int>v;
      map<int,int>mp2;
      bool track2=false;
      for(int i=0;i<n;i++)
      {


              if(mp[arr[i]]>=k && mp2[arr[i]]==0)
              {
                  mp2[arr[i]]++;
                  v.push_back(arr[i]);
                  track2=true;

              }



      }
//      for(auto it: v)
//      {
//          cout<<it<<" ";
//      }
//      cout<<endl;
      if(v.size()==0)
      {
          cout<<-1<<endl;

      }
      else{
            int maxl=v[0];
             int maxr=v[0];
             int maxlength=1;

            int l=0;
            int r=0;
            while(r<v.size()-1)
            {
                if((v[r+1]-v[r])==1)
                {
                    r++;
                    if(maxlength<=r-l+1)
                    {
                        maxr=v[r];
                       maxl=v[l];
                       maxlength=r-l+1;
                    }
                }
                else{
                    l=r+1;
                    r++;


                }
            }
            cout<<maxl<<" "<<maxr<<endl;

      }

     // cout<<endl;
  }
}
