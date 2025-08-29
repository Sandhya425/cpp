//peak index in a mountain array{2,4,6,8,10,8,5},binary search used,time compexity=o(log n),sc=o(1),three condition banegi,array ascending decending order m sath m hoskti h
//Given an array arr[] where no two adjacent elements are same, find the index of a peak element. An element is considered to be a peak element if it is strictly greater than its adjacent elements. If there are multiple peak elements, return the index of any one of them.(gfg) 
//not work in acsending order{1,2,3,4,5} and it is work dscending order{40,20,10}
#include<iostream>
using namespace std;
int peakindex(int arr[],int n){
    int start=0,end=n-1,mid;
    while(start<=end){
         mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
           return mid;//peak
        }
        else if(arr[mid]>arr[mid-1]){
            start=mid+1;//right side move
        }
        else{
            end=mid-1;//arr[mid]<arr[mid-1]left side move
        }
    }
    return -1;
}
int main(){
int arr[1000];
int n;
cout<<"enter size";
cin>>n;
cout<<"elements";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<peakindex(arr,n);
return 0;
}




// #include<iostream>
// #include<vector>
// using namespace std;
// int peakindex(vector<int> &arr){
//     int siz=arr.size();
//     int start=0,end=siz-1,mid;
//     while(start<=end){
//         mid=end+(start-end)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//            return mid;//peak
//         }
//         else if(arr[mid]>arr[mid-1]){
//             start=mid+1;//right side move
//         }
//         else{
//             end=mid-1;//arr[mid]<arr[mid-1]left side move
//         }
//     }
//     return -1;
// }
// int main(){
// vector<int>arr={10,20,15,2,23,90,80};
// cout<<peakindex(arr);
// return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int peakindex(vector<int>&arr){
//       int siz=arr.size();
//     int start=0,end=siz-1,mid;
//     while(start<=end){
//         mid=end+(start-end)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//            return mid;//peak
//         }
//         else if(arr[mid]>arr[mid-1]){
//             start=mid+1;//right side move
//         }
//         else{
//             end=mid-1;//arr[mid]<arr[mid-1]left side move
//         }
//     }
//     return -1;
// }
// int main(){
// vector<int> arr={2,6,3,32,7};
// cout<<peakindex(arr);
// return 0;
// }