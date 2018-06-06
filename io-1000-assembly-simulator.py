l = [0]*256
n = int(input(),16)
s = input()
while s!= 'END':
    #print(s)
    s = s.split()
    if len(s) ==2:
        z = str(hex(l[int(s[1],16)])).upper()
        print(z[2:])
    elif s[0] =='PRINTLN':
        for i in range(int(s[1],16),int(s[2],16)+1):
            z = str(hex(l[i])).upper()
            print(z[2:],end=' ')
        print('')
    elif s[0] == 'MOVE':
        if s[1][0] == '#':
            l[int(s[2],16)] = int(s[1][1:],16)
        else:
            l[int(s[2],16)] = l[int(s[1],16)]
    elif s[0] == 'ADD':
        l[int(s[2],16)] += l[int(s[1],16)]
    elif s[0] == 'SUB':
        l[int(s[2],16)] = l[int(s[2],16)]-l[int(s[1],16)]
    elif s[0] == 'AND':
        l[int(s[2],16)] = l[int(s[2],16)]&l[int(s[1],16)]
    elif s[0] == 'OR':
        l[int(s[2],16)] = l[int(s[2],16)]|l[int(s[1],16)]
    elif s[0] == 'XOR':
        l[int(s[2],16)] = l[int(s[2],16)]^l[int(s[1],16)]
    #print(s)
    s = input()
