def w(l,i):
    if (l[i+1] =='purple' or l[i+1]=='green'):
        return True
    return False
def p(l,i):
    if (l[i+1] =='red' or l[i+1]=='orange'):
        return False
    return True
def b(l,i):
    if (l[i+1] =='white' or l[i+1]=='orange'):
        return True
    return False
def g(l,i):
    if (l[i+1] =='black' or l[i+1]=='purple'):
        return True
    return False 
def o(l,i):
    if (l[i+1] =='red' or l[i+1]=='purple' or l[i+1] == 'black'):
        return True
    return False
input()
s = input().split()
win = True
for i in range(len(s)):
    if i == 0 and not (s[i]=='white' or s[i]=='black'):
        win = False
        break
    elif i < len(s)-1:
        if s[i] =='white':win = win and w(s,i)
        elif s[i] =='black':win = win and b(s,i)
        elif s[i] =='purple':win = win and p(s,i)
        elif s[i] =='green':win = win and g(s,i)
        elif s[i] =='orange':win = win and o(s,i)
        elif s[i] =='red' and win: break
        #print(win)
print('GOLD' if win else 'LOCKED')
