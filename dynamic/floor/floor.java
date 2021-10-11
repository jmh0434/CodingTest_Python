package dynamic.floor;
import java.util.*;
public class floor {
    public static int[] dp = new int[1001];
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        dp[1] = 1;
        dp[2] = 3;
        for(int i = 3; i <= n; i++)
        {
            dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 796796;
        }
        System.out.println(dp[n]);

    }
}
