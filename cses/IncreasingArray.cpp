/**
* @author Sidharth Mishra
* @description 
* @created 2019-07-21T16:14:12.109Z-07:00
* @last-modified 2019-07-21T21:17:18.470Z-07:00
*/

#define SWAP(a,b) temp = a; a = b; b = temp
//
//
#define MAXI(a,b) int maxI(int a, int b) { return a > b ? a : b; }
#define MAXL(a,b) long maxL(long a, long b) { return a > b ? a : b; }
#define MINI(a,b) int minI(int a, int b) { return a < b ? a : b; }
#define MINL(a,b) long minL(long a, long b) { return a < b ? a : b; }
//
//
#define MAXF(a,b) float maxF(float a, float b) { return a > b ? a : b; }
#define MAXD(a,b) double maxD(double a, double b) { return a > b ? a : b; }
#define MINF(a,b) float minF(float a, float b) { return a < b ? a : b; }
#define MIND(a,b) double minD(double a, double b) { return a < b ? a : b; }
//
//
#define DEBUG(x) System.out.printf("[DEBUG] -- %s \n", x)
#define PSVM public static void main(String[] args)
#define READER_BEGIN try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in))))
//
//
#define RI sc.nextInt()
#define RC sc.next().charAt(0)
#define RS sc.nextLine()
#define RF sc.nextFloat()
#define RL sc.nextLong()
#define RD sc.nextDouble()
#define RB sc.nextBoolean()
//
//
#define FOR(i,a,b,step) for(int i = a; i < b; i += step)
#define RFOR(i,a,b,step) for(int i = b; i >= a; i -= step)
//
#define SOUT(x) System.out.println(x)
#define SOUTF(x,y) System.out.printf(x,y)
//
//
//
// import all java standard stuff
import java.util.*;
import java.io.*;
import java.math.*;
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

public class IncreasingArray {
    PSVM {
        READER_BEGIN {
            int n = RI;
            if (n == 1) {
                SOUT(0);
                return;
            }
            int[] a = new int[n];
            FOR(i,0,n,1) {
                a[i] = RI;
            }
            long count = 0;
            FOR(i,0,n - 1,1) {
                int p = a[i];
                int q = a[i + 1];
                if (p <= q) {
                    continue;
                } else {
                    // DEBUG(i);
                    count = (count + p - q);
                    a[i+1]=a[i]; //update
                }
            }
            SOUT(count);
        }
    }
}