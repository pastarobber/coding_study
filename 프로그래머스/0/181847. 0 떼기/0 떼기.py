def solution(n_str):
    idx = 0
    for i, char in enumerate(n_str):  # 문자열의 인덱스와 값을 함께 가져옴
        if char != "0":  # '0'이 아닌 첫 문자를 찾음
            idx = i
            break
    return n_str[idx:]  # '0'이 아닌 부분부터 문자열 반환