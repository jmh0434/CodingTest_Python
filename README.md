# 이것이 취업을 위한 코딩테스트다 with 파이썬

복잡도 : 알고리즘의 성능을 나타내는 척도 

-시간 복잡도 : 특정한 크기의 입력에 대하여 알고리즘이 얼마나 오래 걸리는지

-공간 복잡도 : 특정한 크기의 입력에 대하여 알고리즘이 얼마나 많은 메모리를 차지하는지

→ 보통 알고리즘 문제를 풀 때 단순히 복잡도라고 하면 보통은 시간 복잡도를 의미

Big-O : 가장 빠르게 증가하는 항만을 고려하는 표기법

O(1) - O(logN) - O(N) - O(NlogN) - O(N^2) - O(N^3) - O(2^n) 순으로 빠름

일반적으로 코딩 테스트 환경에서는 O(N^3)을 넘어가면 문제 풀이에서 사용하기 어려움

보통 시간 복잡도에서의  '연산'은 프로그래밍 언어에서 지원하는 사칙 연산, 비교 연산 등과 같은 기본 연산을 의미.

파이썬에서 시간과 메모리  측정하는 법

```python
import time
start_time = time.time() # 측정 시작

# 프로그램 소스 코드
end_time = time.time() # 측정 종료
print("time :", end_time - start_time) # 수행 시간 출력

```

입력 받은 문자열을 띄어쓰기로 구분하여 각각 정수 자료형의 데이터로 저장

→ list(map(int, input().split()))

→ 가장 먼저 input()으로 입력 받은 문자열을 split()을 이용해 공백으로 나눈 리스트로 바꾼 뒤에, map을 이용하여 해당 리스트의 모든 원소에 int() 함수를 적용. 최종적으로 그 결과를 list()로 다시 바꿈으로써 입력 받은 문자열을 띄어쓰기로 구분하여 각각 숫자 자료형으로 저장

python // 연산자

→나누기 연산 후 소수점 이하의 수를 버리고, 정수 부분의 수만 구함

[그리디 알고리즘]
https://github.com/jmh0434/CodingTest_Python/blob/54c5efdf6b820ca28e69f220340a6af119612aaf/greedy/README.md


[구현]
https://github.com/jmh0434/CodingTest_Python/blob/4d7eeceae7a5a5675e8fbddd6e23eaf926410f1f/implementation/README.md
