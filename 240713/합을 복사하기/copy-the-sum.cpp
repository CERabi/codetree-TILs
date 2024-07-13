#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3;
    a = a + c + b; b = a; c = a;
    printf("%d %d %d\n", a, b, c);
    return 0;
}