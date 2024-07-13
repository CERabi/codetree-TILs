#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7;
    a = c; b = c;
    printf("%d %d %d\n", a, b, c);
    return 0;
}