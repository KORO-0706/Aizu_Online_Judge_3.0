import java.io.*;

//提出の際はクラス名を A -> Main に変更
public class A {
    public static void main(String[] args) throws IOException {
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());
        String[] fig = line.readLine().split(" ");

        int[] A = new int[n];
        for(int i = 0; i < n; i++) {
            A[i] = Integer.parseInt(fig[i]);
        }

        int counter = 0;
        for(int i = 0; i < n-1; i++) {
            for(int j = 0; j < n-(i+1); j++) {
                if(A[j] > A[j + 1]) {
                    int buf = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = buf;

                    counter++;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            if(i != 0) {
                System.out.print(" ");
            }
            System.out.print(A[i]);
        }
        System.out.println("\n"+counter);
    }
}
