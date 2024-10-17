def solution(str):
    answer = str
    for i in str:
        if i == 'm':
            answer = str.replace(i,'rn')
    return answer