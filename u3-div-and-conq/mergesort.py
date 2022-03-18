# mergesort program 
'''
It sorts a given array A by dividing it into two halves
A[0..[n/2]-1] and A[[n/2]..n - 1], sorting each of them recursively, and then
merging the two smaller sorted arrays into a single sorted one
'''


def mergesort(list):
    if len(list)==1:
        return list
    else:
        b=mergesort(list[:len(list)//2])
        c=mergesort(list[len(list)//2:])
        return merge(b,c,list)


def merge(b,c,a):
    i=0
    j=0
    k=0
    while i<len(b) and j<len(c):
        if b[i]<c[j]:
            a[k]=b[i]
            i+=1
        else:
            a[k]=c[j]
            j+=1
        k+=1
    #in case c is empty    
    while i<len(b):
        a[k]=b[i]
        i+=1
        k+=1
    #in case b is empty    
    while j<len(c):
        a[k]=c[j]
        j+=1
        k+=1
    return a 

def main():
    while 1:
        
        opt =int(input("Enter you choice: 1)mergeosrt 2) quit"))  
        if opt==1:
            n=int(input("Enter the number of elements in the list: "))
            list=[]
            if n>0:
                for i in range(n):
                    list.append(int(input("Enter the element: ")))      
                print("The sorted list is: ",mergesort(list))
            else:
                print("Invalid input")
        elif opt==2:
            break
        else:
            print("Invalid input")
main()            