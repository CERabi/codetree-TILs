#include <iostream>
using namespace std;

int main() {
    int n, dap[5] = {9, 7, 5, 3, 1}, cnt = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << dap[cnt++] << " ";
            cnt = cnt % 5;
        }
        cout << endl;
    }
    return 0;
}