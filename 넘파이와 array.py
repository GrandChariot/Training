import numpy as np

"""
넘파이는 array라는 클래스를 지원한다.
이 array는 C의 그 array와는 사뭇 다르다.
바로 우리가 알고 있는 행렬 즉 matrix와 같은 특성을 여러 가지 보이기 때문.
특히 사칙연산 부분이 그렇다.
"""

A = np.array([1,2,3]) #길이 3짜리 1차원 배열
B = np.array([[1,0],
              [0,1]]) #2x2짜리 2차원 배열
C = np.array([[1,1],
              [1,1]])
result = B+C; #가장 큰 특징으로, 이렇게 하면 같은 위치의 원소를 더한다.
print(result) #정말 너무 편하다!
