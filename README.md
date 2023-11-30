# Algoriths and Data Structures WIKI

Este proyecto consta de un programa C++ que implementa diferentes algoritmos de clasificación y estructuras de datos. Actualmente el programa muestra diferentes algoritmos de clasificación y estructuras de datos en la consola, puedes observar el comportamiento de cada uno. El objetivo principal es mejorar el conocimiento en estructuras de datos y algoritmos a medida que se ve el comportamiento de cada uno.

## Descripción del avance 1
En esta etapa inicial del proyecto, se han implementado tres algoritmos de clasificación: burbuja, selección e inserción. Cada uno de estos algoritmos se encuentra en la clase `Sorter` y se puede utilizar para ordenar un vector entero.

## Descripción del avance 2
Actualmente, el proyecto está equipado con una variedad de menús que brindan acceso a una amplia gama de algoritmos de ordenamiento y la estructura de datos de una pila. El proyecto opera con una multitud de clases, cada una diseñada para satisfacer las necesidades específicas del usuario. Este diseño flexible permite a los usuarios acceder e interactuar con diferentes componentes sin problemas.

### Cambios sobre el primer avance
1. Introducción de una Interfaz de Usuario Interactiva:
  - Descripción del Cambio: Se implementó una interfaz de usuario interactiva utilizando la consola del sistema. Los usuarios ahora pueden elegir entre diferentes opciones, como algoritmos de búsqueda, algoritmos de ordenamiento y estructuras de datos lineales y no lineales.
  - Razón del Cambio: La interfaz de usuario proporciona una experiencia interactiva y fácil de usar para los usuarios. Permite una comprensión más profunda y práctica de los algoritmos y estructuras de datos, ya que los usuarios pueden ver los resultados en tiempo real.

2. Implementación de Menús Modulares:
  - Descripción del Cambio: Se creó una clase Menu que maneja las opciones del usuario y las interacciones con el programa. Cada categoría (algoritmos de búsqueda, algoritmos de ordenamiento y estructuras de datos) tiene su propio método dentro de la clase Menu para gestionar las opciones relacionadas.
  - Razón del Cambio: La modularidad facilita la expansión del programa en el futuro. Si se desean agregar más algoritmos de búsqueda, ordenamiento o estructuras de datos, simplemente se deben añadir nuevos métodos en la clase Menu sin afectar el flujo principal del programa.

3. Implementación de Algoritmos de Ordenamiento Adicionales:
  - Descripción del Cambio: Se agregaron algoritmos de ordenamiento adicionales como Merge Sort y Shell Sort.
  - Razón del Cambio: La inclusión de una variedad de algoritmos de ordenamiento permite a los usuarios comparar y contrastar los diferentes enfoques. Esto también proporciona una experiencia educativa más rica al demostrar varios métodos de clasificación.

4. Visualización Gráfica de los Algoritmos de Ordenamiento:

  - Descripción del Cambio: Los algoritmos de ordenamiento ahora muestran una representación gráfica en forma de barras ASCII para ilustrar el proceso de ordenamiento paso a paso.
  - Razón del Cambio: La visualización gráfica mejora la comprensión de los algoritmos de ordenamiento. Los usuarios pueden ver cómo cambian las posiciones de los elementos durante el proceso de ordenamiento, lo que ayuda a visualizar el rendimiento de cada algoritmo.

5. Implementación de la Estructura de Datos Lineal (Pilas):
  - Descripción del Cambio: Se introdujo la estructura de datos de pila (Stack) con operaciones como agregar elementos, visualizar la pila y eliminar elementos.
  - Razón del Cambio: La pila es una estructura de datos fundamental. Al implementar una pila y mostrar sus operaciones, se proporciona una comprensión práctica de cómo funcionan las estructuras de datos lineales.

## Descripción del avance 3
En este avance se implmentaron 2 estructuras de datos lineales adicionales, queue(colas) y linked list(listas ligadas), con sus respectivas funciones y menus necesarios. De igual manera se agrego la primera estructura de datos no lineal, un arbol de busqueda binaria, el cual tiene sus funcionalidades basicas funcionando, sin embargo faltan muchas features por añadir para que tenga valor en el proyecto.

### Cambios sobre el segundo avance
1. Adición de Estructuras Lineales (Queue y Lista Ligada):

- Queue:

