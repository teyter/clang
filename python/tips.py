s = "this is a sentece"

def spilt(sentence):
    numwords = 1
    for letter in sentence:
        if letter == " ":
            numwords += 1
    print(numwords)

def bla(s):
    ss = ""
    ret = []
    for i in s:
        if i == " ":
            ret.append(ss)
            ss = ""
        else:
            ss += i
    ret.append(ss)
    return ret



spilt(s)
print(bla(s))
