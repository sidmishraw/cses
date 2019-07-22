import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Repetitions {

    public static void main(String[] args) {
        try (Scanner cin = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            String s = cin.nextLine();
            s = s.trim();
            int max = 1;
            int i = 0;
            while (i < s.length() - 1) {
                int m = 1;
                char c1 = s.charAt(i);
                int k = 0;
                for (int j = i + 1; j < s.length(); j++) {
                    char c2 = s.charAt(j);
                    k = j; // break pt
                    if (c2 == c1)
                        m++;
                    else
                        break;

                }
                max = max > m ? max : m;
                i = k;
            }
            System.out.println(max);
        }
    }
}