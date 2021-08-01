import java.util.*;

public class boj_2490 {

  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    int i, j, sum;
  

    for(i=0; i<3; i++) {
      
      ArrayList<Integer> num = new ArrayList<>();
      for(j=0; j<4; j++) 
        num.add(sc.nextInt());
      
  
      sum = num.stream().reduce(0, Integer::sum);

      if(sum == 4)
        System.out.println("E");
        else if(sum == 3)
          System.out.println("A");
          else if(sum == 2)
            System.out.println("B");
              else if(sum ==1)
              System.out.println("C");
                else if(sum == 0)
                System.out.println("D");

    }
    sc.close();

  }
  
}
