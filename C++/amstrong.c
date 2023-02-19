#include<iostram>
#includde<math.h>
int countDigits(int n);
int isarmstrongh(int n);

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(isarmstrongh(i) ==1 ) {
            cout<<i<<" ";
        }
    }
    return 0;
 }
 int countDigits(int n ){
    int count=0;
    while(n!=0){
        count ++;
        n/=10;
     }
 return count;
 }
 int isarmstrongh(int n) {
    int digits = countDigits(n);
    int tmp=n;
    int s=0;
    while(tmp!=0){
        s += pow(tmp%10,digits);
        tmp/=10;
 }
 if(s==n) return 1;
 return 0;
 }