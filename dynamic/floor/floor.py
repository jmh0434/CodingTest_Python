# 정수 N을 입력받기
n = int(input())

# 앞서 계산된 결과를 저장하기 위한 DP 테이블 초기화
dp = [0] * 1001

# 다이나믹 프로그래밍 진행 (Bottom-Up)
dp[1] = 1
dp[2] = 3
for i in range(3, n + 1):
    dp[i] = (dp[i - 1] + 2 * dp[i - 2] % 796796)

# 계산된 결과 출력
print(dp[n])
