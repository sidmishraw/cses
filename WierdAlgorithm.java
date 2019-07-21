import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class WierdAlgorithm {

    public static void main(String[] args) {
        try (Scanner cin = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            long n = cin.nextLong();
            String res = String.valueOf(n) + " ";
            while (n != 1) {
                if (n % 2 == 0)
                    n /= 2;
                else
                    n = n * 3 + 1;
                res += String.valueOf(n) + " ";
            }
            res = res.trim();
            System.out.println(res);
        }
    }
}