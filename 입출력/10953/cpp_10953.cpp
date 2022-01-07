// 메모리: 2020KB, 코드 길이: 198B, 시간: 4ms
#include <iostream>
using namespace std;

int main() {
    int T,A,B,i;
    char c;
    cin >> T;
    for(i=0;i<T;i++){
        cin >> A >> c >> B;
        cout << A+B << "\n";
    }
    return 0;
}
