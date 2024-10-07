def solution(sides):
    max_side = max(sides)  # 가장 큰 변의 길이
    t_sum = sum(sides) - max_side  # 나머지 두 변의 합

    # 삼각형이 성립하려면 가장 큰 변이 나머지 두 변의 합보다 작아야 함
    answer = 1 if max_side < t_sum else 2
    return answer