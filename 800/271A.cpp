#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    y++;

    while(1){
        int temp = y;
        int store[4];

        for (int i = 0; i < 4; i++) {
            store[i] = temp % 10;
            temp = temp / 10;
        }

        if (store[0] != store[1] &&
            store[0] != store[2] &&
            store[0] != store[3] &&
            store[1] != store[2] &&
            store[1] != store[3] &&
            store[2] != store[3]) {
            
            cout<<y;
            return 0;
        }

        y++;
    }
}