Se implementó la estructura de datos cola (Queue) que permite agregar elementos al final y quitar elementos del principio (FIFO - First In First Out).
Se agregaron funciones como enqueue para agregar elementos y dequeue para quitar elementos de la cola.
La implementación se encuentra en el archivo correspondiente, llamado Queue.h.

- Lista Ligada (Linked List):

Se implementó la estructura de datos lista ligada (L_List), que consta de nodos enlazados en secuencia, donde cada nodo contiene un dato y un enlace al siguiente nodo.
Se agregaron funciones como insert para insertar elementos, remove para quitar elementos y display para mostrar la lista.
La implementación se encuentra en el archivo correspondiente, llamado L_List.h.

2. Introducción de la Estructura de Datos No Lineal (BST):
Se añadió la primera estructura de datos no lineal al proyecto, la cual es el Árbol de Búsqueda Binaria (BST). Esta estructura es esencial para entender cómo se organizan y gestionan los datos de manera jerárquica. Se implementaron las operaciones básicas de un BST, incluyendo la adición de nodos, búsqueda, eliminación y la función para imprimir el árbol de manera visual utilizando arte ASCII. La incorporación del BST enriquece la diversidad de estructuras de datos presentes en el proyecto, permitiendo a los usuarios explorar y comprender la lógica de una estructura de árbol.

3. Optimización de Archivos y Estructuración del Proyecto:
Para mejorar la organización y mantenimiento del código, se realizaron optimizaciones en la estructura de archivos del proyecto. Se creó una carpeta específica para albergar las clases relacionadas con las estructuras de datos, lo cual facilita la ubicación y gestión de cada componente del sistema. Esta reestructuración contribuye a un código más modular y comprensible, lo que facilita su expansión y mantenimiento en futuras actualizaciones del proyecto.

## Entrega final
Este avance muestra una implementacion de lectura de datos sobre la seccion de Data Structures con las funciones implementadas podemos lograr que el usuario al ingresar a cualquier tipo de estructura de datos ya tenga un ejemplo default, con este ejemplo puede modificar y ver de manera mas clara las funcionalidades de cada estructura. Aunque el proyecto sigue en proceso para agregar mas features adelante y corregir algunos como BST, el cual sigue en desarrollo.

### Cambios sobre el tercer avance avance
1. Implementación de funciones de lectura y modificación de datos desde/hacia archivos:
Se agregaron funciones clave como readDataFromFile, modifyFile, y loadIntoVector para facilitar la lectura inicial de datos desde archivos, la modificación de datos existentes, y la carga de datos en una estructura de vector. Estas funciones permiten al usuario tener ejemplos predeterminados y modificarlos según sea necesario, mejorando la experiencia y comprensión del funcionamiento de las estructuras de datos.

2. Funcionalidades adicionales para mejorar la experiencia del usuario:
Se implementaron características que brindan al usuario ejemplos predefinidos en las estructuras de datos, facilitando la comprensión y manipulación de las mismas. Esto proporciona un punto de partida claro para que los usuarios exploren las funcionalidades de cada estructura.

3. Otras optimizaciones y correcciones menores:
Se realizaron ajustes y correcciones menores para mejorar la coherencia y eficiencia del código. Estos cambios contribuyen a un código más limpio y comprensible.

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal(linux):

`g++ main.cpp` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal(linux):

`./a.out` 

## Descripción de las entradas del avance de proyecto
1. Menú Principal:
Formato: Número entero (por ejemplo, 1, 2, 3).
Ejemplo: Usuario elige 2 para algoritmos de ordenamiento.

2. Selección de Algoritmo de Ordenamiento:
Formato: Número entero (por ejemplo, 1, 2, 3).
Ejemplo: Usuario elige 3 para Merge Sort.

3. Seleccion de Estructura de Datos:
Formato: Número entero (por ejemplo, 1, 2, 3).
Ejemplo: Usuario elige 3 para Linked List.

4. Operaciones con Pilas:
Formato (Agregar Elemento): Número entero.
Ejemplo: Usuario agrega el número 42 a la pila.

5. Operaciones con Queue:
Formato (Agregar Elemento): Número entero.
Ejemplo: Usuario agrega el número 42 a la queue.

6. Operaciones con Linked list:
Formato (Agregar Elemento): Número entero.
Ejemplo: Usuario agrega el número 42 a la lista ligada.

7. Operaciones con BST:
Formato (Agregar Elemento): Número entero.
Ejemplo: Usuario agrega el número 42 al BST.

