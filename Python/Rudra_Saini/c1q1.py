l=list(input().split())
l=list(set(l))
try:
     
     
    l=[int(i) for i in l]
    l.sort()
    if not l:
        print("invalid input")
    else:
        print("The Sorted Non-Duplicate List:", l)
except ValueError:
    print("invalid input")
except:
     print("invalid input")



