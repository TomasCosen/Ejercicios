acumulador=0
contador=0
numero=0
for i in range(20):
    numero = int (input("ingrese un numero: "))
    """acumulador"""
    acumulador = acumulador + numero
    contador = contador + 1

promedio = (acumulador)/contador
print("El promedio es: ", promedio)
