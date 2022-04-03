# Viviane - Topics of C++

## New School Arrays & Vectors

- [ ] Know how to **instantiate and populate** a new-school **`vector` / `array`**.


- [X] Know what **contiguous memory** is.

> Its a space on heap that we can use to allocate and dealocate memory easely.Memory addresses are continuous as well. 

- [X] Know if **`arrays` and `vectors` are contiguous or not**.

| Arrays | Vectors |
| :--: | :--: |
|Bloco contíguo de memória na `Heap`| Similar a lista encadeada de dados pela `Heap` |

> Arrays são um ponteiro para um bloco contíguo de memória.

- [X] Know the pros and cons of using **`arrays` vs. `vectors`**.

| Arrays | Vectors |
| :--: | :--: |
|Tamanho fixo na criação| Tamanho dinâmico por todo código |
|Inserção mais fácil de um determinado elemento| Inserção e manipulação através de métodos |
| Menos gasto de memória | Precisa alocar um valor e um ponteiro para o próximo |
| Métodos para manipular devem ser manualmente implementados| Métodos prontos que ajudam a manipular |

- [ ] Know how to build and use a **2d vector**.

- [ ] Know what the **`at` function** does if you try to access memory beyond the bounds of the `array`.

----

## Old School Arrays

- [x] Know how to build / use an old-school (***c-style***) **`array`** .

```c++
  int array[100]; // allocate
  array[0] = 1; // instanciate
  cout << array[0] // use
```

- [ ] Know what a **variable length `array`** is and know why it is not supported by the ***C++ standard***.

```c++
  #include <vector> // not in cpp strandard

  // ...

  // declaration
  vector <int> dinamicArray;
```

> Para que não implementassemos uma lista encadeada ou algo similar, a `vector` é uma estrutura de dados pronta que traz todos os recursos e uma fácil escrita para salvar e manipular elementos na `heap`.

- [ ] What is the const keyword and why is it often used when instantiating old-school arrays?



- [ ] Understand what happens if you try to go beyond the bounds of an old-school array.

- [ ] Understand what an old-school array fundamentally is, and know what it isn't.

---

## Search and Sort

- [ ] Know the big O notation for linear search, binary search, selection sort, and merge sort.

- [ ] Be able to rank these algorithms in terms of complexity.

- [ ] Know the limitations of binary search.

> Para usar a `binary` parte-se do pressuposto de que a sequência esta ordenada.

- [ ] Be able to look at a simple algorithm and understand the big O notation.

---

## Classes

- [ ] Be able to construct a simple class.

- [ ] Know how to instantiate a class and call functions within that class.

- [ ] Know what public and private do.

- [ ] Know what a constructor is. Also be familiar with overloaded constructors. Also destructors. Know when each one is called.

- [ ] Know what get and set functions are used for, and why the corresponding member variables are set to private.

- [ ] Besides "organization", know why we separate classes into separate .h/.cpp files.

- [ ] Know that there is a "default constructor" and know what happens when you overload the default constructor.

- [ ] Understand what a "has a" relationship is.

---

## Pointers

- [X] Be able to create pointers and assign them to variables.

> Um pointer guarda o endereço de uma determinada variável

- [X] Know how to dereference a `pointer`.

```c++
  pointer = NULL;
```

- [x] Know how to get the address of a variable.

```c++
  int *p;
  p = &var;
```

> Pointer recebe o endereço de var, caracter `&`.

- [x] Know what a pointer is.

> É uma referencia/indicativo para um endereço de memória. Serve para transferirmos uma conexão **real** entre escopos da `stack` ou da `heap`.

- [x] Know how to set pointers to pointers.

```c++
  int var = 2;
  int* p1, p2;
  p1 = &var;
  p2 = &p1;
  cout << *(*p2);
```

> Esse código irá associar p2 -> p1 -> var. Através do `cout` iremos conseguir mostrar o conteúdo de var;

- [ ] Know how to dynamically allocate memory on the heap (both individual variables and contiguous arrays).

- [ ] Be able to identify which variables are on the stack and which are on the heap.

- [ ] Know how to delete memory on the heap (both individual variables and contiguous arrays).

- [ ] Know what a memory leak is and know how to identify one.

- [ ] Be able to dynamically allocate a class (with multiple types of constructors). Be able to call functions within that class.

- [ ] Be able to demonstrate both array subscript notation and pointer offset notation (both for reading and assigning to arrays).

- [ ] Be able to demonstrate use of old-school strings (c-strings).

- [ ] Know what the null terminator is

- [ ] Be able to write your own implementation of strlen and strcpy.

- [ ] Know fundamentally what an old-school c-string is... and what it is not.
