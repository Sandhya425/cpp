#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,5};//missing 4
    int sum=0;
    int ans=0;
    for(int i=0;i<5-1;i++){
        sum=sum+arr[i];//sum+=arr[i]
    }
    for(int i=0;i<5;i++){
    int ans=0;
    ans=ans+arr[i];
    }
    int total=ans-sum;
    cout<<total;
  return 0;

   // fabbonaccci series in array.
    // int arr[1000];
    // arr[0]=0;
    // arr[1]=1;
    // int n;
    // cin>>n;
    // for(int i=2;i<=n-1;i++){
    //     arr[i]=arr[i-1]+arr[i-2];
    // }
    // cout<<arr[n-1];
    
}