import java.io.*;

//提出の際はクラス名を D -> Main に変更
public class D {
    public static void main(String[] args) throws IOException {
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());

        int min;
        int max_diff;

        int[] fig = new int[n];
        for(int i = 0; i< n; i++) {
            fig[i] = Integer.parseInt(line.readLine());
        }

        min = fig[0];
        max_diff = fig[1] - fig[0];
        for(int i = 1; i < n; i++) {

            if(min > fig[i -1]) min = fig[i -1];//今までの最小値を決定
          
            if(max_diff < fig[i] - min) {//竿招致との差を求める
                max_diff = fig[i] - min;
            }
        }
        System.out.println(max_diff);
    }

}
