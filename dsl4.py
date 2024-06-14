r1=int(input("Enter rows of matrix 1 ="))
c1=int(input("Enter columns of matrix 1 ="))
M1=[]
for i in range(r1):
    sublist=[]
    for i in range(c1):
        e=int(input("Enter the element of the matrix 1 ="))
        sublist.append(e)
    M1.append(sublist)
print("matrix 1 is")
for i in M1:
    print(i)

r2=int(input("Enter rows of matrix 2 ="))
c2=int(input("Enter columns of matrix 2 ="))
M2=[]
for i in range(r2):
    sublist=[]
    for i in range(c2):
        e=int(input("Enter the element of the matrix 1 ="))
        sublist.append(e)
    M2.append(sublist)
print("matrix 2 is")
for i in M2:
    print(i)
    
M3=[]
def addition():
    if((r1==r2) and (c1==c2)):
        for i in range(r1):
            sublist=[]
            for j in range(c1):
                e=M1[i][j]+M2[i][j]
                sublist.append(e)
            M3.append(sublist)
        print("Matrix addition is")
        for i in M3:
            print(i)
    else:
        print("Addition of Matrix 1 and Matrix 2 is not possible")
addition()

M4=[]
def subtraction():
    if((r1==r2) and (c1==c2)):
        for i in range(r1):
            sublist=[]
            for j in range(c1):
                e=M1[i][j]-M2[i][j]
                sublist.append(e)
            M4.append(sublist)
        print("Matrix subtraction is")
        for i in M4:
            print(i)
    else:
        print("subtraction of Matrix 1 and Matrix 2 is not possible")
subtraction()

M5=[]
def multiplication():
    if(r2==c1):
        for i in range(r1):
            sublist=[]
            for j in range(c2):
                sublist.append(0)
            M5.append(sublist)
        for i in range(r1):
            for j in range(c2):
                for k in range(c1):
                    M5[i][j]+=M1[i][k]*M2[k][j]
        print("Matrix multiplication of matrix 1 and matrix 2 is")
        for i in M5:
            print(i)
    else:
        print("Matrix multiplication is not possible")
multiplication()

M6=[]
M7=[]
def transpose():
    for i in range(r1):
        sublist=[]
        for j in range(c1):
            e=M1[j][i]
            sublist.append(e)
        M6.append(sublist)
    print("transpose of matrix 1 is")
    for i in M6:
        print(i)
    for i in range(r2):
        sublist=[]
        for j in range(c2):
            e=M2[j][i]
            sublist.append(e)
        M7.append(sublist)
    print("transpose of matrix 2 is")
    for i in M7:
        print(i)
transpose()
            
                
