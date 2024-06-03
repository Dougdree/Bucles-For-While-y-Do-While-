#include <stdio.h>
int main(){
    /*1. Suma de los dígitos de un número
    • Descripción: Dado un número, calcular la suma de sus dígitos.
    • Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21 */
    // declaro varaibles
    int dato = 12567;
    int suma2 = 0;
    char str[10];
    sprintf(str, "%d", dato); // solicito al usuario ingresar el dato

    // ingresa 
    int i = 0;
    while (str[i] != '\0') {
        suma2 += str[i] - '0';
        i++;
    }

    printf("La suma de los dígitos de %d es %d \n", dato, suma2);

    /*2. Inverso de un número
    • Descripción: Dado un número, obtener su inverso.
    • Ejemplo: 12567 -> 76521*/

    //declaro variables
    int number = 12567;
    sprintf(str, "%d", number);

    // Encontramos la longitud de la cadena
    int longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }

    printf("El número %d al revés es: ", number);

    // Imprimimos los caracteres en orden inverso usando solo el while
    int i2 = longitud - 1;
    while (i2 >= 0) {
        printf("%c", str[i2]);
        i2--;
    }
    printf("\n");

    /*3. Potencia mediante sumas sucesivas
    • Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
    • Ejemplo: 2^3 = 2 * 2 * 2 = 8*/

    int base = 2;
    int exponente = 3;
    int resultado = 1;  // Inicializamos el resultado en 1

    // Calculamos la potencia usando un bucle while
    int i3 = 0;
    while (i3 < exponente) {
        resultado *= base;  // Multiplicamos base por sí misma exponente veces
        i3++;
    }

    // Imprimimos el resultado
    printf("2 elevado a 3 es: %d\n", resultado);

    /*4. Radicación mediante restas sucesivas
    • Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
    • Ejemplo: 27^(1/3) = 3*/

    float numeero, resultaado = 0;

    // Solicitar al usuario que ingrese el número
    printf("Ingrese un número para calcular su raíz cúbica: ");
    scanf("%f", &numeero);

    // Calcular la raíz cúbica utilizando restas sucesivas con while
    float i4 = 0;
    while (i4 * i4 * i4 <= numeero) {
        resultaado = i4;
        i4 += 0.001;
    }

    // Mostrar el resultado
    printf("La raíz cúbica de %.2f es aproximadamente: %.2f\n", numeero, resultaado);

    /*5. Serie de Fibonacci
    • Descripción: Presentar los n elementos de la serie de Fibonacci.
    • Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …*/

    int n;
    printf("Ingrese el numero de la cantidad de la serie Fibonacci que desea imprimir: "); // pido al usuario que ingrese el valor de n
    scanf("%d", &n);

    int primero = 0, segundo = 1, siguiente; // declaro variables

    // Imprimo el numero de elementos de la serie Fibonacci
    printf("Serie de Fibonacci de %d elementos:\n", n);
    printf("%d, %d", primero, segundo);

    int i5 = 2; // inicializo el contador
    while (i5 < n) {
        siguiente = primero + segundo;
        printf(", %d", siguiente);
        primero = segundo;
        segundo = siguiente;
        i5++;
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

    // Calcular el factorial usando un bucle while
    int i6 = 1;
    while (i6 <= m) {
        factorial *= i6;
        i6++;
    }

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

    // Calcular la suma de todos los números desde 1 hasta el número ingresado usando un bucle while
    int i7 = 1;
    while (i7 <= numeroo) {
        sumaa += i7;
        i7++;
    }

    // Imprimir el resultado
    printf("La suma de todos los numeros desde 1 hasta %d es: %d\n", numeroo, sumaa);

    /*8. Producto de una serie geométrica
    • Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
    • Ejemplo: 2, 4, 8, 16, …*/
    
    int numerooo;
    int producto = 2;

    // Pedir al usuario que ingrese la cantidad de términos
    printf("Introduce la cantidad de terminos de la serie geométrica: ");
    scanf("%d", &numeroo);

    // Validar que el número ingresado es positivo
    if (numerooo <= 0) {
        printf("Por favor, introduce un numero entero positivo.\n");
        return 1;
    }

    // Generar y mostrar la serie geométrica en la misma línea usando un bucle while
    int i8 = 0;
    while (i8 < numerooo) {
        printf("%d", producto);
        if (i8 < numerooo - 1) {
            printf(", "); // Añadir una coma y un espacio entre los números
        }
        producto *= 2;
        i8++;
    }

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

        // Contar el número de dígitos usando un bucle while
        int temp = num1;
        while (temp > 0) {
            digitos++;
            temp /= 10;
        }
    }

    // Imprimir el resultado
    printf("El numero de dígitos es: %d\n", digitos);

    /*10. Verificar si un número es primo
    • Descripción: Determinar si un número es primo.
    • Ejemplo: 7 es primo, 10 no es primo*/

    int numIngresado = 1000;
    int esprimo = 1;
    int i9 = 2;

    while (i < numIngresado) {
        if (numIngresado % i9 == 0) {
            esprimo = 0;
            break; // Salir del ciclo si se encuentra un divisor
        }
        i9++;
    }

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

    // Usar un bucle while para encontrar el mayor divisor común
    while (i10 <= menor) {
        if (num11 % i10 == 0 && num2 % i10 == 0) {
            mcd = i10;
        }
        i10++;
    }

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

    // Sumar todos los números impares desde 1 hasta el último número impar usando un bucle while
    int i11 = 1;
    while (i11 <= ultimo_impar) {
        suma_impares += i11;
        i11 += 2;
    }

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

    // Sumar todos los números pares desde 2 hasta el último número par usando un bucle while
    int i12 = 2;
    while (i12 <= ultimo_par) {
        suma_pares += i12;
        i12 += 2;
    }

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

    // Sumar los cuadrados de los primeros y números usando un bucle while
    while (i13 <= y) {
        suma_cuadrados += i13 * i13;
        i13++;
    }

    // Mostrar el resultado
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", y, suma_cuadrados);

    /*15. Suma de los cubos de los primeros n números
    • Descripción: Calcular la suma de los cubos de los primeros n números naturales.
    • Ejemplo: Si n = 3, suma = 1^3 + 2^3 + 3^3 = 36*/

    
    int suma_cubos = 0;
    int i14 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un número para calcular la suma de los cubos: ");
    scanf("%d", &y);

    // Sumar los cubos de los primeros y números usando un bucle while
    while (i14 <= y) {
        suma_cubos += i14 * i14 * i14;
        i14++;
    }

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

    // Calcular la suma de la serie usando un bucle while
    while (i15 <= t) {
        suma += 1.0 / i15;
        i15++;
    }

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

    // Calcular el producto de la serie usando un bucle while
    while (i16 <= s) {
        productoo *= 1.0 / i16;
        i16++;
    }

    // Mostrar el resultado
    printf("El producto de la serie hasta 1/%d es: %.6f\n", s, productoo);

    /*18. Contar los números primos hasta n
    • Descripción: Contar cuántos números primos hay desde 1 hasta n.
    • Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)*/

    int h;
    int contador_primos = 0;
    int i17 = 2;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &h);

    // Calcular cuántos números primos hay desde 1 hasta h usando un bucle while
    while (i17 <= h) {
        int es_primo = 1; // Asumimos que i es primo
        int j = 2;
        while (j * j <= i) {
            if (i17 % j == 0) {
                es_primo = 0; // i no es primo
                break;
            }
            j++;
        }
        if (es_primo) {
            contador_primos++;
        }
        i17++;
    }

    // Mostrar el resultado
    printf("Hay %d numeros primos desde 1 hasta %d\n", contador_primos, h);

    /*19. Calcular el n-ésimo número triangular
    • Descripción: Calcular el n-ésimo número triangular.
    • Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10*/

    int p;
    int numero_triangular = 0;
    int i18 = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &p);

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
    int i19 = 1;

    // Solicitar al usuario que ingrese cuántos números desea calcular
    printf("Ingrese cuántos números desea calcular: ");
    scanf("%d", &nmi);

    // Calcular la suma de los factoriales de los primeros nmi números usando un bucle while
    while (i19 <= nmi) {
        int fact = 1; // Reiniciamos fact a 1 para calcular el factorial de i
        int j = 1;
        while (j <= i19) {
            fact *= j;
            j++;
        }
        suma_factoriales += fact; // Sumamos el factorial calculado a suma_factoriales
        i19++;
    }

    // Mostrar el resultado
    printf("La suma de los factoriales de los primeros %d números es: %d\n", nmi, suma_factoriales);

    return 0;
}