import java.io.*;
public class ITP1_3_D {
    public static void main(String[] args){
        BufferedReader line = new BufferedReader(new InputStreamReader(System.in));
        int a, b, c;
        try{
        String[] box = line.readLine().split(" ");
        a = Integer.parseInt(box[0]);
        b = Integer.parseInt(box[1]);
        c = Integer.parseInt(box[2]);
        }catch(IOException e){
            return;
        }
        int number, count = 0;

        for(int i = a; i <= b; i++){
            number = c / i;
            if(number*i == c){
                count += 1;
            }
        }
        System.out.println(count);
    }
}

