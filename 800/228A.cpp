#include <iostream>
using namespace std;

int main() {
    int s[4];

    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (s[i] == s[j]) {
                count++;
                break;
            }
        }
    }

    cout << count;

    return 0;
}