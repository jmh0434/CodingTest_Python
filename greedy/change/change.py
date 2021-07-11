n = 1260  # 잔돈
count = 0  # 동전의 개수

coin_types = [500, 100, 50, 10]  # 동전의 종류

for coin in coin_types:
    count += n // coin  # 동전의 개수 계산
    n %= coin  # 남은 잔돈

print(count)
