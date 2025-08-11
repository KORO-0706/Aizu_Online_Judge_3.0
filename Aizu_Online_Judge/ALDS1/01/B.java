import java.io.*;

//提出の際はクラス名を B -> Main に変更
public class B {
    public static void main(String[] args) throws IOException {
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        String box[] = line.readLine().split(" ");
        int x = Integer.parseInt(box[0]);
        int y = Integer.parseInt(box[1]);
        
        System.out.println(gcd(x, y));
    }

    public static int gcd(int fig1, int fig2) {
        if(fig1 < fig2) {
            int buf = fig1;
            fig1 = fig2;
            fig2 = buf;
        }

        /*
        ユークリッドの互除法
        [fig1] / [fig2] = [ans] ... [fig1 % fig2]
        このとき
            [fig1 % fig2] == 0
        の場合の
            [fig2]
        が最大公約数となる。
        (ただし以下ではその後fig1に代入されるのでfig1を出力)
        */
        while(fig2 > 0) {
            int buf2 = fig1;
            fig1 = fig2;
            fig2 = buf2 % fig2;
        }
        return fig1;
    }
}
