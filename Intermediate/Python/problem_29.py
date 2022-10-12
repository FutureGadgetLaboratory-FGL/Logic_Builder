# Find all the duplicates in an array
#Prashant9420
a=[1,1,2,3,4,4,5,6,3]
b=[]
for i in a:
    if(a.count(i)>1):
        if(i not in b):
            b+=[i]
print("duplicate numbers: "+str(b))
