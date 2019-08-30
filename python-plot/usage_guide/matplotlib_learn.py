import matplotlib.pyplot as plt 
import numpy as np 
import pandas

mu, sigma = 100, 15
x = mu + sigma * np.random.randn(10000)

n, bins, patches = plt.hist(x, 50, density=1, facecolor='g', alpha=0.75)

plt.xlabel('Smarts')
plt.ylabel('Probability')
plt.title('Histogram of IQ')
plt.text(60, .025, r'$\mu=100,\ \sigma=15$')
plt.axis([40, 160, 0, 0.03])
plt.grid(True)
plt.show()





'''
plt.figure(1)
plt.subplot(211)
plt.plot([1, 2, 3])
plt.subplot(2,1,2)
plt.plot([4,5,6])

plt.figure(2)
plt.plot([4,5,6])

plt.figure(1)
plt.subplot(2,1,1)
plt.title("Easy as 1, 2, 3")

plt.show()
'''



'''
def f(t):
	return np.exp(-t) * np.cos(2*np.pi*t)

t1 = np.arange(0., 5., 0.1)
t2 = np.arange(0., 5., 0.02)

plt.figure()
plt.subplot(211)
plt.plot(t1, f(t1), 'bo', t2, f(t2), 'r-')

plt.subplot(2,1,2)
plt.plot(t2, np.cos(2*np.pi*t2), 'r--')
plt.show()
'''


'''
x = np.arange(0,50)
lines = plt.plot(x, x)
print(plt.setp(lines))
'''

'''
names = ['group_a', 'group_b', 'group_c']
values = [1, 10, 100]

plt.figure(figsize=(9, 3))

plt.subplot(131)
plt.bar(names, values)
plt.subplot(132)
plt.scatter(names, values)
plt.subplot(133)
plt.plot(names, values)
plt.suptitle('Categorical Plotting')
plt.show()
'''

'''
data = {'a': np.arange(50),
		'c': np.random.randint(0, 50, 50),
		'd': np.random.randn(50)}

data['b'] = data['a'] + 10 * np.random.randn(50)
data['d'] = np.abs(data['d']) * 100

plt.scatter('c', 'd', c='c', s='d', data=data)
plt.xlabel('entry a')
plt.ylabel('entry b')
plt.show()
'''

'''
t = np.arange(0., 5., 0.2)

plt.plot(t, t, 'r--', t, t**2, 'bs', t, t**3, 'g^')
plt.show()
'''

'''
plt.plot([1, 2, 3, 4], [2, 3, 4, 5], 'ro')
plt.ylabel('some numbers')
plt.axis([0, 6, 0, 10])   # this specifies the viewport of the axes
plt.show()
'''


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