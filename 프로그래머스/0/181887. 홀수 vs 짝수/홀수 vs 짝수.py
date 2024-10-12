def solution(num_list):
    even = 0
    odd = 0
    for i in range(len(num_list)):
        if i%2==0: #짝수
            even += num_list[i]
        elif i%2==1:
            odd += num_list[i]
    return max(even,odd)