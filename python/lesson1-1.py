A = input()
#print(A)
#print(type(A))

a = 0
b = 0
for i in range(0,12):
    if (i%2==0):
        b = b + int(A[i])
    else:
        a = a + int(A[i])
#print(a)
#print(b)
result = 9-(b+3*a-1)%10
print(result)