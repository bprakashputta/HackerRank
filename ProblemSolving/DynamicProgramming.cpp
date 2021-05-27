#include<iostream>
#include<vector>
using namespace std;

//Create an array for memoization
// long long MAX 1000;
long long memo[10000000];

//Recursion
long long fiboRecursion(long long n){
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    return fiboRecursion(n-1)+fiboRecursion(n-2);
}

//Memoization
long long fiboMemo(long long n){
    if(n<=1) return n;
    if(memo[n] != 0) return memo[n];
    else memo[n] = fiboMemo(n-1)+fiboMemo(n-2);
return memo[n];
}

long long fibo(long long n){
    long long f[n+1];
    f[0]=0, f[1]=1;
    for(long long i=2; i<=n; i++){
        f[i] = f[i-1]+f[i-2];
    }
return f[n];
}

vector<int> countBits(int n) {
    vector<int> b(n+1);
    int offset = 1;
    for(int i=1; i<=n;i++){
        if(offset*2 == i){
            offset = 2*offset; 
        }
        b[i] = b[i-offset]+1;
    }
return b;
}

int main(){
    long long n;
    cin>>n;
    cout<<"Fibonacci : "<<fibo(n)<<endl;
return 0;
}