nua = 1
contadornua = 0
acumulador = 0
contadorpromedio = 0
min = 0
flag = 0
cantidadnumeros = 0
promedio = 0

while (nua != 0):
    nua = int(input("ingrese un numero"))
    contadornua = contadornua + 1
    if (nua > 0 ):
        if (nua <= 18 & nua >= 9):
            acumulador = acumulador + nua
            contadorpromedio = contadorpromedio + 1
        if (min == 0):
            min = nua
        if (nua < min):
            min = nua
        if (nua == 8):
            flag = 1
        if (flag == 1):
            cantidadnumeros = cantidadnumeros + 1

if (flag == 1):
    cantidadnumeros = cantidadnumeros - 1
if (nua <= 18 & nua >= 9):
    promedio = acumulador / contadorpromedio
print("el promedio de los numeros ingresados entre 9 y 18 es de: ", promedio)
print("el menor valor registrado es de: ", min)
print("la cantidad de numeros ingresados después del 8 es de: ", cantidadnumeros)