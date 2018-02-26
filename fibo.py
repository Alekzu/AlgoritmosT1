import time
import matplotlib.pyplot as plt

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1)+fibonacci(n-2)
start_time = time.time()
fibonacci(35)
print("--- %s seconds ---" % (time.time() - start_time))