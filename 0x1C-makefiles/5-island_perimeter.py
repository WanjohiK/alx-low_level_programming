#!/usr/bin/python3
"""
grid module
"""


def island_perimeter(grid):
    """
    perimeter of the island
    """
    perimeter = 0
    zone = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4  # Start with 4 for each land cell
                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
    return perimeter
