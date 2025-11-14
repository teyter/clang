import re

def increment_string(strng):
    numeric = re.search("[0-9]*$", strng)
    a = numeric.span()[0]
    b = numeric.span()[1]
    alpha = strng[:a]
    beta = strng[a:b] if strng[a:b] else '0'
    return alpha + '{:0>{width}}'.format(int(beta)+1, width=len(beta))