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
       int arr[n+1];
       //string s(n+1,'0');
       for(int i=1;i<=n;i++)
       {
           int val;
           cin>>val;
           //cin>>arr[i];
           arr[val]=i;
       }
       string s(n+1,'0');
       s[1]='1';
       s[n]='1';
       int l=arr[1];
       int r=arr[1];
       for(int i=2;i<=n-1;i++)
       {
           l=min(arr[i],l);
           r=max(arr[i],r);
           if(r-l+1==i)
           {
               s[i]='1';
           }
           else{
            s[i]='0';
           }

       }
       //cout<<s<<endl;
     /*  for(int i=0;i<n;i++)
       {
           int l=0;
           int r=0;
           bool track=false;
           while(r<=n-1)
           {

               if(arr[r]<=arr[i])
               {
                   if(r-l+1==arr[i])
                   {
                       track=true;
                       //cout<<1;
                       s[arr[i]]='1';
                       break;
                   }
                   r++;
               }
               else{

                r++;
                l=r;
               }

           }
           if(track==false)
           {
               //cout<<0;
               s[arr[i]]='0';
           }
       }*/
       for(int i=1;i<=n;i++)
       {
           cout<<s[i];
       }
       //cout<<s<<endl;


       cout<<endl;
   }
}
