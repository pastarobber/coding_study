def solution(my_string):
    answer = []
    i = 0
    while i < len(my_string):
        answer.append(my_string[i:len(my_string)]) 
        i+=1
    return sorted(answer)