names=list(input("enter the names separated by comma").split(","))
marks1=list(map(int,input("enter marks").split(",")))
marks2=list(map(int,input("enter marks").split(",")))
marks3=list(map(int,input("enter marks").split(",")))
marks=tuple(zip(marks1,marks2,marks3))
avg=[]
for mark in marks:
    avgs=sum(mark)/len(mark)
    avg.append(avgs)

for name,marks in zip(names,avg):
    average = "{:.2f}".format(marks)
    print(f"marks of {name} is {average}")


