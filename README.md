# Algoriths and Data Structures WIKI

Este proyecto consta de un programa C++ que implementa diferentes algoritmos de clasificación y estructuras de datos. Actualmente el programa muestra diferentes algoritmos de clasificación y estructuras de datos en la consola, puedes observar el comportamiento de cada uno. El objetivo principal es mejorar el conocimiento en estructuras de 
datos y algoritmos a medida que se ve el comportamiento de cada uno.

## Final Project CS50x
### Videos
https://youtu.be/3hMC-B7u7gs

# Project Progress

## Progress Description 1
In this initial stage of the project, three sorting algorithms have been implemented: bubble sort, selection sort, and insertion sort. Each of these algorithms is located in the `Sorter` class and can be used to sort an integer array.

## Progress Description 2
Currently, the project is equipped with a variety of menus that provide access to a wide range of sorting algorithms and the data structure of a stack. The project operates with a multitude of classes, each designed to meet the specific needs of the user. This flexible design allows users to access and interact with different components seamlessly.

### Changes from the First Progress
1. **Introduction of an Interactive User Interface:**
   - *Change Description:* An interactive user interface was implemented using the system console. Users can now choose between different options, such as search algorithms, sorting algorithms, and linear and non-linear data structures.
   - *Reason for Change:* The user interface provides an interactive and user-friendly experience. It allows a deeper and practical understanding of algorithms and data structures, as users can see real-time results.

2. **Implementation of Modular Menus:**
   - *Change Description:* A `Menu` class was created to handle user options and interactions with the program. Each category (search algorithms, sorting algorithms, and data structures) has its own method within the `Menu` class to manage related options.
   - *Reason for Change:* Modularity facilitates the expansion of the program in the future. If more search algorithms, sorting algorithms, or data structures need to be added, new methods can be added to the `Menu` class without affecting the main program flow.

3. **Implementation of Additional Sorting Algorithms:**
   - *Change Description:* Additional sorting algorithms like Merge Sort and Shell Sort were added.
   - *Reason for Change:* Including a variety of sorting algorithms allows users to compare and contrast different approaches. It also provides a richer educational experience by demonstrating various sorting methods.

4. **Graphical Visualization of Sorting Algorithms:**
   - *Change Description:* Sorting algorithms now display a graphical representation in the form of ASCII bars to illustrate the sorting process step by step.
   - *Reason for Change:* Graphical visualization enhances the understanding of sorting algorithms. Users can see how the positions of elements change during the sorting process, aiding in visualizing the performance of each algorithm.

5. **Implementation of Linear Data Structure (Stack):**
   - *Change Description:* The stack data structure was introduced with operations such as adding elements, visualizing the stack, and removing elements.
   - *Reason for Change:* The stack is a fundamental data structure. By implementing a stack and displaying its operations, a practical understanding of how linear data structures work is provided.

## Progress Description 3
In this progress, two additional linear data structures were implemented—queue and linked list—with their respective functions and necessary menus. Likewise, the first non-linear data structure, a binary search tree (BST), was added, which has its basic functionalities working. However, many features are yet to be added to give it value in the project.

### Changes from the Second Progress
1. **Addition of Linear Structures (Queue and Linked List):**
   - *Queue:*
     - The queue data structure (Queue) was implemented, allowing the addition of elements to the end and removal of elements from the beginning (FIFO - First In First Out).
     - Functions like `enqueue` for adding elements and `dequeue` for removing elements from the queue were added.
     - The implementation is in the corresponding file named `Queue.h`.
   - *Linked List:*
     - The linked list data structure (L_List) was implemented, consisting of sequentially linked nodes, where each node contains data and a link to the next node.
     - Functions like `insert` for inserting elements, `remove` for removing elements, and `display` for showing the list were added.
     - The implementation is in the corresponding file named `L_List.h`.

2. **Introduction of Non-Linear Data Structure (BST):**
   - The first non-linear data structure, the Binary Search Tree (BST), was added to the project. This structure is essential for understanding how data is organized and managed hierarchically. Basic operations of a BST were implemented, including node addition, search, deletion, and the function to visually print the tree using ASCII art. The addition of the BST enriches the diversity of data structures in the project, allowing users to explore and understand the logic of a tree structure.

3. **File Optimization and Project Structuring:**
   - To improve code organization and maintenance, optimizations were made to the project's file structure. A specific folder was created to house classes related to data structures, making it easier to locate and manage each system component. This restructuring contributes to cleaner and more understandable code, facilitating its expansion and maintenance in future project updates.

## Final Delivery
This progress demonstrates an implementation of data reading in the Data Structures section. With the implemented functions, users can have a default example when entering any type of data structure. With this example, they can modify and see more clearly the functionalities of each structure. Although the project is still in progress to add more features later and fix some issues like BST, which is still in development.

### Changes from the Third Progress
1. **Implementation of Data Reading and Modification Functions from/to Files:**
   - Key functions like `readDataFromFile`, `modifyFile`, and `loadIntoVector` were added to facilitate the initial reading of data from files, modification of existing data, and loading data into a vector structure. These functions allow users to have default examples and modify them as needed, enhancing the experience and understanding of how data structures work.

2. **Additional Features to Enhance User Experience:**
   - Features were implemented to provide users with predefined examples in data structures, making it easier to understand and manipulate them. This provides a clear starting point for users to explore the functionalities of each structure.

3. **Other Optimizations and Minor Corrections:**
   - Adjustments and minor corrections were made to improve the coherence and efficiency of the code. These changes contribute to cleaner and more understandable code.

## Instructions for Compiling the Project Progress
Run the following command in the terminal (Linux):

`g++ main.cpp`

## Instructions for Running the Project Progress
Run the following command in the terminal (Linux):

`./a.out`
