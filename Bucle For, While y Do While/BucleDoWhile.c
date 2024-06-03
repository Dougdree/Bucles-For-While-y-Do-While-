#include <stdio.h>
int main(){
    /*1. Suma de los dígitos de un número
    • Descripción: Dado un número, calcular la suma de sus dígitos.
    • Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21*/

    int dato = 12567;
    int suma2 = 0;
    char str[10];
    sprintf(str, "%d", dato);

    // Inicialización de índice para recorrer la cadena
    int i = 0;

    // Calcular la suma de los dígitos usando un bucle do-while
    do {
        suma2 += str[i] - '0';
        i++;
    } while (str[i] != '\0');

    // Mostrar el resultado
    printf("La suma de los digitos de %d es %d \n", dato, suma2);

    /*2. Inverso de un número
    • Descripción: Dado un número, obtener su inverso.
    • Ejemplo: 12567 -> 76521*/

    int number = 12567;
    char str2[20];  // Asegúrate de tener suficiente espacio para almacenar el número como cadena

    // Convertimos el número a una cadena de caracteres (texto)
    sprintf(str2, "%d", number);

    // Encontramos la longitud de la cadena (sin usar while)
    int longitud;
    for (longitud = 0; str2[longitud] != '\0'; ++longitud);  // Contamos los caracteres hasta llegar al terminador nulo '\0'

    // Imprimimos los caracteres en orden inverso usando solo el do-while
    printf("El número %d al reves es: ", number);

    // Imprimir los caracteres en orden inverso usando do-while
    int i2 = longitud - 1;
    do {
        printf("%c", str2[i2]);
        i2--;
    } while (i2 >= 0);

    printf("\n");  // Nueva línea al final

    /*3. Potencia mediante sumas sucesivas
    • Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
    • Ejemplo: 2^3 = 2 * 2 * 2 = 8*/

    int base = 2;
    int exponente = 3;
    int resultado = 1;  // Inicializamos el resultado en 1
    int i3 = 0;

    // Calculamos la potencia usando un bucle do-while
    do {
        resultado *= base;  // Multiplicamos base por sí misma exponente veces
        i3++;
    } while (i3 < exponente);

    // Imprimimos el resultado
    printf("%d elevado a %d es: %d\n", base, exponente, resultado);

    /*4. Radicación mediante restas sucesivas
    • Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
    • Ejemplo: 27^(1/3) = 3*/

    float numeero, resultaado = 0;

    // Solicitar al usuario que ingrese el número
    printf("Ingrese un número para calcular su raíz cúbica: ");
    scanf("%f", &numeero);

    // Calcular la raíz cúbica utilizando restas sucesivas
    float i4 = 0;
    do {
        resultaado = i4;
        i4 += 0.001;
    } while (i4 * i4 * i4 <= numeero);

    // Mostrar el resultado
    printf("La raíz cúbica de %.2f es aproximadamente: %.2f\n", numeero, resultaado);

    /*5. Serie de Fibonacci
    • Descripción: Presentar los n elementos de la serie de Fibonacci.
    • Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …*/

    int n;
    printf("Ingrese el numero de la cantidad de la serie Fibonacci que desea imprimir: ");
    scanf("%d", &n);

    int primero = 0, segundo = 1, siguiente;
    int i5 = 2;

    // Imprimo la serie Fibonacci hasta el n-ésimo término
    printf("Serie de Fibonacci de %d elementos:\n", n);
    printf("%d, %d", primero, segundo);

    // Calculo y muestro la serie Fibonacci usando do-while
    if (n >= 2) {
        do {
            siguiente = primero + segundo;
            printf(", %d", siguiente);
            primero = segundo;
            segundo = siguiente;
            i5++;
        } while (i5 < n);
    }

    printf("\n");

    /*6. Factorial de un número
    • Descripción: Calcular el factorial de un número.
    • Ejemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120*/

    int m;
    unsigned long long factorial = 1; // Usamos unsigned long long para manejar números grandes

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero no negativo: ");
    scanf("%d", &m);

    // Validar la entrada para asegurarnos de que no es un número negativo
    if (m < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    // Calcular el factorial usando un bucle do-while
    int i6 = 1;
    do {
        factorial *= i6;
        i6++;
    } while (i6 <= m);

    // Imprimir el resultado
    printf("El factorial de %d es: %llu\n", m, factorial);

    /*7. Suma de una serie aritmética
    • Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
    • Ejemplo: 1 + 2 + 3 + … + n*/

    int numeroo, sumaa = 0;

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero positivo: ");
    scanf("%d", &numeroo);

    // Validar que el número ingresado es positivo
    if (numeroo <= 0) {
        printf("Por favor, introduce un numero entero positivo.\n");
        return 1;
    }

    // Calcular la suma de todos los números desde 1 hasta el número ingresado
    int i7 = 1;
    do {
        sumaa += i7;
        i7++;
    } while (i7 <= numeroo);

    // Imprimir el resultado
    printf("La suma de todos los numeros desde 1 hasta %d es: %d\n", numeroo, sumaa);

    /*8. Producto de una serie geométrica
    • Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
    • Ejemplo: 2, 4, 8, 16, …*/

    int numerooo;
    int producto = 2;
    int i8 = 0;

    // Pedir al usuario que ingrese la cantidad de términos
    printf("Introduce la cantidad de terminos de la serie geométrica: ");
    scanf("%d", &numerooo);

    // Generar y mostrar la serie geométrica en la misma línea
    do {
        printf("%d", producto);
        if (i8 < numerooo - 1) {
            printf(", "); // Añadir una coma y un espacio entre los números
        }
        producto *= 2;
        i8++;
    } while (i8 < numerooo);

    printf("\n"); // Nueva línea al final

    /*9. Número de dígitos de un número
    • Descripción: Contar el número de dígitos de un número.
    • Ejemplo: 12567 tiene 5 dígitos*/

    int num1;
    int digitos = 0;

    // Pedir al usuario que ingrese un número
    printf("Introduce un numero entero: ");
    scanf("%d", &num1);

    // Validar si el número es 0
    if (num1 == 0) {
        digitos = 1;
    } else {
        // Convertir el número a positivo si es negativo
        if (num1 < 0) {
            num1 = -num1;
        }

        // Contar el número de dígitos usando un bucle do-while
        int temp = num1;
        do {
            temp /= 10;
            digitos++;
        } while (temp > 0);
    }

    // Imprimir el resultado
    printf("El numero de dígitos es: %d\n", digitos);

    /*10. Verificar si un número es primo
    • Descripción: Determinar si un número es primo.
    • Ejemplo: 7 es primo, 10 no es primo*/

    int numIngresado = 1000;
    int esprimo = 1;  // Suponemos que el número es primo inicialmente

    int i9 = 2;
    do {
        if (numIngresado % i9 == 0) {
            esprimo = 0;  // El número no es primo
        }
        i9++;
    } while (i9 < numIngresado);

    if (esprimo == 1) {
        printf("El numero %d es primo\n", numIngresado);
    } else {
        printf("El numero %d no es primo\n", numIngresado);
    }

    /*11. Encontrar el MCD (Máximo Común Divisor)
    • Descripción: Calcular el MCD de dos números.
    • Ejemplo: MCD de 54 y 24 es 6*/

    int num11 = 54, num2 = 24;
    int menor = (num11 < num2) ? num11 : num2; // Encontrar el menor de los dos números
    int mcd = 1; // Inicializar el MCD en 1

    int i10 = 1;
    do {
        if (num11 % i10 == 0 && num2 % i10 == 0) {
            mcd = i10;
        }
        i10++;
    } while (i10 <= menor);

    printf("El MCD de %d y %d es %d\n", num11, num2, mcd);

    /*12. Sumar los números impares hasta n
    • Descripción: Calcular la suma de todos los números impares desde 1 hasta n.
    • Ejemplo: Si n = 10, suma = 1 + 3 + 5 + 7 + 9 = 25*/

    int nu;
    int suma_impares = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &nu);

    // Encontrar el número impar más cercano al número ingresado
    int ultimo_impar = (nu % 2 == 0) ? nu - 1 : nu;

    // Calcular la suma de todos los números impares desde 1 hasta el último número impar
    int i11 = 1;
    do {
        suma_impares += i11;
        i11 += 2;
    } while (i11 <= ultimo_impar);

    // Mostrar el resultado
    printf("La suma de todos los numeros impares hasta %d es: %d\n", ultimo_impar, suma_impares);

    /*13. Sumar los números pares hasta n
    • Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
    • Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30*/

    int no;
    int suma_pares = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &no);

    // Encontrar el número par más cercano al número ingresado
    int ultimo_par = (no % 2 == 0) ? no : no - 1;

    // Sumar todos los números pares desde 2 hasta el último número par
    int i12 = 2;
    do {
        suma_pares += i12;
        i12 += 2;
    } while (i12 <= ultimo_par);

    // Mostrar el resultado
    printf("La suma de todos los números pares hasta %d es: %d\n", ultimo_par, suma_pares);

    /*14. Suma de los cuadrados de los primeros n números
    • Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
    • Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14*/

    int y;
    int suma_cuadrados = 0;
    int i13 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &y);

    // Calcular la suma de los cuadrados de los primeros y números
    do {
        suma_cuadrados += i13 * i13;
        i13++;
    } while (i13 <= y);

    // Mostrar el resultado
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", y, suma_cuadrados);

    /*15. Suma de los cubos de los primeros n números
    • Descripción: Calcular la suma de los cubos de los primeros n números naturales.
    • Ejemplo: Si n = 3, suma = 1^3 + 2^3 + 3^3 = 36*/

    int suma_cubos = 0;
    int i14 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &y);

    // Calcular la suma de los cubos de los primeros y números
    do {
        suma_cubos += i14 * i14 * i14;
        i14++;
    } while (i14 <= y);

    // Mostrar el resultado
    printf("La suma de los cubos de los primeros %d números es: %d\n", y, suma_cubos);

    /*16. Suma de una serie de números fraccionarios
    • Descripción: Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
    • Ejemplo: Si n = 3, suma = 1 + 1/2 + 1/3*/

    int t;
    double suma = 0.0;
    int i15 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &t);

    // Calcular la suma de la serie
    do {
        suma += 1.0 / i15;
        i15++;
    } while (i15 <= t);

    // Mostrar el resultado
    printf("La suma de la serie hasta 1/%d es: %.6f\n", t, suma);

    /*17. Producto de una serie de números fraccionarios
    • Descripción: Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
    • Ejemplo: Si n = 3, producto = 1 * 1/2 * 1/3*/

    int s;
    double productoo = 1.0;
    int i16 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número: ");
    scanf("%d", &s);

    // Calcular el producto de la serie 
    do {
        productoo *= 1.0 / i16;
        i16++;
    } while (i16 <= s);

    // Mostrar el resultado
    printf("El producto de la serie hasta 1/%d es: %.6f\n", s, productoo);

    /*18. Contar los números primos hasta n
    • Descripción: Contar cuántos números primos hay desde 1 hasta n.
    • Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)*/

    int h;
    int contador_primos = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &h);

    // Calcular cuántos números primos hay desde 1 hasta h
    int i17 = 2;
    do {
        int es_primo = 1; // Asumimos que i es primo

        // Revisar si i es primo
        int j = 2;
        do {
            if (i17 % j == 0 && i17 != j) {
                es_primo = 0; // i no es primo
                break;
            }
            j++;
        } while (j * j <= i17);

        if (es_primo) {
            contador_primos++;
        }

        i17++;
    } while (i17 <= h);

    // Mostrar el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador_primos, h);

    /*19. Calcular el n-ésimo número triangular
    • Descripción: Calcular el n-ésimo número triangular.
    • Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10*/

    int p;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &p);

    int numero_triangular = 0;
    int i18 = 1;

    // Calcular el número triangular usando un bucle while
    while (i18 <= p) {
        numero_triangular += i18;
        i18++;
    }

    // Mostrar el resultado
    printf("El %d-ésimo numero triangular es: %d\n", p, numero_triangular);

    /*20. Calcular la suma de los factoriales de los primeros n números
    • Descripción: Calcular la suma de los factoriales de los primeros n números.
    • Ejemplo: Si n = 3, suma = 1! + 2! + 3! = 1 + 2 + 6 = 9*/

    int nmi;
    int suma_factoriales = 0;
    int fact = 1; // Cambiamos el nombre de la variable factorial

    // Solicitar al usuario que ingrese cuántos números desea calcular
    printf("Ingrese cuántos números desea calcular: ");
    scanf("%d", &nmi);

    int i19 = 1;
    do {
        fact = 1; // Reiniciamos fact a 1 para calcular el factorial de i
        int j = 1;
        do {
            fact *= j;
            j++;
        } while (j <= i);
        
        suma_factoriales += fact; // Sumamos el factorial calculado a suma_factoriales
        i19++;
    } while (i19 <= nmi);

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", nmi, suma_factoriales);



    return 0;
}