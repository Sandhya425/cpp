// There is an integer array nums sorted in ascending order (with distinct values).leetcode

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length)
//  such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
//  For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

// Example 2:
// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1



//target jis  bhi index par h us index ko print krana h ye ascending order m bhi kam krega {1,2,3,4,5} and also work in dcending order//bianry serch
// #include<iostream>
// #include<vector>
// using namespace std;
// int searchtarget(vector<int> &arr,int target){
//  int start=0,end=arr.size()-1,mid;
//       while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]>=arr[0]){
//             if(arr[start]<=target && arr[mid]>=target){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         else{
//             if(arr[mid]<=target && arr[end]>=target){
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//       } 
//       return -1;
//     } 
// int main(){
// vector<int>arr={4,5,6,0,1,2};
// int target=6;
// cout<<searchtarget(arr,target);
//   return 0;
// }



// #include<iostream>
// using namespace std;
// int searchtarget(int arr[],int n,int target){
//  int start=0,end=n-1,mid;
//       while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         else if(arr[mid]>=arr[0]){
//             if(arr[start]<=target && arr[mid]>=target){
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         else{
//             if(arr[mid]<=target && arr[end]>=target){
//                 start=mid+1;
//             }

//             else{
//                 end=mid-1;
//             }
//         }
//       } 
//       return -1;
//     } 
// int main(){
// int arr[1000];
// int n;
// cout<<"enter size";
// cin>>n;
// cout<<"enter elements";
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// int target=6;
// cout<<searchtarget(arr,n,target);
//   return 0;
// }




#include<iostream>
using namespace std;
int searchtarget(int arr[],int n,int target){
 int start=0,end=n-1,mid;
  int ans=-1;
      while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=arr[mid];
            return ans;
        }
        else if(arr[mid]>=arr[0]){
            if(arr[start]<=target && arr[mid]>=target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && arr[end]>=target){
                start=mid+1;
            }

            else{
                end=mid-1;
            }
        }
      } 
      return ans;
    } 
int main(){
int arr[1000];
int n;
cout<<"enter size";
cin>>n;
cout<<"enter elements";
for(int i=0;i<n;i++){
     cin>>arr[i];
}
int target=6;
cout<<searchtarget(arr,n,target);
  return 0;
}