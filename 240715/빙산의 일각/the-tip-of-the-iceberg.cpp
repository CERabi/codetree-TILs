#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, H[100005] = { 0 }, ptr[100005] = { 0 }, max = -1;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> H[i]; ptr[i] = H[i];
    }
    sort(ptr, ptr + N);
    for(int i = 0; i < N; i++) {
        int prev = 0, cnt = 0; // prev 0이면 수면 아래, 1이면 수면 위
        for(int j = 0; j < N; j++) {
            if(ptr[i] >= H[j]) { // 수면 아래면
                if(prev == 1) cnt++; // 수면 위였을 때 빙산 추가
                prev = 0;
            }
            else {
                prev = 1;
            }
        }
        if(prev == 1) cnt++;
        if(cnt > max) max = cnt;
    }
    cout << max << endl;
    
    return 0;
}