// 메모리: 18572KB, 코드 길이: 283B, 시간: 248ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.close();
        for(int i=1;i<10;i++){
            System.out.println(N+" * "+i+" = "+(i*N));
        }
    }
}
