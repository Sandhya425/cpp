//given an array of integers arr sorted in non decreasing order find the starting and ending position of a given target value.if the target  is not
//found in the array ,return [-1,-1].runtime complexity=o(log n)

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter size";
//     cin>>n;
//     cout<<"enter elements";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int start=0,end=n-1,mid;
//     int first=-1,last=-1;
//     //first index
//     while(start<=end){
//        mid=start+(end-start)/2;
//        if(arr[mid]==target){
//           first=mid;
//           end=mid-1;
//        }
//        else if(arr[mid]<target){
//          start=mid+1;
//        }
//        else{
//         end=mid-1;
//        }
//     }
//     //last index
//       start=0,end=n-1;
//         while(start<=end){
//        mid=start+(end-start)/2;
//        if(arr[mid]==target){
//           last=mid;
//           start=mid+1;
//        }
//        else if(arr[mid]<target){

//          start=mid+1;
//        }
//        else{
//         end=mid-1;
//        }
//     }
//     cout<<first<<" "<<last;
//     return 0;
// }



#include<iostream>
using namespace std;
pair<int,int> searchrange(int arr[],int n,int target){
   int start=0,end=n-1,mid;
   int first=-1,last=-1;
   //first index
   while(start<=end){
      mid=start+(end-start)/2;
      if(arr[mid]==target){
           first=mid;
           end=mid-1;
      }
      else if(arr[mid]<target){
            start=mid+1;
      }
      else{
          end=mid-1;
      }
   }
   //last index of target
   start=0,end=n-1;
     while(start<=end){
      mid=start+(end-start)/2;
      if(arr[mid]==target){
           last=mid;
           start=mid+1;
      }
      else if(arr[mid]<target){
            start=mid+1;
      }
      else{
          end=mid-1;
      }
   }
   return{first,last};
}
int main (){
   int arr[1000];
   int n;
   cout<<"enter size";
   cin>>n;
   cout<<"enter elements";
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int target;
   cin>>target;
   pair<int,int>ans=searchrange(arr,n,target);
   // cout<<searchrange(arr,n,target);
   cout<<ans.first<<" "<<ans.second;
   return 0;
}