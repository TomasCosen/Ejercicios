A = 0
B = 0
C = 0
A = float(input("ingrese el número A: "))
B = float(input("ingrese el número B: "))
C = float(input("ingrese el número C: "))
discr = (B**2) - (4*A*C)
print ("El discriminante es: ", discr)
if (discr > 0):
    import math
    x1 = ((B* -1) + (math.sqrt(discr))) / (2 * A)
    x2 = ((B* -1) - (math.sqrt(discr))) / (2 * A)
    print("Las raíces son distintas:")
    print ("X1 es: ", x1)
    print("X2 es: ", x2)
if (discr == 0):
    caso2 = (B * -1) / (2*A)
    print("Las raíces valen lo mismo y es: ", caso2)
if (discr < 0):
    import math
    xr = (B * -1) / (2 * A)
    print ("Las raíces son complejas conjugadas, hay parte real e imaginaria")
    print ("La parte real es: ", xr)