mat=[]
for i in range(80):
    tmp=list(map(int,input().slpit(",")))
    mat.append(tmp)
print(mat)


'''
import numpy as np
arr=[]

def read():
    with open('file.txt') as f:
        ele=f.read().split('\n')
        
        for i in range(0,len(ele)):
            m=ele[i].split(',')
            for x in range(0,len(m)):
                m[x]=int(m[x])
            arr.append(m)
        #print(m)

if _name=="main_":

    read()
    arr=np.array(arr)
    print(np.shape(arr))
'''
