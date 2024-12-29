from collections import deque

#세로 6, 가로 5 초기

n,m = map(int, input().split())

# 2D 배열과 크기 입력
grid = [list(map(int, input().split())) for _ in range(n)]

# 방문 여부를 기록하는 배열, '_' 반복 변수로 이름을 사용하지 않겠다는 의미
#visited = [[False for _ in range(m)] for _ in range(n)]
visited = [[False] * m for _ in range(n)]  # 방문 여부


# 상하좌우 방향 정의
directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

def bfs(x, y):
    # 시작점 추가
    queue = deque([(x, y)])
    visited[x][y] = True
    area = 1  # 현재 그림의 넓이
    
    while queue:
        cx, cy = queue.popleft() # 현재 위
        
        # 상하좌우 탐색
        for dx, dy in directions:
            # 새로운 위치 = 현재 위치 + 이동 방향
            nx, ny = cx + dx, cy + dy       # 방문하지 않은 곳
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == 1:
                queue.append((nx, ny))
                visited[nx][ny] = True
                area += 1  # 넓이 증가
    return area

# 그림의 개수와 최대 넓이
picture_count = 0
max_area = 0

for i in range(n):
    for j in range(m):
        # 방문하지 않은 1에서 BFS 시작
        if grid[i][j] == 1 and not visited[i][j]:
            picture_count += 1  # 그림 개수 증가
            max_area = max(max_area, bfs(i, j))  # 최대 넓이 갱신

# 결과 출력
print(picture_count)
print(max_area)