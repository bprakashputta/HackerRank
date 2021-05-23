#include<iostream>
using namespace std;

int countingValleys(int steps, string path) {
    int seal = 0;
    int valley = 0;
    for(int i=0; i<steps; i++){
        if(path[i]=='D'){
            seal--;
        } else if(path[i]=='U'){
            seal++;
        }
        if(path[i] == 'U'&&seal==0){
            valley++;
        }
    }
return valley;
}