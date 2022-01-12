// 메모리: 17756KB, 코드 길이: 353B, 시간: 220ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        
        int n,sum=0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        String a = sc.next();
        sc.close();
        
        for(int i=0;i<n;i++){
            sum += a.charAt(i)-'0';
        }
        System.out.println(sum); 
    }
}