8. Entradas Inválidas:
Formato: Cualquier entrada no válida (por ejemplo, letras o números fuera de rango).
Ejemplo: Usuario ingresa "abc", se muestra un mensaje de error.

## Descripción de las salidas del avance de proyecto
1. Visualización de Algoritmos de Ordenamiento:
Muestra pasos intermedios de ordenamiento con barras ASCII.

2. Operaciones con Estructuras de Datos:
Presenta el estado actual de la estructura de datos después de operaciones.

3. Errores y Validaciones:
Informa sobre entradas inválidas o errores.

4. Regreso al Menú Principal:
Permite la navegación fluida al menú principal.

5. Estadísticas de Algoritmos:
Muestra comparaciones y swaps de ordenamiento.

6. Mensaje de Despedida:
Finaliza con un mensaje amigable al usuario.


## Desarrollo de competencias

### SICT0301: Evalúa los componentes

#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.

##### Bubble Sort:

Complejidad Temporal: En el peor caso, el Bubble Sort tiene una complejidad de tiempo de O(n^2), donde n es el número de elementos en la lista. Esto se debe a que realiza comparaciones y swaps en cada elemento del arreglo. 

Complejidad Espacial: El Bubble Sort tiene una complejidad espacial de O(1) porque opera in-place, es decir, no utiliza memoria adicional en función del tamaño del arreglo.

##### Selection Sort:

Complejidad Temporal: El Selection Sort también tiene una complejidad de tiempo de O(n^2) en el peor caso. Aunque realiza menos intercambios que el Bubble Sort, sigue teniendo el mismo orden de complejidad cuadrática debido a las comparaciones. 

Complejidad Espacial: Al igual que el Bubble Sort, el Selection Sort tiene una complejidad espacial de O(1) porque también opera in-place.

##### Insertion Sort:

Complejidad Temporal: En el peor caso, el Insertion Sort tiene una complejidad de tiempo de O(n^2). Sin embargo, en el mejor caso (cuando el arreglo ya está ordenado), tiene una complejidad de tiempo de O(n) ya que solo necesita comparar cada elemento con su predecesor y no realizará ningún intercambio. 

Complejidad Espacial: El Insertion Sort tiene una complejidad espacial de O(1) porque opera in-place.

##### Merge Sort:
Complejidad Temporal: El Merge Sort tiene una complejidad de tiempo de O(n log n) en todos los casos, incluyendo el peor caso. Divide repetidamente el arreglo en mitades hasta que cada subarreglo contenga un solo elemento, luego combina esos subarreglos en orden. Debido a esta estrategia de dividir y conquistar, el Merge Sort tiene una complejidad logarítmica en cada nivel de recursión y, por lo tanto, tiene una complejidad total de O(n log n).

Complejidad Espacial: La complejidad espacial del Merge Sort es O(n) en el peor caso. Aunque es más eficiente en términos de tiempo que los algoritmos cuadráticos, su complejidad espacial es mayor debido a la necesidad de almacenar los subarreglos durante el proceso de mezcla.

##### Shell Sort:
Complejidad Temporal: El Shell Sort tiene una complejidad de tiempo que varía según la secuencia de brecha utilizada. En el peor caso, su complejidad es O(n^2), pero en promedio, tiene un rendimiento mejor que otros algoritmos cuadráticos. Utiliza brechas para comparar y mover elementos distantes entre sí, lo que mejora el ordenamiento en comparación con los algoritmos cuadráticos básicos.

Complejidad Espacial: El Shell Sort tiene una complejidad espacial de O(1) porque opera in-place, es decir, no utiliza memoria adicional basada en el tamaño del arreglo.

#### Hace un análisis de complejidad correcto y completo todas las estructuras de datos y cada uno de sus usos en el programa

##### Stack (Pila):
La estructura de datos de la pila se implementa utilizando un nodo para representar cada elemento. Las operaciones de agregar (add) y eliminar (remove) elementos en la pila tienen una complejidad temporal constante de O(1), independientemente del tamaño total de la pila.

Complejidad Temporal:
- Add: O(1)
- Remove: O(1)

Complejidad Espacial:
La complejidad espacial de la pila es O(n), donde n es el número de elementos en la pila en un momento dado, debido a la memoria adicional utilizada por los nodos para almacenar los datos.

##### Queue (Cola):
La estructura de datos cola (Queue) se implementa utilizando nodos enlazados, donde cada nodo contiene un elemento y un enlace al siguiente nodo. Las operaciones básicas de la cola incluyen agregar elementos al final (enqueue) y quitar elementos del principio (dequeue).

