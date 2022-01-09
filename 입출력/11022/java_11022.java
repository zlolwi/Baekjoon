// 메모리: 19016KB, 코드 길이: 368B, 시간: 300ms
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int T,A,B;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        for(int i=1;i<=T;i++){
            A = sc.nextInt();
            B = sc.nextInt();
            System.out.println("Case #" + i + ": " + A + " + " + B + " = " + (A+B)); 
        }
    }
}
