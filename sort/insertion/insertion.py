array = [7, 5, 9, 0, 3, 1, 6, 2, 4, 8]  # 리스트

for i in range(1, len(array)):  # 첫 번째 원소는 정렬되어 있다고 가정하고 두 번째 원소부터 비교
    for j in range(i, 0, -1):  # 인덱스 i부터 1까지 한 칸씩 감소
        if array[j] < array[j - 1]:  # 만약 현재 원소가 한 칸 앞의 원소보다 작다면
            array[j], array[j - 1] = array[j - 1], array[j]  # 스왑
        else:  # 아니라면
            break  # 멈춤

print(array)