Complejidad Temporal:

add (Agregar): O(1)
La adición de un elemento al final de la cola tiene una complejidad constante, ya que simplemente implica crear un nuevo nodo y ajustar los enlaces apropiados.
remove (Quitar): O(1)
La eliminación de un elemento del principio de la cola también tiene una complejidad constante, ya que implica actualizar los enlaces y eliminar el primer nodo.
Complejidad Espacial:

La complejidad espacial de la cola es O(n), donde n es el número de elementos en la cola en un momento dado. Esto se debe a la necesidad de almacenar nodos adicionales para cada elemento en la cola.

##### Linked List (Lista Ligada):
La lista ligada (L_List) es una estructura de datos en la que los elementos están organizados en nodos que contienen un dato y un enlace al siguiente nodo. Pueden ser de una sola dirección (simple) o de doble dirección (doble). Las operaciones básicas incluyen la inserción y eliminación de elementos.

Complejidad Temporal:

Inserción (Insert): O(1) o O(n)
La inserción al principio de una lista ligada simple tiene una complejidad constante, ya que solo se necesita ajustar el enlace del nuevo nodo. Sin embargo, la inserción en otras posiciones podría tener una complejidad lineal, ya que se debe buscar la posición correcta.
Eliminación (Remove): O(1) o O(n)
La eliminación de un nodo al principio de una lista ligada simple tiene una complejidad constante. Sin embargo, la eliminación en otras posiciones podría tener una complejidad lineal, ya que se debe buscar el nodo a eliminar.
Complejidad Espacial:

La complejidad espacial de la lista ligada es O(n), donde n es el número de elementos en la lista. Esto se debe a la necesidad de almacenar nodos adicionales para cada elemento.


##### Binary Search Tree (Árbol de Búsqueda Binaria - BST):
El Árbol de Búsqueda Binaria (BST) es una estructura de datos no lineal en la que cada nodo tiene, como máximo, dos nodos hijos: un nodo izquierdo y un nodo derecho. Los nodos en el subárbol izquierdo son menores que el nodo raíz, y los nodos en el subárbol derecho son mayores.

Complejidad Temporal:

Inserción (addNode): O(log n) en promedio, O(n) en el peor caso
La inserción en un BST tiene una complejidad logarítmica en promedio, ya que se reduce a la mitad el espacio de búsqueda en cada nivel del árbol. Sin embargo, en el peor caso (árbol degenerado), puede ser lineal.
Búsqueda (search): O(log n) en promedio, O(n) en el peor caso
La búsqueda en un BST tiene una complejidad logarítmica en promedio, ya que se reduce a la mitad el espacio de búsqueda en cada nivel del árbol. En el peor caso, puede ser lineal.
Eliminación (removeNode): O(log n) en promedio, O(n) en el peor caso
La eliminación en un BST tiene una complejidad logarítmica en promedio, ya que se reduce a la mitad el espacio de búsqueda en cada nivel del árbol. En el peor caso, puede ser lineal.
Complejidad Espacial:

La complejidad espacial de un BST es O(n) en el peor caso, donde n es el número de nodos en el árbol. Esto ocurre en un árbol degenerado. En promedio, la complejidad espacial es O(log n), donde n es el número de nodos.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
1. int main(): Funcion main tiene una complejidad temporal de O(n) ya que unicamente se cicla de acuerdo a lo que el usuario le indique.

2. void displayMenu(): Funcion para mostrar el menu principal, tiene una complejidad de O(1) ya que realiza una serie de operaciones que no dependen del tamaño de los datos de entrada.

3. void runOption(int choice): La complejidad de esta función está determinada principalmente por la ejecución del switch, el cual tiene una complejidad de O(1).

4. void sortingAlgorithms(): Funcion para elejir el algoritmo de ordenamiento, al ser menu y seguir siendo unicamente una seleccion tiene una complejidad de O(1).

5. void dataStructures(): Funcion para elejir la estructura de datos, de igual manera que los otros menus al ser una funcion constante de seleccion tiene una complejidad de O(1).

6. void mostrarVector(const vector<int> &arr): Esta función tiene una complejidad temporal O(n) ya que recorre todos los elementos del vector para mostrarlos.

