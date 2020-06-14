import numpy as np

"""
배열의 사칙연산에서, 곱연산은 행렬의 곱연산과 다르다는 걸 보았다.
그러면 행렬의 곱은 어떻게 구해야 할까?
이것 역시 일일이 노가다 뛸 필요 없이 미리 함수가 마련되어있다.
넘파이는 정말 대단해!
"""

A = np.array([[1, 2],
              [2, 1]])
B = np.array([[1, 0],
              [0, 1]])
print(np.dot(A, B)) #dot 함수는 인자로 받은 두 행렬의 행렬 곱을 반환한다.

"""
이 경우는 B가 단위 행렬이므로 A가 그대로 반환되어야 하고
실제 결과값도 A가 그대로 반환되는 것을 확인할 수 있다.

행렬 곱은 고등학생 때 배운 그대로,
앞 행렬의 열의 길이와 뒤 행렬의 행의 길이가 같아야 곱할 수 있다.
"""

A = np.array([[1, 2, 3]])
B = np.array([[1, 2],
              [3, 4],
              [5, 6]])
print(np.dot(A, B))

"""
A가 1x3 행렬이고 B가 3x2 행렬이므로
이 둘의 연산 결과는 1x2 행렬로 나타난다.
"""
