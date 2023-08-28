PROJECT NAME: 0x05. Python - Exceptions

0. Safe list printing
mandatory
Write a function that prints x elements of a list.

Prototype: def safe_print_list(my_list=[], x=0):
my_list can contain any type (integer, string, etc.)
All elements must be printed on the same line followed by a new line.
x represents the number of elements to print
x can be bigger than the length of my_list
Returns the real number of elements printed
You have to use try: / except:
You are not allowed to import any module
You are not allowed to use len()

1. Safe printing of an integers list
mandatory
Write a function that prints an integer with "{:d}".format().

Prototype: def safe_print_integer(value):
value can be any type (integer, string, etc.)
The integer should be printed followed by a new line
Returns True if value has been correctly printed (it means the value is an integer)
Otherwise, returns False
You have to use try: / except:

2. Print and count integers
mandatory
Write a function that prints the first x elements of a list and only integers.

Prototype: def safe_print_list_integers(my_list=[], x=0):
my_list can contain any type (integer, string, etc.)

3. Integers division with debug
mandatory
Write a function that divides 2 integers and prints the result.

Prototype: def safe_print_division(a, b):
You can assume that a and b are integers
The result of the division should print on the finally: section preceded by Inside result:
Returns the value of the division, otherwise: None
You have to use try: / except: / finally:
You have to use "{}".format() to print the result

4. Divide a list
mandatory
Write a function that divides element by element 2 lists.

5. Raise exception
mandatory
Write a function that raises a type exception.

Prototype: def raise_exception():
You are not allowed to import any module

6. Raise a message
mandatory
Write a function that raises a name exception with a message.

Prototype: def raise_exception_msg(message=""):
You are not allowed to import any module

7. Safe integer print with error message

8. Safe function
#advanced
Write a function that executes a function safely.

Prototype: def safe_function(fct, *args):

9. ByteCode -> Python #4
#advanced
Write the Python function def magic_calculation(a, b): that does exactly the same as the following Python bytecode:

10. CPython #2: PyFloatObject
#advanced
Create three C functions that print some basic info about Python lists, Python bytes an Python float objects.
