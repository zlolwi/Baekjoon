import java.util.Scanner;
// 메모리 크기: 17944KB , 코드 길이: 439KB, 시간: 228ms
class Main {
    public static void main(String[] args) {
        int T,A,B;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        int[] sum = new int[T];
        
        for(int i=0;i<T;i++){
            A = sc.nextInt();
            B = sc.nextInt();
            sum[i] = A+B;
        }
        
        for(int i=0;i<T;i++){
            System.out.println(sum[i]); 
        }
    }
}
