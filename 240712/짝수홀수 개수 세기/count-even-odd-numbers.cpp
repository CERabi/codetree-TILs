#include <iostream>
using namespace std;

int main() {
    int n, odd = 0, even = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if(num == 0) break;
        if(num % 2) odd++;
        else even++;
    }
    cout << even << endl << odd << endl;
    return 0;
}