# def show(n): 
#     if(n == 0):
#         return
#     print(n)
#     show(n-1)
#     print("end")
    
# show(5)

# Factorial

# def fact(n):
#     if(n==0 or n==1):
#         return 1
#     else:
#         return n* fact(n-1)
    
# print(fact(4)) 

# Practice question: To print sum of n natural numbers

# def sumNatural(n):
#     if(n == 0):
#         return 0
#     else: 
#         return n + sumNatural(n-1)

# print(sumNatural(5))


# Practice question: To print all elements in the list

list = [1,2,3,4,5]

def printList(list,n):
    if(n == len(list)):
        return
    else:
        print(list[n])
        printList(list,n+1)


printList(list,0)

