N=[]
n=int(input("Enter total no of students who attended training program ="))
for i in range(n):
    r=int(input("Enter roll no ="))
    N.append(r)
    
a=int(input("Enter the roll no for checking student attended program or not ="))    
def linear(n,N,a):
    print("By linear search ")
    flag=0
    for i in range(n):
        if(N[i]==a):
            flag=1
            print("roll no ",a," student attended the training program")
            break;
    if(flag==0):
        print("roll no ",a," student not attended the training program")
linear(n,N,a)

def fibonacci(n,N,a):
    print("By fibonaaci search")
    fib1=0
    fib2=1
    fibn=fib1+fib2
    offset=-1
    flag=0
    while(fibn<=n):
        fib1=fib2
        fib2=fibn
        fibn=fib1+fib2
    while(fib2!=0):
        i=min((offset+fib2),n-1)
        if(a>N[i]):
            fibn=fib2
            fib2=fib1
            fib1=fibn-fib2
            offset=i
        elif(a<N[i]):
            fibn=fib1
            fib2=fib2-fib1
            fib1=fibn-fib2
        elif(a==N[i]):
            flag=1
            print("roll no ",a," student attended the training program")
            break;
    if(flag==0):
        print("roll no ",a," student not attended the training program")
fibonacci(n,N,a)
