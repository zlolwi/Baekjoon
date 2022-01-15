// 메모리: 2020KB, 코드 길이: 302B
#include <iostream>
using namespace std;

int main() {
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char *date[7]={"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x,y;
    cin >> x >> y;
    for(int i=0;i<x-1;i++){
        y += month[i];
    }
    cout << date[y%7];
    
    return 0;
}
