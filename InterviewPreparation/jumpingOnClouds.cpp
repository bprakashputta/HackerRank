#include<iostream>
#include<vector>
using namespace std;

// 0 0 0 1 0 0 1 0
int jumpingOnClouds(vector<int> arr){
    int n = arr.size();
    int count = 0;
    for(int i=0; i<n; i++){
        if(i<n-2&&arr[i+2]==0){
            i++;
        }
        if(i!=n-1){
            count++;
        }
        i++;
    }
    return count;
}