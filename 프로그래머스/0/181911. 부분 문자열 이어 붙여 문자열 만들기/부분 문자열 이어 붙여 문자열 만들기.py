def solution(my_strings, parts):
    answer = ''
    i = 0
    for idx1,idx2 in parts:
        answer+=my_strings[i][idx1:idx2+1]
        i+=1
    return answer