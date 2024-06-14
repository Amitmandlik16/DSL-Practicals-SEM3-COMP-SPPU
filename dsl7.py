P=[]
n=int(input("Enter total no of students :"))
for i in range(n):
    print("Enter percentage of student roll no",(i+1))
    r=float(input("Enter ="))
    P.append(r)
print(P)

def selectionsort(n,P):
    for i in range(0,n-1):
        min=i
        for j in range(i+1,n):
            if(P[j]<P[min]):
                min=j
        temp=P[i]
        P[i]=P[min]
        P[min]=temp
    print("using selectionsort Sorted percentage list is  ",P)
selectionsort(n,P)

def bubblesort(n,P):
    for i in range(n):
        for j in range(n-1):
            if(P[j+1]<P[j]):
                temp=P[j]
                P[j]=P[j+1]
                P[j+1]=temp
    print("using bubblesort Sorted percentage list is  ",P)
bubblesort(n,P)

def top5(n,P):
    print("Top five scores are")
    for i in range(n-1,n-6,-1):
        print(P[i],end=", ")
top5(n,P)
        