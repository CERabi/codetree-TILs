#include <iostream>
using namespace std;

int main() {
    int n, alpha[30] = {0};
    cin >> n;
    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(c >= 'a' && c <= 'z') {
            alpha[c - 'a']++;
        }
        else break;
    }

    for(int i = 0; i < 26; i++) {
        if(alpha[i] != 0) {
            cout << (char)(i + 'a') << " : " << alpha[i] << endl;
        }
    }

    return 0;
}