def solution(myString):
    myString = myString.lower()
    answer = ''
    for i in myString:
        if i=='a':
            answer+='A'
        else:
            answer+=i

    return answer