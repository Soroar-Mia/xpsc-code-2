#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MX 2000000000


int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      int n;                  cin>>n;
      vector<int>a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      int req=-1;
      for(int i=0;i<n;i++){
         if(a[i]>i){
            req=i;
            break;
         }
      }
      if(req==-1)req=n;

      int bobPicked=MX,turn=0;
      bool alice=true;
      while(true){
         if(turn>(2*n)+1 or bobPicked==-1)break;
         if(alice){
            if(bobPicked<=req){
               cout<<bobPicked<<endl;
               cout.flush();
            }
            else{
               cout<<req<<endl;
               cout.flush();
            }
         }
         else{
            cin>>bobPicked;
         }
         alice^=true;
         turn++;
      }
   }
   return 0;
}
