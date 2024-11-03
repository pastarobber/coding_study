def solution(todo_list, finished):
    #answer = { key : value for key ,value in zip(todo_list, finished) }
    answer = dict(zip(todo_list,finished))
    return [k for k,v in answer.items() if v is False]
    
    #for k,v in answer.items():
    #    if v is False:
    #        print(k)