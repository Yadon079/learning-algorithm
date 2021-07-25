import java.util.Scanner;

public class boj_4344 {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        
        int num = sc.nextInt();
        double avg;

        for (int i = 0; i < num; i++) {
        	
            int[] count = new int[sc.nextInt()];
            int tot = 0;		
            int max = 0;		
            
            for (int j = 0; j < count.length; j++) {
                count[j] = sc.nextInt();
                tot += count[j];		
            }
            
            avg = (double) tot / count.length;
            
            for (int j = 0; j < count.length; j++) {
                if (count[j] > avg) {
                    max++;
                }
            }
          
            System.out.printf("%.3f", 100.0 * max / count.length);
            System.out.println("%");
        }
    }
}