def solution(myString):
    for i in myString:
        if i < chr(108):
            myString = myString.replace(i,'l')
    return myString