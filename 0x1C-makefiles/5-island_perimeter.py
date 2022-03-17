#!/usr/bin/python3
"""
    a function def island_perimeter(grid): that returns
    the perimeter of the island described in grid:
 """

 
def island_perimeter(grid):
    perimeter = 0
        
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
                
            if grid[i][j] == 1:
                perimeter +=4
            if grid[i][j]==1 and j>=1 and grid[i][j-1]==1:
                perimeter -=2    
            if grid[i][j]==1 and i>=1 and grid[i-1][j]==1:
                perimeter -=2                    
    return perimeter
