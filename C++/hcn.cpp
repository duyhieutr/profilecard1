#include<iostream>
using namespace std;
int main( )  
{
    int n;
    cin>>n;
    for(int i=1;i<=2*n+1;i++)
     {
        for(int j=1;j<=2*n+1;j++) 
        {
            if(i<n+1)
            {
                if(j<n+1) cout<<max(n+1-i,n+1-j);
                else cout<<max(n+1-i,j-n-1);
            }
            else
            {
                if(j<n+1)  cout<<max(i-n-1,n+1-j);
                else cout<<max(i-n-1,j-n-1);
     
            }
                
        }
     cout<<endl;
     }
     return 0;
}  