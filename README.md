*This project has been created as part of the 42 curriculum by febranda.*

## Description

 The **push_swap** project is an algorithmic challenge whose goal is to sort a stack of integers using a limited set of operations and an auxiliary stack.

 The program receives a list of integers as arguments and must output the smallest possible sequence of operations to sort them in ascending order. Only predefined operations are allowed, such as swapping elements, pushing between stacks, and rotating stacks.

 The main challenge of this project is to design an efficient sorting strategy that minimizes the number of operations, especially for large input sizes.

---

  **Moveset:** 

 - **sa (swap a):** Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.
 
 - **sb (swap b)**: Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.
 
 - **ss :** sa and sb at the same time.
 
 - **pa (push a):** Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

 - **pb (push b):** Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

 - **ra (rotate a):** Shift up all elements of stack a by 1. The first element becomes the last one.

 - **rb (rotate b):** Shift up all elements of stack b by 1. The first element becomes the last one.

 - **rr :** ra and rb at the same time.

 - **rra (reverse rotate a):** Shift down all elements of stack a by 1. The last element becomes the first one.

 - **rrb (reverse rotate b):** Shift down all elements of stack b by 1. The last element becomes the first one.

 - **rrr :** rra and rrb at the same time.

---

## Instructions

### Compilation:
To compile the project, open the project folder in the linux terminal and run:

    make
This compiles an executable called "push_swap".

Other available commands:

    make clean
    make fclean
    make re
    
   **make clean:** To delete the objects (files .o) generated during the make compilation;
   **make fclean:** Delete the objects if they haven't already been deleted, and delete the executable file as well.
  **make re:** Delete everything and compile;

## Resources
[Radix Sort EXPLAINED ](https://www.youtube.com/watch?v=UyFH-KayvM4)
[Bitwise Operators in C Programming](https://www.programiz.com/c-programming/bitwise-operators)

## How to use:
Execute the program by typing './push_swap ' followed by the numbers. The numbers can be typed directly, separared by a single space, or be part of a string.

    ./push_swap 1 4 55 6 -9 10
or

    ./push_swap "1 4 55 6 -9 10"

 If your numbers aren’t ordered already, the output will be the moves you have to make to order them; each move will be printed on a separate line.

example:

    ./push_swap 5 -7 1010 42
    ra
    pb
    ra
    sa
    pa

## Technical choices

For this project, the sorting algorithm used is **Radix Sort**.

First, all numbers are converted into **indexes** from `0` to `n - 1`. This helps to simplify the sorting process and handle negative numbers.

The algorithm sorts the stack by checking the numbers **bit by bit**, starting from the least significant bit.

For each bit:

-   If the bit is `0`, the number is pushed to **stack b**.

-   If the bit is `1`, the number is rotated in **stack a**.
    
-   After all numbers are checked, all elements from **stack b** are pushed back to **stack a**.
    

This is repeated for all bits needed. At the end, **stack a** is sorted.

Radix sort is efficient and works well for large amount of numbers in the _push_swap_ project.
  