# 행과 열의 개수를 공백으로 구분하여 입력받기
n, m = map(int, input().split())

# 리스트 선언
graph = []
for i in range(n):
    graph.append(list(map(int, input())))  # 2차원 리스트의 정보 입력받기

# dfs 재귀함수
def dfs(x, y):

    # 주어진 범위를 벗어난 경우
    if x <= -1 or x >= n or y <= -1 or y >= m:
        return False
    # 아직 현재노드가 방문되지 않았다면
    if graph[x][y] == 0:
        graph[x][y] = 1  # 방문 처리

        # 상, 하, 좌, 우의 위치도 모두 재귀적으로 호출
        dfs(x - 1, y)
        dfs(x, y - 1)
        dfs(x + 1, y)
        dfs(x, y + 1)
        return True
    return False


# 모든 노드에 대해서 음료수 채우기
result = 0
for i in range(n):
    for j in range(m):
        # 현재 위치에서 DFS 수행
        if dfs(i, j) == True:
            result += 1
print(result)
