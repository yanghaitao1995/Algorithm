# -*- coding=utf-8 -*-
# bubble_sort.py

"""
Demo:
     The bubble sort algorithm based on python
"""

# initialize an array
array = [3,1,2,5,10,0,1,12,8,1]

# bubble sort
for j in range(len(array)-1,1,-1):
    for i in range(j):
        if array[i] > array[i+1]:
            array[i], array[i+1] = array[i+1], array[i]
        else:
            continue

# print the array based on bubble sort
print(array)

