package Binarysearch.binary.binary_reiteration;

import java.util.*;

public class binrary_reiteration {
    public static int binarySearch(int[] arr, int target, int start, int end) {
        if (start > end)
            return -1;
        int mid = (start + end) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            return binarySearch(arr, target, start, mid - 1);
        else
            return binarySearch(arr, target, mid + 1, end);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();

        int result = binarySearch(arr, target, 0, n - 1);
        if (result == -1)
            System.out.println("원소가 존재하지 않습니다.");
        else
            System.out.println(result + 1);
    }

}
