#!/usr/bin/python3
def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    :param grid: List of list of integers, where 0 represents water and 1 represents land
    :return: Integer, the perimeter of the island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r-1][c] == 1:  # Check above
                    perimeter -= 2
                if c > 0 and grid[r][c-1] == 1:  # Check left
                    perimeter -= 2
    return perimeter

# Example usage
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))  # Output should be 12
