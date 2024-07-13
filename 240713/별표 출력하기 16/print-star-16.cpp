#include <iostream>
using namespace std;

int main() {
    int n, lim = 0;
    cin >> n;
    for(int i = n; i >= 1; i--) {
        int star = 0;
        for(int j = 1; j <= i; j++) {
            star += (2 * j - 1);
        }
        if(i == n) lim = star;
        for(int j = 0; j < lim - star; j++) cout << ' ';
        for(int j = 0; j < star; j++) cout << '*';
        cout << endl;
    }
    return 0;
}