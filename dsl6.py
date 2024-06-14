N=[]
n=int(input("Enter total no of students who attended training program ="))
for i in range(n):
    r=int(input("Enter roll no ="))
    N.append(r)
    
a=int(input("Enter the roll no for checking student attended program or not ="))
def binarysearch(N,n,a):
    print("By binary search")
    high=n-1
    low=0
    flag=0
    while(low<=high):
        mid=(low+high)//2
        if(N[mid]==a):
            print("roll no",a," student attended the training program")
            flag=1
            break;
        if(N[mid]>a):
            high=mid-1
        else:
            low=mid+1
    if(flag==0):
        print("roll no",a," student not attended the training program")
binarysearch(N,n,a)

def sentinelsearch(N,n,a):
    print("By sentinel search")
    last=N[n-1]
    N[n-1]=a
    i=0
    while(N[i]!=a):
        i=i+1
    N[n-1]=last
    if((i<n-1) or N[n-1]==a):
        print("roll no",a," student attended the training program")
    else:
        print("roll no",a," student not attended the training program")
sentinelsearch(N,n,a)