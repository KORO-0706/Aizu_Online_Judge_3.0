import java.io.*;

public class ITP1_7_C {
    public static void main(String[] args) throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        String[] rc = line.readLine().split(" ");
        int r = Integer.parseInt(rc[0]);
        int c = Integer.parseInt(rc[1]);
        int sum = 0;
        
        int[][] box = new int[r+2][c+2];
        for(int i = 1; i <= r; i++){
            String[] data = line.readLine().split(" ");
            for(int j = 1; j <= c; j++){
                box[i][j] = Integer.parseInt(data[j-1]);
                box[r+1][c+1] +=box[i][j];//要素を全部の合計の欄に足していく
                box[i][c+1] += box[i][j];//要素を右の列の合計の欄に足す
                box[r+1][j] += box[i][j];//要素を下の行の合計の欄に足す
            }
        }

        for(int i = 1; i <= r+1; i++){
            for(int j = 1; j <= c+1; j++){
                System.out.print(box[i][j]);
                System.out.print(j != c+1 ? " " : "");
            }
            System.out.println();
        }
    }
}
