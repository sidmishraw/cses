/**
* @author Sidharth Mishra
* @description C++->Java macro Template version 1.0.3
* @created 2019-07-21T16:14:12.109Z-07:00
* @last-modified 2019-07-28T14:00:02.118Z-07:00
*/

#define SWAP(t,a,b) t temp = a; a = b; b = temp
//
//
#define MAX(a,b) a > b ? a : b
#define MIN(a,b) a < b ? a : b
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
// use the writer-block for fast output -- faster than sysout
// use stringbuilder to hold the output until then
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
///
///
#define ALI ArrayList<Integer>
#define ALF ArrayList<Float>
#define ALD ArrayList<Double>
#define ALC ArrayList<Character>
#define ALS ArrayList<String>
#define ALLN ArrayList<Long> 
///
#define MAPSI HashMap<String,Integer>
#define MAPIS HashMap<Integer,String>
#define MAPE Map.Entry
#define SETS HashSet<String>
#define SETI HashSet<Integer>
#define DQI Deque<Integer>
#define DQS Deque<String>
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

// Number spiral problem
public class NumberSpiral {
    
    PSVMEX {
        READER_BLOCK {
            int t = RI;
            SB;
            FOR(i,0,t,1) {
                long y = RL;
                long x = RL;
                APP1(findNbr(y,x));
                APP1("\n");
            }
            WRITER_BLOCK {
                WRITE(SBTOS);
            }
        }
    }
    
    static long findNbr(long r, long c) {
        if (r == 1 && c == 1) return 1;
        long round = MAX(r,c);
        boolean e = round % 2 == 0;
        long v = 0;
        if (r > c) {
            // left of diagonal
            long d = e ? round * round - round + 1: (round - 1)*(round -1) + round;
            v = d + (e ? round - c : c - round);
        } else {
            // right of diagonal
            long d = !e ? round * round - round + 1: (round - 1)*(round -1) + round;
            v = d + (e ? r - round : round - r);
        }
        return v;
    }
}