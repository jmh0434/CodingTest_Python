package dynamic.fibonacci_down;

import java.util.*;

public class fibonacci_down {
    public static long d[] = new long[100];

    public static void main(String[] args) {
        d[1] = 1;
        d[2] = 1;
        int n = 50;

        for (int i = 3; i <= n; i++) {
            d[i] = d[i - 1] + d[i - 2];
        }
        System.out.println(d[n]);
    }
}
