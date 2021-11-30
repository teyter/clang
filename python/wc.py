s = "this is a sentence" # 4 2 1 8

def wc(s):
    ret = []
    count = 1
    for i in s:
        if i == ' ':
            ret.append(count-1)
            count = 0
        count += 1
    ret.append(count-1)
    return ret

print( wc(s) )

