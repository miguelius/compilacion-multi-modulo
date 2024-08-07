# Ejemplos de compilación en varios módulos

En este repositorio vemos un ejemplo de un programa c de un sólo archivo o módulo o unidad de traducción y una carpeta con un programa C con varios módulos o unidades de traducción y un Makefile para no agarrarnos la cabeza (tanto).

## Requerimientos

Instalar:

- gcc
- make

## ¿Cómo lo uso?

### programa de un módulo

```
cd hello                    # voy al directorio
gcc hola.c -o hola          # compilo
./hola                      # ejecuto. si estoy en Powershell correr .\hola.exe
```

### programa multi-módulo

#### Compilación manual

```
cd palindromo
# compila la librería
gcc -c palindromo_safando.c

# compila los tests
gcc -c palindromo_tests.c
gcc palindromo_safando.o palindromo_tests.o -o palindromo_tests

# compila el programa
gcc -c palindromos.c
gcc palindromo_safando.o palindromos.o -o palindromos
```

#### Compilación automatizada con Makefile

```
cd palindromo
make all
```

### Para limpiar todo

```
make clean
```
