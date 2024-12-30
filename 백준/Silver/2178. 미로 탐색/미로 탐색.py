from collections import deque

n, m = map(int, input().split())

# 2D 배열과 크기 입력
grid = [list(map(int, input().strip())) for _ in range(n)]

visited = [[False] * m for _ in range(n)] # 방문 여부

# 상하좌우 방향 정의
directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

def bfs(x,y):
    # 시작점 추가
    queue = deque([(x, y, 1)])
    visited[x][y] = True

    while queue:
        cx, cy, dist = queue.popleft() # 현재 위치

        if cx == n - 1 and cy == m - 1:
            return dist
        
        # 상하좌우 탐색
        for dx, dy in directions:
            # 새로운 위치 = 현재 위치 + 이동 방향
            nx, ny = cx + dx, cy + dy       # 방문하지 않은 곳
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == 1:
                queue.append((nx, ny, dist + 1))
                visited[nx][ny] = True
    return -1

print(bfs(0,0))