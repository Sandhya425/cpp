//The hiring team aims to find 3 candidates who are great collectively. Each candidate has his or her ability expressed as an integer. 3 candidates are great collectively if the product of their abilities is maximum. Given the abilities of some candidates in an array, arr[], return the maximum collective ability from the pool of candidates.
// Examples:

// Input: arr[] = [10, 3, 5, 6, 20]
// Output: 1200
// Explanation: Multiplication of 10, 6, and 20 is 1200.
// Input: arr[] = [-10, -3, -5, -6, -20]
// Output: -90
// Explanation: Multiplication of -3, -5 and -6 is -90.
// #include<iostream>
// using namespace std;
// int maxproductoftriplet(int arr[],int n){
//     int maxA=INT_MIN, maxB=INT_MIN, maxC=INT_MIN;
//     int minA=INT_MAX, minB=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxA){
//             maxC=maxB;
//             maxB=maxA;
//             maxA=arr[i];
//         }
//         else if(arr[i]>maxB){
//              maxC=maxB;
//               maxB=arr[i];
//         }
//         else if(arr[i]>maxC){
//               maxC=arr[i];
//         }
//         if(arr[i]<minA){
//             minB=minA;
//             minA=arr[i];
//         }
//         else if(arr[i]<minB){
//             minB=arr[i];
//         }
//     }
//      return max(maxA*maxB*maxC,minA*minB*maxA);
// }
// int main(){
//     int arr[] = {-5, -7, 4, 2, 1, 9};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<maxproductoftriplet(arr,n);
// }




#include<iostream>
#include<vector>
using namespace std;
int maxproductoftriplet(vector<int> &arr){
    int n=arr.size();
    int maxA=INT_MIN, maxB=INT_MIN, maxC=INT_MIN;
    int minA=INT_MAX, minB=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>maxA){
            maxC=maxB;
            maxB=maxA;
            maxA=arr[i];
        }
        else if(arr[i]>maxB){
             maxC=maxB;
              maxB=arr[i];
        }
        else if(arr[i]>maxC){
              maxC=arr[i];
        }
        if(arr[i]<minA){
            minB=minA;
            minA=arr[i];
        }
        else if(arr[i]<minB){
            minB=arr[i];
        }
    }
     return max(maxA*maxB*maxC,minA*minB*maxA);
}
int main(){
   vector<int>arr = {-5, -7, 4, 2, 1, 9};
    cout<<maxproductoftriplet(arr);
}