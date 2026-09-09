#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int count=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        int digit=arr[i]%10;
        int temp=digit;
        if(digit==0){
            if(digit==1){
                count=count+2;
            }
        }
        else if(digit==1){ 
            if(digit==0){
                count++;
            }
        }
    }

    cout<<count;
        
    return 0;
}