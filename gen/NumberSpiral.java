import java.util.*;
import java.io.*;
import java.math.*;
public class NumberSpiral {

    public static void main(String[] args) throws Exception {
        try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int t = sc.nextInt();
            StringBuilder sb = new StringBuilder();
            for(int i = 0; i < t; i += 1) {
                long y = sc.nextLong();
                long x = sc.nextLong();
                sb.append(findNbr(y,x));
                sb.append("\n");
            }
            try(BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out))) {
                out.write(sb.toString());
            }
        }
    }

    static long findNbr(long r, long c) {
        if (r == 1 && c == 1) return 1;
        long round = r > c ? r : c;
        boolean e = round % 2 == 0;
        long v = 0;
        if (r > c) {

            long d = e ? round * round - round + 1: (round - 1)*(round -1) + round;
            v = d + (e ? round - c : c - round);
        } else {

            long d = !e ? round * round - round + 1: (round - 1)*(round -1) + round;
            v = d + (e ? r - round : round - r);
        }
        return v;
    }
}
