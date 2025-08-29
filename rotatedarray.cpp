//sorted array{1,2,3,4,5} find minimum element in sorted array  //it is work ascending order{1,2,3,4,5}//it is not work dscending order{10,1,2,3}
 //examples //   {5,1,2,3,4}
         // {4,5,1,2,3}
         // {3,4,5,1,2}
         // {2,3,4,5,1}
         //{1,2,3,4,5}//tc=o(log n),sc=o(1)
// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.
// Example 2:

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0
// Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
// Example 3:

// Input: nums = [11,13,15,17]
// Output: 11
// Explanation: The original array was [11,13,15,17] and it was rotated 4 times.        

// #include<iostream>
// using namespace std;
// int minelement(int arr[],int n){
//   int ans=arr[0];
//    int start=0,end=n-1,mid;
//    while(start<=end){
//     mid=start+(end-start)/2;
//     if(arr[mid]>=arr[0]){//left side sorted
//       start=mid+1;
//     }
//     else if(arr[mid]<arr[0]){//right side sorted
//       ans=arr[mid];
//       end=mid-1;
//     }
//    }
//    return ans;
// } 
// int main(){
//   int arr[1000];
//   int n;
//   cout<<"enter size";
//   cin>>n;
//   cout<<"elememts";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   cout<<minelement(arr,n);
//   return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int minelement(vector<int>&arr){
  int ans=arr[0];
   int start=0,end=arr.size()-1,mid;
   while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]>=arr[0]){//left side sorted
      start=mid+1;
    }
    else if(arr[mid]<arr[0]){//right side sorted
      ans=arr[mid];//value print
       //ans=mid;index print
      end=mid-1;
    }
   }
   return ans;
} 
int main(){
  vector<int>arr={10,1,2,3,1,2,3};
  cout<<minelement(arr);
  return 0;
}