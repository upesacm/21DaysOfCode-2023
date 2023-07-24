def fizzbuzz_range(start,end):
    list=[]
    for i in range (start,end+1):
       
        if (i%3==0 and i%5==0): 
            c='fizzbuzz'
            list.append(c)
        elif i%3==0:
            a='fizz'
            list.append(a)
        elif i%5 ==0:
            b='buzz'
            list.append(b)
        else:
            list.append(i)
    print(list)
        
    
    

start=int(input("Enter Your First Number:"))
end=int(input("Enter Your Last Number:"))
fizzbuzz_range(start,end)