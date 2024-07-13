#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    a = c; b = c;
    printf("%d %d %d\n", a, b, c);
    return 0;
}