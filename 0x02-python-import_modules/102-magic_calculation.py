#!/usr/bin/python3
def magic_calculation(x, y):
    from magic_calculation_102 import add, sub
    if x < y:
        c = add(x, y)
        for i in range(4, 6):
            c = add(c, i)
        return (c)
    else:
        return (sub(x, y))
