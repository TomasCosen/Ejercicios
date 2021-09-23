acumulador=0
contador =0
nua = 1

while (nua != 0):
    nua = int(input("ingrese un numero: "))
    acumulador = acumulador + nua
    contador = contador + 1
    print(acumulador, contador)

contador= contador - 1
promedio = acumulador/contador
print("el promedio es: ", promedio)
