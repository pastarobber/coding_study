def solution(myString, pat):
#    l = []
    l = ''
    for i in myString:
        l += 'B' if i == 'A' else 'A'
#        l.append('B') if i=='A' else l.append('A')
    return int(pat in ''.join(l))
