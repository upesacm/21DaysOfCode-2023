n=int(input("Enter n number of file element "))
file1_txt=[]
for i in range(0,n):
    val=int(input("Enter val in file1_txt "))
    file1_txt.append(val)
    
try:
    string=str(input("Enter string as file name "))
    if string =='file1_txt':
        print("File found file1_txt")
        for i in range(0,n):
            print(file1_txt[i])
    else:
        print(error)
except:
    print("File not found")
