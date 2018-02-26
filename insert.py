import timeit
import random
#import numpy as np

def insertion_sort():
    A = (random.sample(range(1,1000),500))
    j = 1

    while j < len(A):
        key = A[j]
        i = j - 1
        while (i >= 0) and (A[i] > key):
            A[i + 1] = A[i]
            i = i -1
        A[i + 1] = key
        j = j + 1
    print(A)


#print(Arr)
#tiempo = timeit.timeit('insertion_sort()', 'from __main__ import insertion_sort', number=100)
#print(tiempo)
insertion_sort()
