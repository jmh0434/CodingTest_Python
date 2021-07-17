package sort.insertion;

import java.util.*;

public class insertion {
    public static void main(String[] args) {
        int n = 10;
        int[] arr = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

        for (int i = 1; i < n; i++) {
            for (int j = i; j > 0; j--) {
                if (arr[j] < arr[j - 1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
