package implementation.knight;

import java.util.*;

public class knight {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inputData = sc.nextLine();

        int row = inputData.charAt(1) - '0';
        int column = inputData.charAt(0) - 'a' + 1;

        int[] dx = { -2, -1, 2, 1, -2, -1, 2, 1 };
        int[] dy = { -1, -2, -1, -2, 1, 2, 1, 2 };

        int count = 0;

        for (int i = 0; i < 8; i++) {
            int nextRow = row + dx[i];
            int nextColumn = column + dy[i];
            if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
                count++;
            }
        }
        System.out.println(count);
    }
}
