nua = 1
max = 0
min = 0

while (nua != 0):
    nua = int(input("ingrese un numero"))
    if (max == 0 & min ==0):
        max=nua
        min=nua
    if (nua > max):
        max = nua
    if (nua < min):
        min = nua

print ("el numero mas bajo es: ", min, "el numero mas alto es: ", max)