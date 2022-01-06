// 메모리 크기: 17952KB, 코드 길이: 368B, 시간: 236ms
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int A,B;
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            A = sc.nextInt();
            B = sc.nextInt();
            if((A==0)&&(B==0)){
                break;
            }
            System.out.println(A+B); 
        }
       
    }
}
