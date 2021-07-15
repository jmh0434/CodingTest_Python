from collections import deque

# 큐 구현을 위해 deque 라이브러리 사용
queue = deque()

# popleft()는 첫 번째 원소 삭제 기능 (큐는 선입선출이니까 이걸 써야 함)
queue.append(5)
queue.append(2)
queue.append(3)
queue.append(7)
queue.popleft()
queue.append(1)
queue.append(4)
queue.popleft()

print(queue)
