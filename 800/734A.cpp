#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    
    int count_A=0;
    int count_D=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='A'){
            count_A++;
        }
        else if(str[i]=='D'){
            count_D++;
    }
        }

        if(count_A>count_D){
            cout<<"Anton";
        }

        else if(count_D>count_A){
            cout<<"Danik";
        }
        
        else{
            cout<<"Friendship";
        }
    
    return 0;
}