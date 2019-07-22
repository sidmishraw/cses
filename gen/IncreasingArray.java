import java.util.*;
import java.io.*;
import java.math.*;




public class IncreasingArray {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int n = sc.nextInt();
            if (n == 1) {
                System.out.println(0);
                return;
            }
            int[] a = new int[n];
            for(int i = 0; i < n; i += 1) {
                a[i] = sc.nextInt();
            }
            long count = 0;
            for(int i = 0; i < n - 1; i += 1) {
                int p = a[i];
                int q = a[i + 1];
                if (p <= q) {
                    continue;
                } else {

                    count = (count + p - q);
                    a[i+1]=a[i];
                }
            }
            System.out.println(count);
        }
    }
}
