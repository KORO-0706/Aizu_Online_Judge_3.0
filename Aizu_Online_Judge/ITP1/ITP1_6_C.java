import java.io.*;
public class ITP1_6_C{
    public static void main(String[] args)throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(line.readLine());
        int[][][] adress = new int[4+1][3+1][10+1];

        for(int i = 0; i < n; i++){
            String[] info = line.readLine().split(" ");
            int b = Integer.parseInt(info[0]);
            int f = Integer.parseInt(info[1]);
            int r = Integer.parseInt(info[2]);
            int v = Integer.parseInt(info[3]);
            adress[b][f][r] += v;
        }
        
        for(int b = 1; b <= 4; b++){
            for(int f = 1; f <= 3; f++){
                for(int r = 1; r <= 10; r++){
                    System.out.print(" "+adress[b][f][r]);
                }
                System.out.println();
            }
            if(b != 4){
                System.out.println("####################");
            }
        }
    }
}