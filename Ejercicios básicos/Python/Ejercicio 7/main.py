nua = 0
contadormedicion =0
max =0
acumulador =0
contadorpromedio=0
while (nua != -100):
    nua = int(input("ingrese una temperatura"))
    contadormedicion = contadormedicion + 1
    if nua <=30 -- nua >=10:
        acumulador = acumulador + nua
        contadorpromedio = contadorpromedio + 1
    if (max == 0):
        max = nua
    if (max < nua):
        max = nua

contadormedicion = contadormedicion - 1
promedio = acumulador/contadorpromedio
print("la cantidad de mediciones ingresadas son: ", contadormedicion)
print("el maximo valor ingresado es: ", max)
print("El promedio de valores ingresados es de: ", promedio)