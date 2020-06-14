import numpy as np

A = np.array([1, 2]) #배열을 만들고 싶을 땐 np.array()를 사용한다.

"""
이렇게 만들어진 1차원 배열은 '벡터(vector)'라고 한다.
우리가 흔히 알고 있는 그 벡터가 맞다.
"""

print(A)
print("배열 A의 형태는 {}입니다.".format(A.shape))
print("배열 A는 {}차원 배열입니다.".format(A.ndim))

"""
이런 속성들을 이용하면 배열에 대한 정보를 알 수 있다.
shape 속성은 배열의 x, y, z축 방향 크기를 알려준다.
ndim은 이 배열이 몇 차원인지를 알려준다.
당연히 shape 속성의 원소 개수는 ndim개이다.
"""

B = np.array([[1, 2],
              [2, 1]]) #이렇게 하면 2차원 배열을 만들 수 있다.

"""
이렇게 만들어진 2차원 배열은 '행렬(matrix)'이라고 한다.
역시 우리가 알고 있는 그 행렬이다.
"""

print()
print(B)
print("배열 B의 형태는 {}입니다.".format(B.shape))
print("배열 B는 {}차원 배열입니다.".format(B.ndim))

C = np.array([[1, 1],
             [1, 1]])

print()
print(C, '\n')
print("B + C = \n{}".format(B+C))
print("B - C = \n{}".format(B-C))
print("B * C = \n{}".format(B*C))
print("B / C = \n{}".format(B/C))

"""
array 클래스는 이렇게 사칙연산이 전부 가능하지만
여기서 주의해야할 점은, 이게 matrix의 연산은 아니라는 점이다.
특히 곱셈과 나눗셈을 보면 단순히 원소끼리 사칙연산을 한다는 점을
직접 확인할 수 있다.
"""
