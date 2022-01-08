// 메모리: 18680KB, 코드 길이: 256B, 시간: 345ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int T,A,B;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        for(int i=0;i<T;i++){
            A=sc.nextInt();
            B=sc.nextInt();
            System.out.println("Case #"+(i+1)+": "+(A+B)); 
        }
      
    }
}

// line 12 :뒤 공백하지 않아 첫 시도 오답으로 채점..
