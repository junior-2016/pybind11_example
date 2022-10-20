from pybind11_example import example
a = [1.0, 2.0, 3.0]
b = [4.0, 5.0, 6.0]
c, d = example(a, b)
print(c)
print(d)
