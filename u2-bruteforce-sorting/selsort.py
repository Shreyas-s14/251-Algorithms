def selsort(list,n):
    for i in range(n-1):
        min = i
        for j in range(i+1, n):
            if list[j] < list[min]:
                min = j
        list[i], list[min] = list[min], list[i]
    return list
n=int(input("Enter the number of elements: "))
list=[]
for i in range(n):
    list.append(int(input("Enter the element: ")))

print(selsort(list,n))    