negativos = 0
ceros = 0
positivos = 0

for i in range(10):
    nua = int(input("ingrese un numero"))
    if (nua < 0):
        negativos = negativos + 1
    if (nua == 0):
        ceros = ceros + 1
    if (nua > 0):
        positivos = positivos + 1

print("la cantidad de numeros negativos es: ", negativos)
print("la cantidad de ceros es: ", ceros)
print("la cantidad de numeros positivos es: ", positivos)