#!/usr/bin/python3
"""Returns the perimeter of the island described"""


def island_perimeter(grid):
    """Island perimeter"""

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])
    for row in range(rows):
        for column in range(columns):
            if grid[row][column]:
                
                if (row - 1 < 0 or grid[row - 1][column] == 0):
                    perimeter += 1
                if (row + 1 >= rows or grid[row + 1][column] == 0):
                    perimeter += 1
                if (column - 1 < 0 or grid[row][column - 1] == 0):
                    perimeter += 1
                if (column + 1 >= columns or grid[row][column + 1] == 0):
                    perimeter += 1
    return perimeter

