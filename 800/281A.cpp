#include<iostream>
using namespace std;

int main(){
    char str[1000];
    cin>>str;
    if((int)str[0]>=97 && (int)str[0]<=122){
        str[0]= str[0]-32;
        cout<<str;
    }
    else{
        cout<<str;
    }
    return 0;
}