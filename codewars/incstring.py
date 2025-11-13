import re


s = ""
while s != "quit":
    s = input("Enter your string: ")

    # s = "teitur"
    x = re.search("[a-z]+0*", s)
    alpha = s[:(x.span()[1])]
    num = s[(x.span()[1]):]
    if not num:
        num = 0
    inc = int(num) + 1
    print(alpha + str(inc))