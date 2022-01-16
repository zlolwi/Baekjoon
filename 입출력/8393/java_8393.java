// 메모리: 17588KB, 코드 길이: 304B, 시간: 220ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        for(int i=0;i<=n;i++){
            sum += i;
        }
        System.out.println(sum);
    }
}
