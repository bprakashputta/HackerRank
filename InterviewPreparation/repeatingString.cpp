#include<iostream>
#include<vector>
#include<string>
using namespace std;

long repeatingString(string s, long n){
    int counta=0;
    long count = 0;
    for(int i=0; i<s.length();i++){
        if(s[i] == 'a'){
            counta++;
        }
    }
    count = counta * (n/s.length());
    n = n%s.length();
    for(int i=0; i<n; i++){
        if(s[i]=='a'){
            count++;
        }
    }
return count;
}