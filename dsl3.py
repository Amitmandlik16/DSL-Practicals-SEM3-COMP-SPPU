N=[]
n=int(input("Enter total no of students"))
for i in range(n):
    N.append(i+1)
print("Total students are ",N)


P=[]
p=int(input("Enter total no of students appeard for FDS exam"))
for i in range(p):
    r=int(input("Enter roll no of present student"))
    P.append(r)
print("present students are",P)

M=[]
for i in P:
    print("Enter marks of roll no ",i)
    r=int(input())
    M.append(r)
print("Marks of that respective students are",M)

def average():
    sum=0
    for i in range(p):
        sum=sum+M[i]
    avg=sum/p
    print("Average score of the class is ",avg)
average()

def highlow():
    high=0
    for i in range(p):
        if(M[high]<M[i]):
            high=i
    low=0
    for i in range(p):
        if(M[low]>M[i]):
            low=i
    print("highest score of the class is ",M[high]," and lowest score of the clas is",M[low])
highlow() 

FREQ=[]
def frequency():
    for i in range(p):
        count=0
        for j in range(p):
            if(M[i]==M[j]):
                count=count+1
        FREQ.append(count)
    print("count of frequency of marks scored by student is")
    for i in range(p):
        print("frequency of marks ",M[i]," is ",FREQ[i])
frequency()