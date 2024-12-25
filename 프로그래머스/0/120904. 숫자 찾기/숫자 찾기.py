def solution(num, k):
    num = str(num)  # 숫자를 문자열로 변환
    k = str(k)      # k도 문자열로 변환
    return num.index(k)+1 if k in num else -1
