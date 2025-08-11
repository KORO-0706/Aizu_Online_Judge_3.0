import java.io.*;

//提出の際はクラス名を C -> Main に変更
public class C {
    public static void main(String[] args) throws IOException {
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());

        int counter = 0;
        for(int i = 0; i < n; i++) {
            int fig = Integer.parseInt(line.readLine());
            if(prime(fig) == 1) counter++;
        }
        System.out.println(counter);
    }

    public static int prime(int figure) {
        if(figure == 2) return 1;//2は素数
        if(figure % 2 == 0 || figure < 2) return 0;//偶数 or 1
        for(int i = 3; i <= Math.sqrt(figure); i += 2) {
            if(figure % i == 0) return 0;//割り切れたら素数じゃない
        }
        return 1;
    }
}
