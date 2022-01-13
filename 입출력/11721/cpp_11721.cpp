// 메모리:2024KB, 코드 길이: 205B
#include <iostream>
#include <string>
using namespace std;


int main() {
    string a = "";
    cin >> a;
    for(int i=0;i<a.length();i++){
        cout << a[i];
        if(i%10==9) cout << "\n";
    }
}
