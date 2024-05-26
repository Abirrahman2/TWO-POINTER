#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }


        long long ans=0;
         int l=0;
         int r=0;
         long long prefix[n+1]={0};
         int i=1;
        while(r<n)
        {
           if(r-l+1<=arr[r])
           {
               //ans++;
               prefix[i]=prefix[i-1]+r-l+1;
               i++;

               r++;
           }
           else
           {
               //l++;

               if(arr[r]<r-l+1)
               {
                   l++;
               }
               prefix[r+1]=prefix[r]+1;

           }

        }
        cout<<prefix[n]<<endl;
    }

}