7. void bubbleSort(vector<int> &arr, int n): La complejidad del algoritmo de ordenación de burbuja es O(n^2) en el peor caso. Esto se debe a los dos bucles anidados, que recorren todo el vector. Además, la función displayBars también tiene un bucle que recorre el vector.

8. void selectionSort(vector<int> &arr, int n): La complejidad del algoritmo de ordenación por selección es O(n^2) en el peor caso debido a los dos bucles anidados que recorren todo el vector. La función displayBars también tiene un bucle que recorre el vector.

9. void insertionSort(vector<int> &arr, int n): La complejidad del algoritmo de ordenación por inserción es O(n^2) en el peor caso debido al bucle anidado que recorre todo el vector. La función displayBars también tiene un bucle que recorre el vector.

10. void mergeSort(vector<int> &arr, int left, int right): La complejidad del algoritmo de ordenación por fusión es O(nlogn) en el peor caso. Aunque hay un bucle anidado, la mitad de los elementos se fusionan en cada paso, lo que reduce la complejidad a O(nlogn).

11. void shellSort(vector<int> &arr, int n): La complejidad del algoritmo de ordenación de Shell depende de la secuencia de brecha utilizada. En el peor caso, la complejidad puede ser O(n^2), pero en promedio, con la secuencia de brecha de Knuth, es O(n^3/2). La función displayBars también tiene un bucle que recorre el vector.

12. void stackMenu(): La complejidad temporal de esta función depende del número de operaciones realizadas en cada caso del interruptor. En el peor caso, si se elige agregar datos manualmente o aleatorios, se realiza un bucle mientras se agregan elementos a la pila. La complejidad temporal sería O(n), donde n es la cantidad de elementos agregados.

13. void addNode(int n): La función addNode tiene una complejidad temporal constante O(1) ya que agrega un nuevo nodo a la parte superior de la pila, independientemente del tamaño de la pila.

14. void remove(Node *&stack, int &n): La función remove tiene una complejidad temporal constante O(1) ya que elimina el nodo superior de la pila y devuelve su valor, independientemente del tamaño de la pila.

15. void menuQueue(): La complejidad temporal de esta función depende del número de operaciones realizadas en cada caso del interruptor. En el peor caso, si se elige agregar datos manualmente o aleatorios, se realiza un bucle mientras se insertan elementos en la cola. La complejidad temporal sería O(n), donde n es la cantidad de elementos insertados.

16. void insertQueue(int n): La función insertQueue tiene una complejidad temporal constante O(1) ya que inserta un nuevo nodo en la cola, independientemente del tamaño de la cola.

17. void deleteQueue(int &n): La función deleteQueue tiene una complejidad temporal constante O(1) ya que elimina el nodo frontal de la cola y devuelve su valor, independientemente del tamaño de la cola.

18. bool empty_queue(Node *front): La función empty_queue tiene una complejidad temporal constante O(1) ya que simplemente verifica si el frente de la cola es nulo.

19. int randomNum(): La función randomNum tiene una complejidad temporal constante O(1) ya que simplemente realiza operaciones matemáticas y devuelve el resultado, independientemente del tamaño de los datos de entrada.

20. void addNode(int n): La complejidad temporal de esta función es O(n) en el peor caso, ya que puede ser necesario recorrer toda la lista para encontrar la posición adecuada para insertar el nuevo nodo.

21. int searchElement(int n): La complejidad temporal de esta función es O(n) en el peor caso, ya que puede ser necesario recorrer toda la lista para encontrar el elemento deseado.

22. int searchPos(int pos): La complejidad temporal de esta función es O(n) en el peor caso, ya que puede ser necesario recorrer toda la lista hasta la posición especificada.

23. void removePos(int pos): La complejidad temporal de esta función es O(n) en el peor caso, ya que puede ser necesario recorrer toda la lista hasta la posición especificada antes de eliminar el nodo.

24. void removeElement(int n): La complejidad temporal de esta función es O(n) en el peor caso, ya que puede ser necesario recorrer toda la lista hasta encontrar y eliminar el nodo con el elemento deseado.

25. void removeList(int n): La complejidad temporal de esta función es O(1) ya que elimina el primer elemento de la lista y no depende del tamaño total de la lista.

26. void addNode(int value): La complejidad temporal de esta función es O(h), donde h es la altura del árbol. En el peor caso, cuando el árbol está desequilibrado y se comporta como una lista enlazada, la altura h es igual al número de nodos n, lo que resulta en una complejidad de O(n). Sin embargo, en un árbol balanceado, la altura es logarítmica en n, y la complejidad se aproxima a O(logn).

