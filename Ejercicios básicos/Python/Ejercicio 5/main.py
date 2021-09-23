acumulador = 0
contador = 0
for i in range(10):
    nua = int(input("ingrese una temperatura"))
    if(nua > 5 - nua < 15):
        acumulador = acumulador + nua
        contador = contador + 1

promedio = (acumulador/contador)
print("el promedio de la temperatura es: ", promedio)