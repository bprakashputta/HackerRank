#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long> riddle(vector<long> arr) {
    // complete this function
    long n = arr.size();
    // have to find minima in the batches
    // and then find maxima of the minima 
    // values
    cout<<"Hello";
    vector<long> res(n);
    res[0] = *max_element(arr.begin(), arr.end());
    for(long i=1; i<n; i++){
        long left = 0;
        long right = left + i;
        long minima = 0;
        for(int j=left; j<right; j++){
            if(minima > arr[j]) minima = arr[j];
        }
    }
return res;
}

int main(){
    long n;
    cin>>n;
    vector<long> arr(n);
    for(long i =0; i<n; i++){
        cin>>arr[i];
    }
    vector<long> res = riddle(arr);
    for(long i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
return 0;
}