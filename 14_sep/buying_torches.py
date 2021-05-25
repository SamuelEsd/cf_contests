import math
t = int(input())

while( t > 0):
    x, y, k = [int(x) for x in input().split()]
    sticks_needed = ((y+1)*k)-1
    print((sticks_needed + x - 2)// (x - 1) + k)        
    t -= 1






