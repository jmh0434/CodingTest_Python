package DFS.BFS;

import java.util.*;

public class factorial {
    public static int FactorialRecursive(int n) {
        if (n <= 1)
            return 1;
        return n * FactorialRecursive(n - 1);
    }

    public static void main(String[] args) {
        System.out.println(FactorialRecursive(5));
    }
}
