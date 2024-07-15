#include <iostream>
using namespace std;

int main() {
    char s[15];
    scanf("%s", s);
    for(int i = 0; i < 13; i++) {
        if(i <= 2) printf("%c", s[i]);
        else if(i <= 7) printf("%c", s[i + 5]);
        else if(i <= 12) printf("%c", s[i - 5]);
    }
    return 0;
}