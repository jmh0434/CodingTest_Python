# 정수 N, M을 입력받기
n, m = map(int, input().split())
array = []
for i in range(n):
    array.append(int(input()))

# 한 번 계산된 결과를 저장하기 위한 DP 테이블 초기화
dp = [10001] * (m + 1)

# 다이나믹 프로그래밍 진행 (Bottom-Up)
dp[0] = 0
for i in range(n):
    for j in range(array[i], m + 1):
        if dp[j - array[i]] != 10001: # (i - k)원을 만드는 방법이 존재하는 경우
            dp[j] = min(dp[j], dp[j - array[i]] + 1)

# 계산된 결과 출력
if dp[m] == 10001: # 최종적으로 M원을 만드는 방법이 없는 경우
    print(-1)
else:
    print(dp[m])
    