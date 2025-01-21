from collections import deque

# 입력 처리
m, n = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(n)]

# 상하좌우 방향 정의
directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

# 익은 토마토의 좌표를 큐에 추가
queue = deque([(i, j) for i in range(n) for j in range(m) if grid[i][j] == 1])

def bfs():
    max_days = 1
    while queue:
        x, y = queue.popleft()  # 현재 위치
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            # 범위 내에 있고, 익지 않은 토마토(0)인 경우
            if 0 <= nx < n and 0 <= ny < m and grid[nx][ny] == 0:
                grid[nx][ny] = grid[x][y] + 1
                queue.append((nx, ny))
                max_days = max(max_days, grid[nx][ny])
    
    return max_days

ret_val = bfs()

if any(0 in row for row in grid):
    print(-1)
else:
    print(ret_val-1)