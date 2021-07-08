package greedy.until_1;

import java.util.*;

public class until_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int result = 0;

        while (n != 1) {
            if (n % k == 0) {
                n = n / k;
                result++;
            } else {
                n = n - k;
                result++;
            }
        }
        System.out.println(result);
    }
}
