def solution(array, height):
    cnt=0
    array.sort()
    for i in array:
        if i > height:
            cnt+=1
    return cnt