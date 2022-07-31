# cook your dish here
from math import gcd
for _ in range(int(input())):
    X,Y = map(int,input().split(" "))
    if X==1 or Y==1:
     print(-1)
    else:
        G_XY = gcd(X,Y)
        if G_XY != 1:
            print(0)
        else:
            print(1)