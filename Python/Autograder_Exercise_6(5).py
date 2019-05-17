#Autograder: Exercise 6.5
text = "X-DSPAM-Confidence: 0.8475"
a=text.find(":")
b=text[a+2:]
c=float(b)
print(c)
