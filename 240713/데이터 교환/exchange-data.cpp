#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7, temp;
    temp = c; c = b; b = a; a = temp;
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}