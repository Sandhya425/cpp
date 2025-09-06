// You are given an array with unique elements of stalls[], which denote the positions of stalls. 
// You are also given an integer k which denotes the number of aggressive cows. 
// The task is to assign stalls to k cows such that the minimum distance between any two of them is the maximum possible.
//example  Input: stalls[] = [1, 2, 4, 8, 9], k = 3,Output: 3,Input: stalls[] = [10, 1, 2, 7, 5], k = 3,Output: 4


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int aggresivecow(vector<int>&stalls,int k){
//     sort(stalls.begin(),stalls.end());
//     int n= stalls.size();
//     int start=1,end,mid,ans;
//     end=stalls[n-1]-stalls[0];
//     while(start<=end){
//         mid=start+(end-start)/2;
//        int cow=1,posi=stalls[0];
//        for(int i=0;i<n;i++){
//         if(posi+mid<=stalls[i]){
//             cow++;
//             posi=stalls[i];
//         }
//        }
//        if(cow<k){
//         end=mid-1;
//        }
//        else{
//         ans=mid;
//         start=mid+1;
//        }
//     }
//     return ans;
// }
// int main(){
//    vector<int>stalls={10,1,2,7,5};
//    int k=3;
//   cout<<aggresivecow(stalls,k);
//   return 0;
// }




//koko eating banana
