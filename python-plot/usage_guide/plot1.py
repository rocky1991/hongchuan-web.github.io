import matplotlib.pyplot as plt 
import numpy as np 
import pandas


x = np.linspace(0, 2, 101)
print(len(x))
print(x)

plt.plot(x, x, label = 'linear')
plt.plot(x, x**2, label = 'quadratic')
plt.plot(x, x**3, label = 'cubic')

plt.xlabel('x label')
plt.ylabel('y label')

plt.title("simple plot")

plt.legend()

plt.show()


'''
a = pandas.DataFrame(np.random.rand(4,5), columns = list('abcde'))

print(a)
print(np.random.rand(4,5))

a_asarray = a.values
print()
print(a_asarray)

b = np.matrix([[1, 2], [3, 4]])
b_asarray = np.asarray(b)
print(b)
print(b_asarray)
'''


'''
fig = plt.figure()

fig.suptitle('No axes on this figure')

fig, ax_1st = plt.subplots(2, 2)

fig, ax_1st = plt.subplots(3, 3)

plt.show()
'''