27. B_Node* addNodeRecursive(B_Node* root, int value): Esta función tiene la misma complejidad temporal que void addNode(int value).

28. void removeNode(int value): La complejidad temporal de esta función es O(h), donde h es la altura del árbol. Al igual que en la función void addNode(int value), en el peor caso, cuando el árbol está desequilibrado, la complejidad es O(n), pero en un árbol balanceado se aproxima a O(logn).

29. B_Node* removeNodeRecursive(B_Node* root, int value): Esta función tiene la misma complejidad temporal que void removeNode(int value).

30. int minValue(B_Node* root): La complejidad temporal de esta función es O(h), donde h es la altura del árbol. Al igual que en las funciones anteriores, en el peor caso es O(n) y en un árbol balanceado es O(logn).

31. int getMaxLevel(): La complejidad temporal de esta función es O(n), ya que realiza un recorrido en el peor de los casos por todos los nodos del árbol para determinar la altura máxima.

32. void getMaxLevelRecursive(B_Node* root, int currentLevel): Esta función tiene la misma complejidad temporal que int getMaxLevel().

33. void printTreeRecursive(B_Node* root, int level): La complejidad temporal de esta función es O(n), ya que visita cada nodo una vez para imprimirlo. En el peor caso, la complejidad es O(n).

34. void readDataFromFile(const string& filename, vector<int>& data): Esta función lee datos desde un archivo y los almacena en un vector. La complejidad temporal depende del tamaño del archivo y la cantidad de datos, siendo O(N) en el peor caso, donde N es la cantidad de datos en el archivo.

35. void modifyFile(vector<int>& data): Permite la modificación de datos en el archivo, reflejando cambios en la estructura de datos. La complejidad temporal depende de la operación de modificación realizada y, en el peor caso, puede ser O(N), donde N es la cantidad de datos a modificar.

36. void loadIntoVector(vector<int>& vec) const: Carga datos desde la estructura de datos a un vector. La complejidad temporal es O(N), donde N es la cantidad de elementos en la estructura de datos, ya que se necesita recorrer la estructura para cargar los datos en el vector.

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Implementamos varios algoritmos de ordenamiento en el programa, como Bubble Sort, Selection Sort, Insertion Sort, Merge Sort y Shell Sort. La selección de estos algoritmos se basa en la exposición de pasos visuales que ayudan a los usuarios a comprender cómo funcionan estos algoritmos. Cada algoritmo de ordenamiento se usa correctamente y se ejecuta de manera efectiva, proporcionando una visualización de cada paso, lo que permite a los usuarios observar cómo se reorganizan los elementos.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
He desarrollado el criterio al elegir y aplicar correctamente una estructura de datos. Se utilizaron las siguientes estructuras: stack (pila) y queue (cola) en Stack.h y Queue.h, respectivamente. La linked list (lista enlazada) se implementó en L_List.h, y el árbol de búsqueda binaria (BST) en BST.h. Cada estructura demuestra conceptos y operaciones específicas, ofreciendo un enfoque educativo sobre estructuras de datos.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
Se implementaron mecanismos para consultar información de las estructuras de datos, permitiendo una comprensión clara de las operaciones realizadas. En cada estructura, se incluyeron funciones para mostrar el estado actual, imprimir los elementos y visualizar la estructura de manera adecuada. Por ejemplo, en la clase Stack, la función stackMenu opcion 3 muestra el estado actual de la pila. Estos mecanismos proporcionan al usuario la capacidad de entender fácilmente las transformaciones y resultados de las operaciones.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
El proyecto incorpora funciones específicas para leer datos desde archivos de texto. Estas funciones son adaptables a diversas estructuras de datos, permitiendo la carga eficiente de información almacenada en archivos externos. Este enfoque facilita la inicialización de las estructuras con conjuntos de datos específicos, mejorando la flexibilidad y utilidad del proyecto.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Las funciones implementadas para la escritura de datos en archivos de texto ofrecen una manera efectiva de preservar el estado actual de las estructuras de datos. Los mecanismos permiten al usuario guardar la información contenida en las estructuras de manera ordenada y legible en archivos externos. Este enfoque facilita la conservación y recuperación de los datos en sesiones futuras, promoviendo la eficiencia y practicidad del proyecto.

### Nota:
BST sigue en proceso de desarrollo al igual que las Searching Algorithms y el uso de archivos en el programa.
