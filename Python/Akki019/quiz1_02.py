a=input()
try:
    a=a.split()
    a=list(map(int,a))
    a.sort()
    b=[]
    for i in a:
        if i not in b:
            b.append(i)
    if(len(b))>1:
        print("Product Of Largest Distinct Numbers:", b[-1]*b[-2])
    else:
        print("Product Of Largest Distinct Numbers:", -1)
except:
    print('Invalid Input')