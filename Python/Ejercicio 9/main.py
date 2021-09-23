
m1 = float(input("ingrese pendiente de la recta A: "))
b1 = float(input("ingrese ordenada al origen de la recta A: "))
n1 = float(input("ingrese el termino independiente de la recta A: "))
m2 = float(input("ingrese pendiente de la recta B: "))
b2 = float(input("ingrese ordenada al origen de la recta B: "))
n2 = float(input("ingrese el termino independiente de la recta B: "))

"""determinante general"""
DG1 = (m1 * b2)
DG2 = (b1 * m2)
DG = (DG1 - DG2)
"""determinante de X"""
dx1 = (n1*b2)
dx2 = (b1*n2)
Dx = (dx1-dx2)
"""determinante de Y"""
dy1 = (m1*n2)
dy2 = (m2*n1)
Dy = dy1-dy2
"""X="""
x= float(Dx/DG)
"""Y="""
y= float(Dy/DG)

print ("Eje x: ", x)
print("Eje Y: ", y)
if (m1 == m2):
    print ("no hay intersección entre las rectas")
print ("Determinante general: ", DG)
print ("Determinante de X", Dx)
print ("Determinante de Y", Dy)