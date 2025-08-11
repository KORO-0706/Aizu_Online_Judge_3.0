import java.io.*;

//提出の際はクラス名を A -> Main に変更
public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());

        
        String box[] = line.readLine().split(" ");
        int A[] = new int[box.length];
        for(int i = 0; i < box.length; i++){
            A[i] = Integer.parseInt(box[i]);
        }
        
        for(int i = 0; i < n; i++) {
            int v = A[i];
            int j = i - 1;

            while(j >= 0 && A[j] > v) {
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = v;


            //出力用
            for(int k = 0;  k < n; k++) {
                System.out.print(A[k]);
                if(k != n-1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        line.close();
    }
}

