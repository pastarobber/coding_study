def solution(myString, pat):
    l = []
    for i in myString:
        l.append('B') if i=='A' else l.append('A')
    return int(pat in ''.join(l))
