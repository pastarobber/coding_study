def solution(arr, k):
    for i in range(len(arr)):
        if k%2==1:
            arr[i]*=k
        else :
            arr[i]+=k
    return arr