import java.io.*;
public class ITP1_06_D{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        String[] nm = line.readLine().split(" ");
        int n = Integer.parseInt(nm[0]);
        int m = Integer.parseInt(nm[1]);
        int[][] A = new int[n+1][m+1];
        int[] b = new int[m+1];

        for(int i = 1; i <= n; i++){//Aの要素
            String[] box  = line.readLine().split(" ");
            for(int j = 1; j <= m; j++){
                A[i][j] = Integer.parseInt(box[j-1]);
            }
        }
        for(int i = 1; i <= m; i++){//bの要素
            b[i] = Integer.parseInt(line.readLine());
        }

        for(int i = 1; i <= n; i++){
            int sum = 0;
            for(int j = 1; j <= m; j++){
                sum += A[i][j] * b[j];
            }
            System.out.println(sum);
        }

        /*
        for(int i = 1; i <= n; i++){//Aの要素
            for(int j = 1; j <= m; j++){
                System.out.print(A[i][j]);
            }
            System.out.println();
        }
        System.out.println();
        for(int i = 1; i <= m; i++){//bの要素
            System.out.println(b[i]);
        }
        System.out.println();
        */
        
    }
}