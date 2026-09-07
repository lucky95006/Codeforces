#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if(n%2==0){
        cout<<(long long)(n/2);
    }
    else{
        cout<<(long long)(-1-n)/2;
    }

    return 0;
}