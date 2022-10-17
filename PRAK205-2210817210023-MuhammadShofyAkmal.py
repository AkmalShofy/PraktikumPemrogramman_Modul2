import math
a = float(input("Tinggi        : "))
b = float(input("Sisi Miring   : "))
c=math.sqrt(b*b-a*a)
d=a+b+c
e=c*a/2
print ("Alas     = %.0f cm" % (c))
print ("Tinggi   = %.0f cm" % (a))
print ("Keliling = %.0f cm" % (d))
print ("Luas     = %.0f cm^2" % (e))