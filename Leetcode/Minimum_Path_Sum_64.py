
#Recursive Bottom-Up Approach
class Solution:
    def mincost(self,cp,grid,r,c):
        if r==0 and c==0:
            return 
        elif r>0 and c>0:
            cp[r-1][c]=min(cp[r-1][c],cp[r][c]+grid[r-1][c])
            cp[r][c-1]=min(cp[r][c-1],cp[r][c]+grid[r][c-1])
            self.mincost(cp,grid,r-1,c)
            self.mincost(cp,grid,r,c-1)
        elif r>0 and c==0:
            cp[r-1][c]=min(cp[r-1][c],cp[r][c]+grid[r-1][c])
            self.mincost(cp,grid,r-1,c)
        elif r==0 and c>0:
            cp[r][c-1]=min(cp[r][c-1],cp[r][c]+grid[r][c-1])
            self.mincost(cp,grid,r,c-1)
        return
        
    def minPathSum(self, grid: List[List[int]]) -> int:
        cp=[]
        r=len(grid)-1
        c=len(grid[0])-1
        for i in range(r+1):
            tmp=[]
            for j in range(c+1):
                tmp.append(pow(10,6))
            cp.append(tmp)
        cp[r][c]=grid[r][c]
        #print(cp)
        self.mincost(cp,grid,r,c)
        return cp[0][0]

#Iteratice Top-Down Approach
class Solution:
        
    def minPathSum(self, grid: List[List[int]]) -> int:
        r=len(grid)
        c=len(grid[0])
        for i in range(1,c):
            grid[0][i]+=grid[0][i-1]
        for i in range(1,r):
            grid[i][0]+=grid[i-1][0]
            
        for i in range(1,r):
            for j in range(1,c):
                grid[i][j]+=min(grid[i][j-1],grid[i-1][j])
                
        return grid[r-1][c-1]