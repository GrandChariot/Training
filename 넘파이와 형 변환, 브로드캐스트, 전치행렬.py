import numpy as np

A = np.array([[1, 2, 3],
             [4, 5, 6]])

print(A.shape)
A = A.reshape(3,2) #reshape는 결과로 새로운 배열을 반환한다.
print(A.shape)
A = A.reshape(-1, 6) #앞에 -1을 넣으면 행의 길이를 뒤에 맞춰서 알아서 고쳐준다.
print(A.shape)

#이러한 reshape 함수는 불가능한 숫자를 넣으면 당연하게도 에러가 난다.


"""
이처럼 크기와 모양이 중요한 배열은 크기가 다르면 연산이 불가능하다.
하지만, 넘파이는 크기가 다른 배열끼리의 연산도 지원하고 있다.
그 방법이 바로 '브로드캐스트'이다.

차원이 낮은 배열과, 차원이 높은 배열 사이에는 연산이 가능하다.
이 둘을 연산하면 차원이 낮은 배열은 자동으로 높은 배열에 맞추어 확장된다.
그 확장 방식을 보도록 하자.
"""

print()
A = A.reshape(2,3)
print(A+5)

"""
정수(=0차원 배열)를 더했는데, 행렬 A의 모든 항에 5가 더해졌다.
즉, 0차원 배열인 정수가 5로 가득 채워진 2차원 배열로 확장된 것이다.
그럼 1차원 배열과 2차원 배열의 덧셈은 어떨까?
"""

B = np.array([1, 2, 3])
print(A+B)

"""
이 경우엔 벡터 B가 2x3 행렬로 확장되었다.
즉, 1차원이 2차원으로 브로드캐스트 될 때엔 행이 늘어나는 방식으로 확장된다.
"""

"""
행과 열을 서로 뒤바꾼 행렬을 전치행렬이라고 한다.
사실 C에서 이 전치행렬 만들기를 연습했던 기억이 난다.
하지만 넘파이에서는 훨씬 더 간단하게 만들 수 있다.
"""

print()
print(A)
print("전치행렬 함수 사용!")
A = A.T #T 함수는 전치행렬을 반환한다.
print(A) #정말 편하다!
