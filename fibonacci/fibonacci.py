from datetime import datetime
index = 600

def fibonacci(n):
    previous_element = 0
    current_element = 1
    new_element = 0
    for i in range(1, n):
        new_element = previous_element + current_element
        previous_element = current_element
        current_element = new_element
    return current_element

t1 = datetime.now()
print fibonacci(index)
t2 = datetime.now()
print t2-t1


def fibonacci2(n):
    if n==0: return 0
    if n==1: return 1
    else: return fibonacci2(n-1) + fibonacci2(n-2)

t1 = datetime.now()
print fibonacci2(index)
t2 = datetime.now()
print t2-t1


def fibonacci3(n):
    a = range(n+2)
    a[0], a[1] = 0, 1
    i = 2
    while (True):
        if n<i: return a[n]
        else:
            #a[i], a[i+1] = a[i-1]+a[i-2], a[i]+a[i-1]
            a[i] = a[i-1] + a[i-2]
            a[i+1] = a[i] + a[i-1]
            i += 2


t1 = datetime.now()
print fibonacci3(index)
t2 = datetime.now()
print t2-t1

