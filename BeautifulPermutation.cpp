/**
* @author Sidharth Mishra
* @description 
* @created 2019-07-21T16:14:12.109Z-07:00
* @last-modified 2019-07-21T22:28:18.703Z-07:00
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
#define PSVMEX public static void main(String[] args) throws Exception
#define READER_BLOCK try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in))))
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
#define FMT(x,y) String.format(x,y)
#define WRITER_BLOCK try(BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out)))
#define WRITE(x) out.write(x)
//
//
#define SB StringBuilder sb = new StringBuilder()
#define APP1(x) sb.append(x)
#define APP2(x,y) sb.append(x).append(y)
#define SBTOS sb.toString()
//
// import all java standard stuff
import java.util.*;
import java.io.*;
import java.math.*;
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

public class BeautifulPermutation {
    PSVM throws Exception {
        READER_BLOCK {
            int n = RI;
            if (n == 1) {
                SOUT(1);
                return;
            }
            if (n == 2 || n == 3) {
                SOUT("NO SOLUTION");
                return;
            }
            int oc = n % 2 != 0 ? (n+1)/2 : n/2;
            int ec = n - oc;
            SB;
            WRITER_BLOCK {
                int l = 2;
                FOR(i,0,ec,1) {
                    APP2(l," ");
                    l += 2;
                }
                int k = 1;
                FOR(i,ec,n,1) {
                    if (i == n-1) {
                        APP1(k);
                    } else {
                        APP2(k," ");
                    }
                    k += 2;
                }
                WRITE(SBTOS);
            }
        }
    }
}