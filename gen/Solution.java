import java.util.*;
import java.io.*;
import java.math.*;




public class Solution {

    public static void main(String[] args) {
        try(Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)))) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            String c = sc.nextLine();
            System.out.printf("[DEBUG] -- %s \n", a);
            System.out.printf("[DEBUG] -- %s \n", b);
            for(int i = 0; i < 3; i += 2) {
                System.out.printf("[DEBUG] -- %s \n", c.charAt(i));
            }
        }
    }
}
