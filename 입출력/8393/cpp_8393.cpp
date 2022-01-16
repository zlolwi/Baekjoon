// 메모리: 2020KB, 코드 길이: 181B
#include <iostream>
using namespace std;


int main() {
    int n;
    int sum = 0;
    cin >> n;
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout << sum;
    return 0;
}
