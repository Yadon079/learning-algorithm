public class boj_4673 {
  public static void main(String[] args){

    int selfNumber[] = new int[10000];

    for(int i=1;i<10000;i++){
      selfNumber[cons(i)]++;
    }

    for(int i=1; i<selfNumber.length;i++){
      if(selfNumber[i] == 0){
        System.out.println(i);
      }

    }
  }

  public static int cons(int n){

    int sum = n;

    while(n != 0) {

      sum += n%10;
      n /= 10;

      if(sum>9999){
        return 0;
      }
    }

    return sum;
  }
}
