// 메모리 크기: 2020KB, 코드 길이: 211B, 시간: 4ms
#include <iostream>
using namespace std;

int main() {
    int A,B;
    while(!(cin >> A >> B ).eof()){
        if((A==0)&&(B==0)){
            break;
        }
        cout << A+B << "\n";
    }
    return 0;
}
