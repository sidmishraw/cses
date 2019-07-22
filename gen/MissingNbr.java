import java.util.*;
import java.io.*;
import java.math.*;




public class MissingNbr {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int n = sc.nextInt();
            boolean[] a = new boolean[n + 1];
            for(int i = 1; i < n; i += 1) {
                int k = sc.nextInt();
                a[k] = true;
            }
            for(int i = 1; i < n+1; i += 1) {
                if (!a[i]) {
                    System.out.println(i);
                    break;
                }
            }
        }
    }
}
