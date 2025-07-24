import java.io.*;

public class ITP1_7_A {
    public static void main(String[] args) throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int[] m = new int[50+1];//中間試験
        int[] f = new int[50+1];//期末試験
        int[] r = new int[50+1];//再試験

        int number = 0;
        while(true){
            number++;//一人分を追加する
            String[] box = line.readLine().split(" ");
            m[number] = Integer.parseInt(box[0]);
            f[number] = Integer.parseInt(box[1]);
            r[number] = Integer.parseInt(box[2]);
            if (m[number] == -1 && f[number] == -1 && r[number] == -1) {
                number--;//すべて[-1]ならそれは人ではないので一人分消す。
                break;
            }
        }

        for (int i = 1; i <= number; i++){
            if(m[i] != -1 && f[i] != -1){//どちらも欠席していない
                int score = m[i]+f[i];
                if(80 <= score){//A
                    System.out.println("A");
                }else if(65 <= score){//B
                    System.out.println("B");
                }else if(50 <= score){//C
                    System.out.println("C");
                }else if(30 <= score){//D
                    if(50 <= r[i]){
                        System.out.println("C");//救済処置
                    }else{
                        System.out.println("D");
                    }
                }else{//F
                    System.out.println("F");
                }
            }else{
                System.out.println("F");
            }
        }
    }
}
