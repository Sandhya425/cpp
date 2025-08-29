// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int n;
//     cout<<"enter size";
//     cin>>n;
//     int start=0,end=n,mid,ans;
//      while(start<=end){
//         if(mid*mid==n){
//             ans=mid;
//             break;
//         }
//         else if(mid*mid<n){
//             ans=mid;
//             start=mid+1;
//         }
//         else{
//             ans=mid-1;
//         }
//      }
//      cout<<ans;
//      return 0;
// }


 #include<iostream>
 using namespace std;
    int mysqrt(int arr[],int x){
        if(x<2)
        return x;
        int size=sizeof(arr)/sizeof(int);
        int start=0,end=size;int mid,ans;
     while(start<=end){
        if(mid==x/mid){
            ans=mid;
            break;
        }
        else if(mid<x/mid){
            ans=mid;
            start=mid+1;
        }
        else{
            ans=mid-1;
        }
     }
     return ans;
    }
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    // int x;
    // cout<<"enter value";
    // cin>>x;
    int target;
    cout<<"enter target";
    cin>>target;
    cout<<mysqrt(arr,target);
    return 0;
}