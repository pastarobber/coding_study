def solution(x, n):
    if x == 0:
        return [0] * n  # x가 0이면 0이 n개 들어있는 리스트 반환
    return [i for i in range(x, x*n+x, x)]