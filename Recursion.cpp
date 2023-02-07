#include <bits/stdc++.h>
using namespace std;

//Basic Approach : Using Variable to search is stored
int IsSorted (int a[] , int n , int i){
    if (i == n-1)return 1;
    if (a[i] <= a[i+1])return IsSorted(a , n , i+1);
    else return -1;
}
/*-----------------------------------------------------*/
//All functions using pointer
//Without using variable to search is sorted (Recursion)
int SortedIs (int *a , int n){
    if (n == 1)return 1;
    if (a[0] < a[1])return SortedIs(a+1 , n-1);
    else return -1;
}

//FirstOccurence of element k (BackTracking)
int FirstOccurence(int *a , int n , int k){
    if (n == 1)return -1;
    if (a[0] == k)return 0;
    else return 1+FirstOccurence(a+1 , n-1 , k);
}

//LastOccurence of element k (BackTracking)
int LastOccurence(int *a , int n , int k){
    if (n == 0)return -1;
    int ind = LastOccurence(a+1 , n-1 , k);
    if (ind == -1){
        if (a[0] == k)return 0;
        return -1;
    }
    return 1+ind;
}

//AllOccurence of element k
int AllOccurence(int *a , int n , int k , int *out , int i , int j){
    if (n == 0) return j;
    if (a[0] == k){
        out[j] = i; 
        return AllOccurence(a+1 , n-1 , k , out , i+1 , j+1);
    }
    return AllOccurence(a+1 , n-1 , k ,out , i+1 ,j);

} 
int main() {
    int a[] = {1,4,2,5,4,6,2,5,5,5,5};
    int n = sizeof(a)/sizeof(a[0]);
    int out[n] = {};
    int ans = AllOccurence(a , n , 5 , out , 0 , 0);
    for (int i = 0 ; i < ans ; i++){
        cout<<out[i]<<" ";
    }
}
