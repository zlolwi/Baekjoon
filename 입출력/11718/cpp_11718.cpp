// 메모리: 2024KB, 코드 길이: 217B, 시간: 4ms
#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    while(true){
        getline(cin,a);
        if(a == "")
            break;
        cout << a << "\n";
    }

    return 0;
}
