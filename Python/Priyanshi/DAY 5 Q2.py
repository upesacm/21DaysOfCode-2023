num1= int(input ("Enter:"))  
num2 = int(input ("Enter:"))
print ("The Prime Numbers in the range are: ")  
for j in range (num1, num2 + 1):  
        for i in range (2, j):  
            if (j % i) == 0:  
                break
        else:
            print (j)
