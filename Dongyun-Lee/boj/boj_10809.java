import java.util.*;

public class boj_10809 {

  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

		String s = sc.next();
		char[] str = new char[26];
		int[] alpha = new int[26];

    sc.close();

		for (int i = 0; i < 26; i++) {
			str[i] = (char)(97 + i);
			alpha[i] = -1;
		}

		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 26; j++) {
				if (alpha[j] == -1 && s.charAt(i) == str[j]) {
					alpha[j] = i;
				}
			}
		}

		for (int i = 0; i < 26; i++) {
			System.out.print(alpha[i] + " ");

		}

	}

}