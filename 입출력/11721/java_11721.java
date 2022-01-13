// 메모리: 17656KB, 코드 길이: 327B
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        sc.close();
        for(int i=0;i<a.length();i++){
            System.out.print(a.charAt(i));
            if(i%10==9) System.out.print("\n");
        }
    }
}
