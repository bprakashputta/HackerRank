#include<bits/stdc++.h>
#include<string>
using namespace std;


string twoStrings(string s1, string s2) {
    map<char, unsigned int> m;
    for(unsigned int i=0; i<s1.length(); i++){
        m[s1[i]]++;
    }
    bool res = false;
    for( unsigned int i=0; i<s2.length(); i++){
        if(m[s2[i]]>0){
            res = true;
            break;
        }
    } 
    string ans = "";
    if(res){
        return "YES";
    }else{
        return "NO";
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        string str1, str2;
        cin>>str1>>str2;
        cout<<endl;
        cout<<twoStrings(str1, str2);
    }
    cout<<endl;
return 0;
}