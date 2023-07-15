try:
    name = input("enter a filename:")
    file = open(name,'r')
    file.close()
except FileNotFoundError:
    print("Error: File not found")
