#!/usr/bin/python3
"""Defines a function that returns the perimeter,
of island described in grid"""


def island_parameter(grid):
    """Function definition
    Arguments:
        grid"""
    height = len(grid)
    width = len(grid[0])
    side = 0
    edge = 0

    for i in range(heght):
        for k in range(width):
            if grid[i][k] == 1:
                size += 1

            if (k > 0 and grid[i][k - 1] == 1):
                edge += 1
            if (k > 0 and grid[i - 1][k] == 1):
                edge += 1
    return side * 4 - edge * 2
