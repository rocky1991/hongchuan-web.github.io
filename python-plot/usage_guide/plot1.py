import matplotlib.pyplot as plt 
import numpy as np 
import pandas

'''
def my_plotter(ax, data1, data2, param_dict):
	"""
	A helper function to make a graph

	Parameters
	----------
	ax : Axes
		The axes to draw to

	data1 : array
		The x data

	data2 : array
		The y data

	param_dict : dict
		Dictionary of kwargs to pass to ax.plot

	Returns
	-------
	out : list
		list of artists added
	"""

	out = ax.plot(data1, data2, **param_dict)
	return out

# which you would then use as:
data1, data2, data3, data4 = np.random.randn(4,10)
print(data1)
print(data2)
print(data3)
print(data4)
fig, ax = plt.subplots(1, 1)
my_plotter(ax, data1, data2, {'marker': 'x', 'linestyle' : 'dashed'})

fig, (ax1, ax2) = plt.subplots(1, 2)
my_plotter(ax1, data1, data2, {'marker': 'x'})
my_plotter(ax2, data3, data4, {'marker': 'o'})
plt.show()
'''


'''
def arg_learn1(*args):
	for arg in args:
		print(arg)

def arg_learn2(**kwargs):
	for a in kwargs:
		print(a, kwargs[a])

arg_learn1(1,2,3)
arg_learn2(name = 5, age = 2)

my_dict = {'a': 1, 'b': 2, 'c': 3}
def arg_learn3(x, y, z):
	print(str(x), str(y), str(z))

arg_learn3(*my_dict)

my_dict1 = {'x': 1, 'y': 2, 'z': 3}
arg_learn3(**my_dict1)

my_dict2 = {1, 2, 3}
arg_learn3(*my_dict2)
'''


'''
x = np.arange(0, 10, 0.02)
y = np.sin(x)

fig, ax = plt.subplots()
ax.plot(x, y)
plt.show()
'''


'''
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