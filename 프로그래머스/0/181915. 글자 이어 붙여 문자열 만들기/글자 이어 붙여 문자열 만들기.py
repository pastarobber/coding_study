def solution(my_string, index_list):
    answer = ''
    for i in index_list:
        answer += my_string[i]  # my_string의 i번째 문자를 answer에 추가
    return answer
