#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int count = 0;
    while(x != 0){
        if(x >= 5){
            x = x-5;
            count++;
        }
        else if(x < 5 && x >= 4){
            x = x-4;
            count++;
        }
        else if(x < 4 && x >= 3){
            x = x-3;
            count++;
        }
        else if(x < 3 && x >= 2){
            x = x-2;
            count++;
        }
        else{
            x = x-1;
            count++;
        }
    }
    cout<<count;
    return 0;
}