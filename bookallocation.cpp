// Book allocation 
//#include<iostream>
// using namespace std;
// int main(){
//     int arr[]={12,34,67,90};
//     int start=0,end=0,mid;
//     int n=4,m=2,ans;
//    // int page=0,count=1;
//     for(int i=0;i<n;i++){
//         start=max(start,arr[i]);
//          end=end+arr[i];
//     }
//     while(start<=end){
//          int page=0,count=1;
//         mid=start+(end-start)/2;
//         for(int i=0;i<n;i++){
//               page=page+arr[i];
//             if(page>mid){
//                 count++;
//                 page=arr[i];
//             }
//         }
//         if(count<=m){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     cout<<ans;
// }





// Given an array arr[] and k, where the array represents the boards and each element of the given array represents the length of each board.
// k numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint. 
//The task is to find the minimum time to get this job done by painting all the boards under the constraint that any painter will only paint the continuous sections of boards.
// say board [2, 3, 4] or only board [1] or nothing but not board [2, 4, 5].
// Examples: 
// Input: arr[] = [5, 10, 30, 20, 15], k = 3
// Output: 35

//The Painter's Partition Problem-II
// #include<iostream>
// using namespace std;
// int painterpartitions(int arr[],int n,int k){
// int start=0,end=0,mid,ans;
// for(int i=0;i<n;i++){
//     start=max(start,arr[i]);
//     end=end+arr[i];
// }
// while(start<=end){
//     int page=0,count=1;
//     mid=start+(end-start)/2;
//     for(int i=0;i<n;i++){
//         if(page>mid){
//             count++;
//             page=arr[i];
//         }
//     }
//   if(count<=k){
//     ans=mid;
//     end=mid-1;
//   }
//   else{
//     start=mid+1;
//   }
// }
// return ans;
// }
// int main(){
//  int arr[] = {5, 10, 30, 20, 15}, k = 3;
// // int arr[] = {19,9,30,22,7}, k = 3;
// int n=sizeof(arr)/sizeof(int);
// cout<<painterpartitions(arr,k,n);
// return 0;
// }




//ship packages
#include <iostream>
using namespace std;

int painterpartitions(int arr[], int n, int k) {
    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < n; i++) {
        start = max(start, arr[i]);  // max single element
        end += arr[i];               // sum of all
    }

    while (start <= end) {
        int load = 0, day = 1;
        mid = start + (end - start) / 2;

        for (int i = 0; i < n; i++) {
            if (load + arr[i] > mid) {  // FIXED CONDITION
                day++;
                load = arr[i];
            } else {
                load += arr[i];
            }
        }

        if (day <= k) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, days = 5;
    int n = sizeof(arr) / sizeof(int);
    cout << painterpartitions(arr, n, days);
    return 0;
}
