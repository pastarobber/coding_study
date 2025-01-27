def solution(s):
    answer = []
    words = s.split(" ")  # 공백 기준으로 나눔
    for word in words:
        new_word = ""
        for i in range(len(word)):
            if i % 2 == 0:  # 짝수 인덱스
                new_word += word[i].upper()
            else:           # 홀수 인덱스
                new_word += word[i].lower()
        answer.append(new_word)  # 처리된 단어를 결과에 추가
    return " ".join(answer)  # 단어를 다시 공백으로 연결