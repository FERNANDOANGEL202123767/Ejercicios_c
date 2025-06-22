# 📚 Colección de Programas en C++ para Aprendizaje

Este repositorio contiene una colección de programas en C++ diseñados para explorar conceptos fundamentales de programación, desde estructuras de datos y aritmética básica hasta manipulación de cadenas, punteros, funciones y procesamiento de audio. Los programas son educativos, ideales para estudiantes de programación en C++ que buscan practicar y comprender diversos temas.

## 📋 Tabla de Contenidos

- [Introducción](#-introducción)
- [Requisitos](#-requisitos)
- [Instalación](#-instalación)
- [Uso](#-uso)
- [Descripción de los Programas](#-descripción-de-los-programas)
- [Autor](#-autor)

## 📖 Introducción

Este proyecto recopila programas en C++ creados para reforzar conceptos de programación, incluyendo estructuras, arreglos, punteros, funciones, manipulación de cadenas, bucles, lógica condicional, y procesamiento de audio. 

Los programas son compatibles con windows y requieren un compilador C++ (como g++) y, en algunos casos, bibliotecas externas como libmpg123, libsndfile, portaudio, y lame.

## 🛠 Requisitos

**Sistema operativo:** Arch Linux (o distribuciones Linux compatibles).

**Software:**
- Compilador C++ (g++, incluido en gcc).
- GNU Octave (opcional, para programas de audio que interactúan con WAV).

**Bibliotecas externas (para programas específicos):**
- `libmpg123` y `libsndfile` (para `mp3_to_wav_converter.cpp`).
- `portaudio` (para `wav_generator.cpp`, `square_wave_generator.cpp`).
- `lame` (para `wav_to_mp3_converter.cpp`).
- `libcurl` (para `http_latency_measurer.cpp`).
- `perf` (para `http_latency_measurer.cpp`, `perf_latency_measurer.cpp`).

**Hardware:** Sistema con capacidad para compilar y ejecutar programas C++.

**Archivos:** Archivos `.cpp` incluidos en este repositorio.

## 🔧 Instalación

Sigue estos pasos para configurar el entorno en Arch Linux:

1. **Actualiza el sistema:**
   ```bash
   sudo pacman -Syu
   ```

2. **Instala el compilador C++:**
   ```bash
   sudo pacman -S gcc
   ```

3. **Instala bibliotecas necesarias (para programas específicos):**
   ```bash
   sudo pacman -S mpg123 libsndfile portaudio lame curl linux-tools-common linux-tools
   ```

4. **Verifica la instalación de g++:**
   ```bash
   g++ --version
   ```

## 🚀 Uso

1. **Clona el repositorio:**
   ```bash
   git clone https://github.com/FERNANDOANGEL202123767/cpp-learning.git
   cd cpp-learning
   ```

2. **Compila y ejecuta un programa:**
   ```bash
   g++ nombre_programa.cpp -o nombre_programa
   ./nombre_programa
   ```

   **Ejemplo:**
   ```bash
   g++ cd_manager.cpp -o cd_manager
   ./cd_manager
   ```

3. **Compila programas con bibliotecas externas:**

   - **Para `mp3_to_wav_converter.cpp`:**
     ```bash
     g++ mp3_to_wav_converter.cpp -o mp3_to_wav_converter -lmpg123 -lsndfile
     ```

   - **Para `wav_generator.cpp` o `square_wave_generator.cpp`:**
     ```bash
     g++ wav_generator.cpp -o wav_generator -lportaudio
     ```

   - **Para `wav_to_mp3_converter.cpp`:**
     ```bash
     g++ wav_to_mp3_converter.cpp -o wav_to_mp3_converter -lmp3lame
     ```

   - **Para `http_latency_measurer.cpp`:**
     ```bash
     g++ http_latency_measurer.cpp -o http_latency_measurer -lcurl
     ```

4. **Ejecuta el programa:**
   - Los programas de consola solicitan entrada por teclado y muestran resultados en pantalla.
   - Los programas de audio generan archivos WAV/MP3 o reproducen sonido.
   - Los programas de latencia requieren permisos de root para perf.

## 📑 Descripción de los Programas

A continuación, una tabla con la descripción de cada programa, su categoría, propósito y notas específicas:

| Programa | Categoría | Descripción | Notas |
|----------|-----------|-------------|-------|
| `cd_manager.cpp` | Structs | Ingresa y muestra datos de un CD (título, artista, canciones, año, precio). | Contiene error: repite prompt para título. |
| `employee_info.cpp` | Structs | Ingresa y muestra datos de un empleado (nombre, sexo, sueldo). | Usa `system("pause")`, no portable. |
| `athlete_info.cpp` | Structs | Ingresa y muestra datos de un atleta (deporte, nombre, país, medallas). | Usa `system("pause")`. |
| `employee_salary_tracker.cpp` | Structs | Gestiona 5 empleados, encuentra el de menor sueldo. | Usa `system("pause")`. |
| `athlete_medal_tracker.cpp` | Structs | Gestiona 10 atletas, encuentra el de más medallas. | Usa entrada sin espacios. |
| `char_array_inverter.cpp` | Arrays/Pointers | Invierte un arreglo de caracteres dinámico. | Libera memoria correctamente. |
| `int_array_printer.cpp` | Arrays/Pointers | Almacena y muestra arreglo de enteros con punteros. | Libera memoria correctamente. |
| `int_array_no_pointers.cpp` | Arrays | Almacena y muestra arreglo de enteros sin punteros. | Usa arreglo de tamaño variable (C++11+). |
| `array_address_printer.cpp` | Arrays/Pointers | Muestra direcciones de arreglos int y float. | Usa C-style printf. |
| `dynamic_int_array.cpp` | Arrays/Pointers | Crea arreglo dinámico de enteros. | Contiene error: salida incorrecta en bucle. |
| `dynamic_int_array_pointers.cpp` | Arrays/Pointers | Crea arreglo dinámico con punteros. | Libera memoria correctamente. |
| `static_array_printer.cpp` | Arrays | Imprime arreglo estático de 10s. | Usa índices 1-10, ignora 0. |
| `array_fill_tens.cpp` | Arrays | Llena e imprime arreglo con 10s. | Usa bucles while. |
| `array_multiples_two.cpp` | Arrays | Llena e imprime múltiplos de 2. | Usa bucles while. |
| `double_division.cpp` | Arithmetic | Divide dos números doubles. | Ejemplo simple. |
| `triple_multiplication.cpp` | Arithmetic | Multiplica tres enteros. | Ejemplo simple. |
| `fraction_operations.cpp` | Arithmetic | Realiza suma, resta y división de fracciones. | Usa MCD para simplificar. |
| `circle_area_diameter.cpp` | Arithmetic | Calcula área de círculo con diámetro. | Usa constante PI. |
| `circle_area_radius.cpp` | Arithmetic | Calcula área de círculo con radio. | Usa constante PI. |
| `complex_fraction.cpp` | Arithmetic | Calcula fracción compleja. | Ejemplo matemático. |
| `nested_fraction.cpp` | Arithmetic | Calcula fracción anidada. | Similar a nested_fraction_alt. |
| `nested_fraction_alt.cpp` | Arithmetic | Alternativa de fracción anidada. | Duplica nested_fraction. |
| `simple_sums.cpp` | Arithmetic | Muestra sumas básicas. | Formato de salida confuso. |
| `sum_three_four.cpp` | Arithmetic | Suma 3 y 4. | Ejemplo simple. |
| `modulo_operation.cpp` | Arithmetic | Calcula resto de división. | Ejemplo simple. |
| `pi_value.cpp` | Arithmetic | Imprime valor de PI. | Usa macro #define. |
| `age_to_seconds.cpp` | Arithmetic | Convierte edad a segundos. | Ejemplo simple. |
| `square_root_approx.cpp` | Arithmetic | Aproxima raíz cuadrada con punteros. | Usa método de Newton. |
| `print_hello_loop.cpp` | Loops | Imprime "hola" tres veces. | Usa bucle while. |
| `number_sequence.cpp` | Loops | Imprime números 1 a 1000. | Usa bucle while. |
| `squares_cubes.cpp` | Loops | Imprime cuadrados y cubos de 1 a 500. | Usa bucle while. |
| `multiples_three.cpp` | Loops | Imprime múltiplos de 3 hasta 1000. | Usa bucle while. |
| `divisible_two_seven.cpp` | Loops | Imprime números divisibles por 2 y 7. | Usa bucle while. |
| `not_divisible_seven.cpp` | Loops | Imprime números no divisibles por 7. | Usa bucle while. |
| `do_while_example.cpp` | Loops | Ejemplo de bucle do-while. | Imprime 0 a 2. |
| `alternating_multiples.cpp` | Loops | Imprime múltiplos alternados de 2 y 3. | Usa bucle for. |
| `sum_to_n.cpp` | Loops | Suma números hasta N. | Usa bucle for. |
| `sequence_generator.cpp` | Loops | Genera secuencia basada en entrada. | Usa bucles anidados. |
| `star_equal_pattern.cpp` | Loops | Imprime patrón de asteriscos e iguales. | Usa bucles anidados. |
| `multiplication_tables.cpp` | Loops | Imprime tablas de multiplicar. | Contiene error: usa i+j en lugar de i*j. |
| `string_length.cpp` | Strings | Imprime longitud de cadena. | Contiene error: salida incompleta. |
| `string_square_pattern.cpp` | Strings | Imprime patrón cuadrado basado en longitud. | Usa C-style scanf. |
| `string_copy.cpp` | Strings | Copia una cadena. | Usa strcpy. |
| `string_swap.cpp` | Strings | Intercambia dos cadenas. | Usa strcpy. |
| `string_concatenate.cpp` | Strings | Concatena cadenas. | Usa strcat. |
| `string_repeat_concat.cpp` | Strings | Repite concatenación de cadenas. | Usa strcat en bucle. |
| `string_compare_fixed.cpp` | Strings | Compara cadenas fijas. | Usa strcmp. |
| `string_compare_input.cpp` | Strings | Compara cadenas ingresadas. | Usa strcmp. |
| `palindrome_checker.cpp` | Strings | Verifica si una palabra es palíndroma. | Usa std::string. |
| `char_frequency.cpp` | Strings | Cuenta ocurrencias de caracteres. | Usa std::map. |
| `max_two_numbers.cpp` | Functions | Encuentra máximo de dos números. | Ejemplo simple. |
| `char_reverse_stack.cpp` | Functions | Invierte caracteres usando pila. | Usa std::stack. |
| `triangle_area.cpp` | Functions | Calcula área de triángulo. | Usa fórmula de Herón. |
| `offset_average.cpp` | Functions | Calcula promedio con offset. | Ejemplo simple. |
| `recursive_factorial.cpp` | Functions | Calcula factorial recursivamente. | Muestra pasos. |
| `pointer_misuse.cpp` | Pointers | Demuestra uso incorrecto de punteros. | Genera error en runtime. |
| `pointer_swap.cpp` | Pointers | Intercambia enteros con punteros. | Ejemplo simple. |
| `variable_sizes.cpp` | Pointers | Muestra tamaños de variables. | Usa sizeof. |
| `random_string.cpp` | Pointers | Genera cadena aleatoria. | Usa malloc y C-style. |
| `dynamic_string_array.cpp` | Pointers | Arreglo dinámico de cadenas. | Contiene error: manejo incorrecto de tipos. |
| `dynamic_string_array_alt.cpp` | Pointers | Alternativa de arreglo dinámico. | Duplica dynamic_string_array. |
| `multiplication_table_pointers.cpp` | Pointers | Tabla de multiplicar con punteros. | Ejemplo práctico. |
| `multiplication_matrix.cpp` | Pointers | Matriz 10x10 de multiplicaciones. | Usa arreglo bidimensional. |
| `grade_checker.cpp` | Conditional | Verifica si calificación aprueba. | Solo maneja ≥8. |
| `mortgage_eligibility.cpp` | Conditional | Evalúa elegibilidad para hipoteca. | Contiene typo: años. |
| `increment_decrement.cpp` | Miscellaneous | Demuestra operadores ++/--. | Ejemplo simple. |
| `increment_test.cpp` | Miscellaneous | Prueba operadores de incremento. | Ejemplo confuso. |
| `variable_manipulation.cpp` | Miscellaneous | Manipula variable básica. | Ejemplo simple. |
| `endianness_checker.cpp` | Miscellaneous | Verifica endianness del sistema. | Usa C-style. |
| `wav_generator.cpp` | Audio | Genera y reproduce archivo WAV. | Requiere portaudio. |
| `square_wave_generator.cpp` | Audio | Genera WAV con onda cuadrada. | Requiere portaudio. |
| `wav_to_mp3_converter.cpp` | Audio | Convierte WAV a MP3. | Requiere lame. |
| `mp3_to_wav_converter.cpp` | Audio | Convierte MP3 a WAV. | Requiere mpg123, libsndfile. |
| `http_latency_measurer.cpp` | Performance | Mide latencia HTTP y perf. | Requiere curl, perf. |

## 👤 Autor

**Nombre:** Fernando Ángel García Hernández  
**Colaboradores:** [No especificados]  
**Fecha:** 2025  
**Contacto:** FERNANDOANGEL202123767@github.com  

---

⭐ **¡Si te gusta este proyecto, deja una estrella en el repositorio!** ⭐
