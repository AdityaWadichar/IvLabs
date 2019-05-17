#Autograder Exercise 4.6
def computepay(h,r):
    hh=float(h)
    rr=float(r)
    if hh<=40:
        pay=hh*rr
    else:
        pay=(40*rr)+(hh-40)*rr*1.5
    return pay

hrs = input("Enter Hours:")
rate = input("Enter rate:")
p = computepay(hrs,rate)
print(p)
