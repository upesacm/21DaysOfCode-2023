set1={1,2,3,4}
set2={1,2,3}
if set2.issubset(set1)==True:
    print("set2 is belong to set1")
elif set1.issubset(set2)==True:
    print("set1 is belong to set2")
else:
    print("No subset relation between set1, set2")



For example:
#set2 is belong to set1:
#set1={1,2,3,4}
#set2={1,2,3}

#set1 is belong to set2:
#set1={1,2,3,4}
#set2={1,2,3,4,5}

#No subset relation between set1, set2
#set1={1,2,3,45}
#set2={1,2,3,4}
