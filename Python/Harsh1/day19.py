'''Write a Python program that implements a linear search algorithm to find a specific element in a given list. Display a message indicating whether the element is found or not.'''

#sol
try:
    n=int(input('Enter of element you want to enter in list:'))
    list1=[]
    for i in range(n):
        a=int(input('Enter number:'))
        list1.append(a)
    print(f'Element entered by you in list:{list1}')
    find=int(input('Enter the number you want to find in list:'))
        
    for i in range(n):
        if find == list1[i]:
            print('The number is found in the list')
            break
    else:
        print('The number is not found in the list')
except ValueError:
    print('Enter valid input')

'''Write a Python program that implements a binary search algorithm to search for a target number in a sorted list. If the target number is found, display its index. 
If the target number is not found, display the index where it should be inserted to maintain the sorted order.'''

#sol
try:
    n=int(input('Enter of element you want to enter in list:'))
    list1=[]
    for i in range(n):    
        a=int(input('Enter number:'))
        list1.append(a)
    print(f'Element entered by user in list:{list1}')
    list1=set(list1)
    list1=list(list1)
    list1.sort()
    print(f'List After sorting:{list1}')
    find=int(input('Enter the number you want to find in list:'))
    n1=0
    n2=len(list1)-1
    while n1<=n2:
        dif=(n1+n2)//2
        if list1[dif]==find:
            print(f'The number ({find}) is found at index {dif+1}')
            break
        elif list1[dif] > find:
            n2=dif-1
        elif list1[dif]<find:
            n1=dif+1
    else:
        print(f'The number is not found')
        k_1=0
        k_2=1
        n1_1=list1[k_1]
        n2_1=list1[k_2]
        while True:
            if find>n1_1 and find <n2_1:
                print(f'The number ({find}) can be inserted between {n1_1} and {n2_1}')
                break
            else:
                k_1+=1
                k_2+=1
                if k_2 == len(list1):
                    print(f'The number ({find}) can be inserted after {(n1_1)}')
                    break
            n1_1 = list1[k_1]
            n2_1 = list1[k_2]
except ValueError:
    print("Enter valid Input")
