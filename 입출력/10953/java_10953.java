// 메모리: 17816KB, 코드 길이: 351B, 시간: 220ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int T;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        for(int i=0;i<T;i++){
            String str[] = sc.next().split(",");
            System.out.println(Integer.parseInt(str[0])+Integer.parseInt(str[1])); 
        }
    }
}
