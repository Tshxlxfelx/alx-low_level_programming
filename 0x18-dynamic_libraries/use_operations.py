# use_example.py
from ctypes import CDLL

# Load the dynamic library
libexample = CDLL('./libexample.so')

# Call the C function from Python
result = libexample.add(5, 7)
print("Result from C function:", result)

