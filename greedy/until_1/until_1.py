import time

start_time = time.time()  # 측정 시작

n, k = map(int, input().split())
count = 0

while n != 1:
    if n % k == 0:
        n = n / k
        count = count + 1
    else:
        n = n - 1
        count = count + 1
print(count)

end_time = time.time()  # 측정 종료
print("time :", end_time - start_time)  # 수행 시간 출력
