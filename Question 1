o={1:3,2:3,3:5,4:4,5:4,6:3,7:5,8:5,9:4,0:0}
el={10:3,11:6,12:6,13:8,14:8,15:7,16:7,17:9,18:8,19:9}
t={2:6,3:6,4:5,5:5,6:5,7:7,8:6,9:6,0:0}

res=0
for i in range(1,1001):
    n=i
    sn=str(n)
    l=len(sn)
    if l==1:
        res = res + o[n]
    elif l==3:
        if int(sn[1])==1:
            res = res + o[int(sn[0])] + 10 + el[int(sn[1:3])]
        else:
            res =res + o[int(sn[0])] + 10 + t[int(sn[1])] + o[int(sn[2])]
    else:
        if int(sn[0])==1:
            res = res + el[int(sn[0:2])] 
        else:
            res = res + t[int(sn[0])] + o[int(sn[1])]

print(res)
