# DFS/BFS

## DFS(Depth-First Search)

→ 깊이 우선 탐색, 그래프에서 깊은 부분을 우선적으로 탐색

→ 스택 자료구조 이용 ⇒ 재귀 함수 사용

→ 동작 과정

1) 탐색 시작 노드를 스택에 삽입하고 방문 처리를 한다.

2) 스택의 최상단 노드에 방문하지 않은 인접 노드가 있으면 그 인접 노드를 스택에 넣고 방문 처리를 한다. 방문하지 않은 인접 노드가 없으면 스택에서 최상단 노드를 꺼낸다.

3) 2번의 과정을 더 이상 수행할 수 없을 때까지 반복

## BFS(Breadth-First Search)

→ 너비 우선 탐색, 가까운 노드부터 탐색하는 알고리즘

→ 큐 자료구조 이용 (deque 라이브러리)

→ 동작 과정

1) 탐색 시작 노드를 큐에 삽입하고 방문 처리를 한다.

2) 큐에서 노드를 꺼내 해당 노드의 인접 노드 중에서 방문하지 않은 노드를 모두 큐에 삽입하고 방문 처리를 한다.

3) 2번의 과정을 더 이상 수행할 수 없을 때까지 반복

※ 일반적으로 보통 DFS보다 BFS 구현이 조금 더 빠르게 동작

[사전 지식](/DFS-BFS/information.md)

[음료수 얼려 먹기](/DFS-BFS/freezing/README.md)

[미로 탈출](/DFS-BFS/maze/README.md)
