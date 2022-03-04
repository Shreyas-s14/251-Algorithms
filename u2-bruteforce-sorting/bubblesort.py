#bubblesort program in python
def bubblesort(list):
    if(len(list)==0):
        return -1
    else:
        print(len(list))
        for i in range(len(list)-1):
            for j in range(len(list)-1-i):
                if(list[j]>list[j+1]):
                    #swap if lesser
                    list[j],list[j+1]=list[j+1],list[j]
        return list

#print(bubblesort([9,5,6,13,4,10]))
ls=[]
n=int(input("Enter the number of elements: "))
def enterele(list):
    for i in range(n):
        list.append(int(input("Enter the element: ")))
    return list
enterele(ls)
print(bubblesort(ls))            
        