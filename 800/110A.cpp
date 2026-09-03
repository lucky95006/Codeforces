#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int digit = n%10;
        if(digit==7 or digit==4){
            count++;
        }
        n=n/10;
    }
        if(count==4 or count==7){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }

    return 0;
}