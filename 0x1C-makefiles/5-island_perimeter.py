#!/bin/usr/python3
"""
A function that that returns the perimeter of the island it describes
"""
def island_perimeter(grid):

    """
    Calculates the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): Represents the island, where 0 represents water and 1 represents land.

    Returns:
    int: The perimeter of the island.

    Constraints:
    - Grid is rectangular with width and height not exceeding 100.
    - Grid cells are connected horizontally/vertically.
    - Grid is completely surrounded by water, with no lakes inside.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter