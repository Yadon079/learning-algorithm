import java.io.*;
import java.util.*;

public class boj_1629 {

  public static long C;

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    StringTokenizer st = new StringTokenizer(br.readLine(), " ");

    long A = Long.parseLong(st.nextToken());
    long B = Long.parseLong(st.nextToken());
    C = Long.parseLong(st.nextToken());

    System.out.println(pow(A, B));
  }

  public static long pow(long A, long exponent) {
    if (exponent == 1) {
      return A % C;
    }

    long tmp = pow(A, exponent / 2);

    if (exponent % 2 == 1) {
      return (tmp * tmp % C) * A % C;
    }

    return tmp * tmp % C;
  }

}