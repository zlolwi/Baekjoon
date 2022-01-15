// 메모리: 17696KB, 코드 길이: 441B, 시간: 220ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int[] month={31,28,31,30,31,30,31,31,30,31,30,31};
        String[] date={"SUN","MON", "TUE", "WED", "THU", "FRI", "SAT"};
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        for(int i=0;i<x-1;i++){
            y += month[i];
        }
        System.out.println(date[y%7]);
    
    }
}
