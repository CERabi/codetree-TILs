#include <iostream>
using namespace std;

int main() {
    int n, dap[11] = {0}, num;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> num;
        dap[num / 100]++;
    }

    for(int i = 0; i < 10; i++) {
        if(dap[i] != 0) cout << i << " - " << dap[i] << endl;
    }
    return 0;
}