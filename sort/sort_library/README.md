# 정렬 라이브러리

**파이썬의 기본 정렬 라이브러리 sorted() 함수**

- 퀵 정렬과 동작 방식이 비슷한 병합 정렬을 기반으로 만들어짐
- 일반적으로 퀵 정렬보다 느리지만 최악의 경우에도 O(N logN) 보장
- 리스트, 딕셔너리 자료형 등을 입력받아서 정렬된 결과 출력
- 집합 자료형이나 딕셔너리 자료형을 입력받아도 반환되는 결과는 리스트

Python에서 sort 함수

```python
result = sorted(array) # sorted()
array.sort() # sort()
```

C++에서 sort 함수

```cpp
sort(arr, arr + 1); // 시작 값과 끝 값 정해주기
```

JAVA에서 sort 함수

```java
Arrays.sort(arr) // 어떤 객체를 sort할지 명시해야 함
```

**key를 활용한 정렬 라이브러리**

- key 매개변수를 입력으로 받아 정렬 기준으로 삼는다.

```python

```
