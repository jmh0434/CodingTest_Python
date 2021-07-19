package sort.swap;

import java.util.*;

public class swap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        Integer[] a = new Integer[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        Integer[] b = new Integer[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }

        Arrays.sort(a);
        Arrays.sort(b, Collections.reverseOrder());

        for (int i = 0; i < k; i++) {
            if (a[i] < b[i]) {
                int tmp;
                tmp = a[i];
                a[i] = b[i];
                b[i] = tmp;
            } else
                break;
        }

        long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        System.out.println(sum);

    }
}
