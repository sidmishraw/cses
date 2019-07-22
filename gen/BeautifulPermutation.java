import java.util.*;
import java.io.*;
import java.math.*;




public class BeautifulPermutation {
    public static void main(String[] args) throws Exception {
        try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int n = sc.nextInt();
            if (n == 1) {
                System.out.println(1);
                return;
            }
            if (n == 2 || n == 3) {
                System.out.println("NO SOLUTION");
                return;
            }
            int oc = n % 2 != 0 ? (n+1)/2 : n/2;
            int ec = n - oc;
            StringBuilder sb = new StringBuilder();
            try(BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
                int l = 2;
                for(int i = 0; i < ec; i += 1) {
                    sb.append(l).append(" ");
                    l += 2;
                }
                int k = 1;
                for(int i = ec; i < n; i += 1) {
                    if (i == n-1) {
                        sb.append(k);
                    } else {
                        sb.append(k).append(" ");
                    }
                    k += 2;
                }
                out.write(sb.toString());
            }
        }
    }
}
