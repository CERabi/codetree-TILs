#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, to_sort[105] = { 0 };
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> to_sort[i];
    }
    sort(to_sort, to_sort + n);
    for(int i = 0; i < n; i++) {
        cout << to_sort[i] << " ";
    }
    cout << endl;
    return 0;
}