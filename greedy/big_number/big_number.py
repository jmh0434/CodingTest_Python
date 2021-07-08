n, m, k = map(int,input().split())
data = list(map(int,input().split()))

data.sort()
print (data)
first = data[n - 1]
second = data[n - 2]

count = int(m / (k + 1)) * k
count = count + m % (k + 1)

result = 0
result += (count) * first
result += (m - count) * second

print(result)