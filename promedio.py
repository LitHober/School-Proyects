#!/usr/bin/python

def promedio(**numeros):
	sum = 0
	for n in numeros:
		sum += numeros[n]

	return sum/len(numeros)

dic = {'a':1, 'b':2, 'c':10.0}

print (promedio(**dic))
