# 시간 입력 받기
h = int(input())

count = 0 # 처음 카운트 초기화
for i in range(h + 1): # 시간
    for j in range(60): # 분
        for k in range(60): # 초
            if "3" in str(i) + str(j) + str(k): # 3이 시간이나 분 초에 들어가면
                count += 1 # 카운트 1 더하기

print(count)
