# n, m, k 입력 받기
n, m, k = map(int, input().split())

data = list(map(int, input().split()))  # data 입력 받기
data.sort()  # data 정렬

first = data[n - 1]  # 가장 큰 수
second = data[n - 2]  # 두번째로 큰 수
result = 0  # 결과

while m > 0:  # m이 0보다 클 때동안
    for i in range(k):  # k번 반복
        if m == 0:  # m이 0이면
            break  # 반복문 빠져나오기
        result = result + first  # 가장 큰 수 더하기
        m = m - 1  # m 감소
    if m == 0:
        break
    result = result + second  # 두번째로 큰 수 더하기
    m = m - 1

print(result)
