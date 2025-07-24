import java.io.*;

public class ITP1_7_B {
    public static void main(String[] args) throws IOException{
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        
        
        while(true){
            String[] box = line.readLine().split(" ");
            int n = Integer.parseInt(box[0]);
            int x = Integer.parseInt(box[1]);

            if(n == 0 && x == 0) break;

            int count = 0;
            for(int i = 1; i <= n; i++){
                for(int j = i+1; j <= n; j++){
                    for(int k = j+1; k <= n; k++){
                        if (i + j + k == x) {
                            count++;
                        }
                    }
                }
            }
            System.out.println(count);

        }
    }
}
