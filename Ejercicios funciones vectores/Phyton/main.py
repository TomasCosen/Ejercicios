import statistics
import os
import time
i = 0
j = 0
def buscarmaximo():
    buscarmax = max([1, 2, 27, 7])
    print("El maximo valor es: ", buscarmax)
    os.system("pause")
    menu()
def buscarminimo():
    buscarmin = min([1, 2, 27, 7])
    print("el minimo valor es: ", buscarmin)
    os.system("pause")
    menu()
def buscarpromedio():
    promedio = statistics.mean([1, 2, 27, 7])
    print("El promedio de los valores es: ", promedio)
    os.system("pause")
    menu()
def matrizsuma():
    matriza= ([[1, 2, 3],
               [4, 5, 6],
               [7, 8, 9]])
    matrizb = ([[1, 2, 3],
               [4, 5, 6],
               [7, 8, 9]])
    matrizr = ([[0, 0, 0],
                [0, 0, 0],
                [0, 0, 0]])
    for i in range(3):
        for j in range(3):
            matrizr[i][j] = matriza[i][j] + matrizb[i][j]
    print("Primera matriz: ", matriza)
    print("Segunda matriz: ", matrizb)
    print("matriz resultante: ", matrizr)
    os.system("pause")
    menu()
def matrizescalar():
    matriza = ([[1, 2, 3],
                [4, 5, 6],
                [7, 8, 9]])
    matrizr = ([[0, 0, 0],
                [0, 0, 0],
                [0, 0, 0]])
    prod = int(input("Valor de la contante escalar: "))
    for i in range(3):
        for j in range(3):
            matrizr[i][j] = matriza[i][j] * prod
    print ("Matriz resultante: ", matrizr)
    os.system("pause")
    menu()
def menu():
    opcion = 0
    print("""
    1 - Buscar numero maximo
    2 - Buscar numero minimo
    3 - Sacar el promedio
    4 - Sumar matrices
    5 - Multiplicar matriz escalar
    6 - Salir""")
    while (opcion != 6):
        opcion = int(input("Ingrese opción: "))
        if opcion == 1:
            buscarmaximo()
        elif opcion == 2:
            buscarminimo()
        elif opcion == 3:
            buscarpromedio()
        elif opcion == 4:
            matrizsuma()
        elif opcion == 5:
            matrizescalar()
        elif opcion == 6:
            print("""Seguro que desea salir?
                    Si        No""")
            salir = (str(input("Opción: ")))
            if (salir == 'si' or salir == 'Si' or salir == 'SI' or salir == 'sI'):
                print("MAIAMEEEE")
                quit()
            else:
                menu()
        else:
            print('Opcion Incorrecta')
            time.sleep(1)
            menu()
print("""
Menú ejercicios - funciones, vectores - Tomás Cosentino
""")
menu()