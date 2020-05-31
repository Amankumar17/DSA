class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        r=len(obstacleGrid)
        c=len(obstacleGrid[0])
        grid=[]
        for i in range(r):
            tmp=[]
            for j in range(c):
                tmp.append(0)
            grid.append(tmp)
        if obstacleGrid[0][0]==1:
            return 0
        else:
            grid[0][0]=1
        
        # print(grid)
        for i in range(1,c):
            if obstacleGrid[0][i-1]==0 and obstacleGrid[0][i]==0:
                grid[0][i]=1
            else:
                break
        # print(grid)
        for i in range(1,r):
            if obstacleGrid[i-1][0]==0 and obstacleGrid[i][0]==0:
                grid[i][0]=1
            else:
                break
        # print(grid)
        for i in range(1,r):
            for j in range(1,c):
                if obstacleGrid[i][j]!=1:
                    grid[i][j]=grid[i-1][j]+grid[i][j-1]
        # print(grid)
        return grid[r-1][c-1]