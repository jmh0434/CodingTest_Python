package greedy.big_number;

import java.util.*;

public class big_number2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();

        int[] data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = sc.nextInt();
        }

        Arrays.sort(data);
        int first = data[n - 1];
        int second = data[n - 2];

        int result = 0;

        while (m > 0) {
            for (int i = 0; i < k; i++) {
                if (m == 0)
                    break;
                result = result + first;
                m--;
            }
            if (m == 0)
                break;
            result = result + second;
            m--;
        }

        System.out.println(result);
    }

}
