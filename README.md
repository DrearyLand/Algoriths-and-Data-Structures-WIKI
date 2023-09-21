# Sorting Algorithms Visualizer

This project consists of a C++ program that implements three sorting algorithms (bubble, selection, and insertion) and displays the number of comparisons and swaps made during the execution of each algorithm. The main goal is to improve knowledge in data structures and algorithms.

## Project Progress

In this initial stage of the project, we have implemented three sorting algorithms: bubble, selection, and insertion. Each of these algorithms is located in the `Sorter` class and can be used to sort an integer vector.

## Instructions to compile the project progress
Run the following command in the terminal:

`g++ main.cpp -o primer_avance` 

## Instructions to execute the project progress
Run the following command in the terminal:

`./primer_avance` 

## Description of the Inputs of the Project Progress

In this project progress, the inputs are the data sets that you want to sort. These data sets are integer vectors that are defined in the source code of the program. You can modify these vectors according to your needs to test the sorting algorithms with different data sets.

## Description of the Outputs of the Project Progress

The outputs of this project progress include:

1. The original data before applying any sorting algorithm.
2. The number of comparisons made during the execution of each algorithm.
3. The number of swaps (exchanges) made during the execution of each algorithm.
4. The sorted data after applying each sorting algorithm.

## Competency Development

In this project progress, we are meeting the following sub-competency indicators:

### SICT0301: Evaluates Components

We have correctly implemented sorting algorithms (bubble, selection, insertion) in the `Sorter` class. In addition, we have included functionality to display the number of comparisons and swaps made during the execution of each algorithm.

### SICT0302: Makes Decisions

We have selected suitable sorting algorithms to solve the problem of sorting an integer vector. Each algorithm is used correctly and effectively produces sorted results.

## Program Execution

Below is an example of running the program with a sample data set:

```plaintext
Original data: 12 4 5 6 7 3 1 15 8 10

Starting the bubble sort algorithm...
Swaps done: 19
Comparisons done: 45
Data after sorting: 1 3 4 5 6 7 8 10 12 15

Starting the selection sort algorithm...
Swaps done: 9
Comparisons done: 45
Data after sorting: 1 3 4 5 6 7 8 10 12 15

Starting the insertion sort algorithm...
Swaps done: 19
Comparisons done: 19
Data after sorting: 1 3 4 5 6 7 8 10 12 15
