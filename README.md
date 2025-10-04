# ft_printf - Custom Implementation of printf:  
![ft_printf Banner](https://github.com/user-attachments/assets/d8457491-83fe-4ce1-b23a-0d7c351fff51)
*A project to master formatted output in C*  

---

## Overview  

**ft_printf** is a project from the 1337 School curriculum that involves re-creating the standard C `printf` function. The objective is to deepen the understanding of variadic functions, formatted output, and efficient memory management. This custom implementation supports multiple conversion specifiers and ensures proper output formatting, just like the standard library's `printf`.  

---

## Key Objectives  
- Master variadic functions and their usage in C.  
- Implement formatted output for strings, characters, numbers, and other data types.  
- Gain insight into buffer management and performance optimization.  

---

## Features  

- Handles standard conversion specifiers:  
  - `%c`: Single character.  
  - `%s`: String.  
  - `%p`: Pointer address.  
  - `%d`/`%i`: Decimal and integer numbers.  
  - `%u`: Unsigned decimal.  
  - `%x`/`%X`: Hexadecimal (lowercase/uppercase).  
  - `%%`: Percent symbol.  

- Fully compliant with **Norminette**, the 42/1337 coding style standard.  

---

## Function Prototype  

```c  
int ft_printf(const char *format, ...);  
```  

---

## Getting Started  

### Prerequisites  
To use this project, you need:  
- A working C compiler, such as `gcc`.  
- A UNIX-like operating system (Linux, macOS).  

### Installation  
1. Clone the repository:  
   ```bash  
   git clone git@github.com:mouadisfree/ft_printf.git
   cd ft_printf/ft_printf
   ```  

2. Compile the library:  
   ```bash  
   make  
   ```  

   This will generate a `libftprintf.a` file, which is your compiled static library.  

---

## Usage  

1. Include the function in your program:  
   ```c  
   #include "ft_printf.h"  
   ```  

2. Use `ft_printf` to print formatted strings:  
   ```c  
   int main(void)  
   {  
       int number = 42;  
       ft_printf("Hello, 1337! The number is: %d\n", number);  
       return (0);  
   }  
   ```  

3. Compile and run:  
   ```bash  
   gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program  
   ./your_program  
   ```  

---

## Project Structure  

| File                  | Description                                      |  
|-----------------------|--------------------------------------------------|  
| `ft_printf.c`         | Main implementation of the `ft_printf` function. |  
| `ft_printf_utils.c`   | Helper functions for data conversion and output. |  
| `ft_printf.h`         | Header file with function prototypes.            |  

---

## Testing  

### Compile and Run  
You can write test cases to check different specifiers and edge cases:  
1. Create a `main.c` file with various test cases.  
2. Compile:  
   ```bash  
   gcc -Wall -Wextra -Werror main.c libftprintf.a -o test_ftprintf  
   ```  
3. Run:  
   ```bash  
   ./test_ftprintf  
   ```  

### Testers  
You can use these testers to validate your implementation:  
1. [42TESTERS-PRINTF](https://github.com/Mazoise/42TESTERS-PRINTF)  
2. [PRINTF_TESTER](https://github.com/Tripouille/printfTester)  
3. [printf-unit-tests](https://github.com/alelievr/printf_unit_test)  

---

## Contributions  

Contributions are not accepted for this project, as it is an academic assignment. However, feel free to fork this repository and experiment with it for personal learning.  

---

## Author  

Developed by **mokatfi** as part of the curriculum at **1337 School**, a member of the 42 Network.  

---

## License  

This project is intended for educational purposes and is subject to the rules and policies of 1337 School. Redistribution or plagiarism is strictly prohibited.  
