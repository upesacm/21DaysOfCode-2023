students = [
    ("John", 80, 90, 75),
    ("Jane", 80, 70, 60),
    ("Mary", 70, 60, 50),
    ("Peter", 60, 50, 40),
    ("Paul", 50, 40, 30),
]

for i in students:
    m=(i[1]+i[2]+i[3])/3
    avg=round(m,2)
    print(i[0]+":",avg)
