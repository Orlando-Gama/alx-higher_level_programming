#!/usr/bin/python3
def magic_calculation(x, y):
    result = 0
    for j in range(1, 3):
        try:
            if j > x:
                raise Exception('Too far')
            result += x ** y / j
        except Exception:
            result = y + x
            break
    return result
