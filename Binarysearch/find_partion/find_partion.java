package Binarysearch.find_partion;

import java.util.*;

public class find_partion {
    public static int binarysearch(int[] arr, int target, int start, int end) {
        while (start <= end) {
            int mid = (start + end) / 2;

            if (arr[mid] == target)
                return mid;

            else if (arr[mid] > target)
                end = mid - 1;

            else
                start = mid + 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);

        int m = sc.nextInt();
        int x[] = new int[m];

        for (int i = 0; i < m; i++) {
            x[i] = sc.nextInt();
        }

        for (int i = 0; i < m; i++) {
            int result = binarysearch(arr, x[i], 0, n - 1);
            if (result != -1)
                System.out.print("yes ");
            else
                System.out.print("no ");
        }

    }
}
