U=[]
u=int(input("Enter total no of students in the class"))
for i in range(u):
    U.append(i+1)
print(U)

A=[]
a=int(input("Enter total no of students who plays cricket"))
for i in range(a):
    r=int(input("Enter the roll no of student "))
    A.append(r)
print(A)

B=[]
b=int(input("Enter total no of students who plays Badminton"))
for i in range(b):
    r=int(input("Enter the roll no of student "))
    B.append(r)
print(B)

C=[]
c=int(input("Enter total no of students who plays Football"))
for i in range(c):
    r=int(input("Enter the roll no of student "))
    C.append(r)
print(C)

AandB=[]
def option1():
    for i in range(a):
        for j in range(b):
            if(A[i]==B[j]):
                AandB.append(A[i])
    print("list of student who likes cricket and badminton both is",AandB)
option1()

AorB=[]
AorBnotAandB=[]
def option2():
    for i in range(a):
        AorB.append(A[i])
    for i in range(b):
        flag=0
        for j in range(a):
            if (B[i]==A[j]):
                flag=1
        if flag==0:
            AorB.append(B[i])
    print("list of student who either plays cricket or badminton is ",AorB)
    for i in AorB:
        flag=0
        for j in AandB:
            if(i==j):
                flag=1
        if (flag==0):
            AorBnotAandB.append(i)
    print("list of student who either plays cricket or badminton but not both is ",AorBnotAandB)
option2()

notAorB=[]
count=0
def option3():
    count=0
    for i in U:
        flag=0
        for j in AorB:
            if(i==j):
                flag=1
        if (flag==0):
            notAorB.append(i)
            count=count+1
    print("Number of students who play neither cricket nor badminton is ",count,"are ",notAorB )
option3()


AandC=[]
AandCnotB=[]
def option4():
    count=0
    for i in range(a):
        for j in range(c):
            if(A[i]==C[j]):
                AandC.append(A[i])
    print("list of students who play cricket and footballl is ",AandC)
    for i in AandC:
        flag=0
        for j in B:
            if(i==j):
                flag=1
        if (flag==0):
            count=count+1
            AandCnotB.append(i)
    print("Number of students who play cricket and football but not badminton is ",count," are",AandCnotB)
option4()
