names=list(input("enter the names separated by comma").split(","))
marks=list(map(int,input("enter marks").split(",")))
newt=tuple(zip(names,marks))
print(newt)