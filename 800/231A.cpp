#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int num1;
    int num2;
    int num3;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            
            cin>>num1;
            cin>>num2;
            cin>>num3;
        }
    }
    int count = 0;
    if(num1 + num2 + num3 >= 2){
        count++;
        
    }
    cout<<count;
    
    return 0;
}