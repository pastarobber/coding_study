def solution(num_list):
    answer = 0
    a = ""
    b = ""
    for i in num_list:
        if i%2!=0: #짝수
            a+=str(i)
        else:
            b+=str(i)
    return int(a)+int(b)