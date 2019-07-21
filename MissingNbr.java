import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class MissingNbr {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int n = sc.nextInt();
            boolean[] a = new boolean[n + 1];
            for (int i = 1; i < n; i++) {
                int k = sc.nextInt();
                a[k] = true;
            }
            for (int i = 1; i <= n; i++) {
                if (!a[i]) {
                    System.out.println(i);
                    break;
                }
            }
        }
    }
}