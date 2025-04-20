#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n;
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
      arr[0]=0;
      arr[1]=1;
      arr[i]=arr[0]+arr[1];
      cout<<arr[i];
      arr[0]=arr[1];
      arr[1]=arr[i];
    }
}