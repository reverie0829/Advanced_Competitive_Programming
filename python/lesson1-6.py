a, b, c = input().strip().split(' ')
s = [a+b+c,a+c+b,b+a+c,b+c+a,c+a+b,c+b+a]
s = map(int, s)
print(max(s))