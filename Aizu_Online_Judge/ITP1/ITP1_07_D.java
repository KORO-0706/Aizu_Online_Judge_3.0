import java.io.*;

public class ITP1_7_D {
    public static void main(String[] args) throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        String[] rc = line.readLine().split(" ");
        int n = Integer.parseInt(rc[0]);
        int m = Integer.parseInt(rc[1]);
        int l = Integer.parseInt(rc[2]);
        
        int[][] A = new int[n+1][m+1];//行列A n × m
        int[][] B = new int[m+1][l+1];//行列B m × l
        long[][] C = new long[n+1][l+1];//行列C n × l

        for(int i = 1; i <= n; i++){//行列Aに代入
            String[] box = line.readLine().split(" ");
            for(int j = 1; j <= m; j++){
                A[i][j] = Integer.parseInt(box[j-1]);
            }
        }
        for(int i = 1; i <= m; i++){//行列Bに代入
            String[] box = line.readLine().split(" ");
            for(int j = 1; j <= l; j++){
                B[i][j] = Integer.parseInt(box[j-1]);
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= l; j++){
                for(int k = 1; k <= m; k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }

        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= l; j++){
                System.out.print(C[i][j]);
                System.out.print(j != l ? " " : "");
            }
            System.out.println();
        }
        
    }
}
