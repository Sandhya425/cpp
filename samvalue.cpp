#include<iostream>
using namespace std;
// int factorial(int);
// int main(){
//     int n,r;
//     cin>>n>>r;
//     int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//     cout<<ncr;
//     return 0;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

void s(int arr[],int &len){
    int newlen=len;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<newlen;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<newlen-1;k++){
                    arr[k]=arr[k+1];
                }
                newlen--;
                j--;
            }
        }
    }
    len=newlen;
}
int main(){
    int arr[]={2,4,4,5,67,44,3,3,43};
    int len=sizeof(arr)/4;
    s(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}