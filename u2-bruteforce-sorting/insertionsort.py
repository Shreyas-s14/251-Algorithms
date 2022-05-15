'''
insertion sort program in python
'''
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

def main():
    arr = [5, 2, 4, 6, 1, 3]
    print(insertion_sort(arr))    