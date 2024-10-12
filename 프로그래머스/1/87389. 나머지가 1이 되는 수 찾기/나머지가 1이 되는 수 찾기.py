def solution(n):
    answer = []
    for x in range(1,n):
        if n%x==1:
            answer.append(x)
    return min(answer)