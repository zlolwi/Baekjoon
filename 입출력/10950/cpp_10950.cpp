#include <iostream>
// 메모리 크기: 2020KB, 코드 길이: 255B 
int main() {
    int T,A,B;
    std::cin >> T;
    int sum[T]; 
    
    for(int i=0;i<T;i++){
        std::cin >> A >> B;
        sum[i]=A+B;
    }
    for(int i=0;i<T;i++){
        std::cout << sum[i] << '\n';
    }

    return 0;
}
