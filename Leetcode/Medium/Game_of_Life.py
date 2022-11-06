289. Game of Life
# Any live cell with fewer than two live neighbors dies as if caused by under-population.
# Any live cell with two or three live neighbors lives on to the next generation.
# Any live cell with more than three live neighbors dies, as if by over-population.
# Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
# The next state is created by applying the above rules simultaneously to every cell 
# in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state.
Code below:
class Solution:
    def gameOfLife(self, board:List[List[int]]) -> None:
        # original  |  New  | State
        #    0      |   0   |   0
        #    1      |   0   |   1
        #    0      |   1   |   2
        #    1      |   1   |   3
        rows, cols = len(board), len(board[0])
        def contNeighbors(r,c):
            nei = 0
            for i in range(r-1,r+2):
                for j in range(c-1, c+2):
                    if((i==r and j==c) or i < 0 or j < 0 or i==rows or
                        j==cols):
                        continue
                    if board[i][j] in [1, 3]:
                        nei+=1
            return nei
        
        for r in range(rows):
            for c in range(cols):
                nei = contNeighbors(r,c)
                if board[r][c]:
                    # if the number is 1
                    if nei in [2,3]:
                        board[r][c] = 3
                elif nei == 3:
                    board[r][c] = 2
        
        for r in range(rows):
            for c in range (cols):
                if board[r][c] == 1:
                    board[r][c] = 0
                elif board[r][c] in [2, 3]:
                    board[r][c] = 1