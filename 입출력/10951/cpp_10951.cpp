#include <iostream>
// 메모리 크기: 2020KB, 코드 길이: 148B, 시간: 4ms
int main() {
    int A,B;
    while(!(std::cin >> A >> B).eof()){
        std::cout << A+B << "\n";
    } 
    
    return 0;
}
