#!/usr/bin/python3
def no_c(my_string):
    length = len(my_string)

    a = 0

    new_string = my_string[:]

    for q in range(length):
        if (my_string[q] == 'c' or my_string[q] == 'C'):
            new_string = new_string[:(q - a)] + my_string[(q + 1):]
            a+= 1

    return (new_string)
