# 📘 Part 4: Dynamic Memory Allocation in C

---

# 1️⃣ What is Dynamic Memory Allocation?

## 📌 Definition

Dynamic Memory Allocation (DMA) is the process of allocating memory at **runtime (during program execution)** using heap memory.

Unlike static memory (fixed at compile time), dynamic memory:

* Is flexible
* Can grow or shrink
* Is manually managed

---

# 2️⃣ Why Do We Need Dynamic Memory?

Because in real programs:

* Size is not known at compile time.
* Data may grow during execution.
* We need flexible structures (linked list, trees, graphs).

Example:
User enters number of students at runtime → we cannot predefine fixed size.

---

# 3️⃣ Stack vs Heap (Very Important)

| Stack Memory           | Heap Memory           |
| ---------------------- | --------------------- |
| Automatically managed  | Manually managed      |
| Stores local variables | Stores dynamic memory |
| Faster                 | Slightly slower       |
| Limited size           | Larger                |
| Freed automatically    | Must use `free()`     |

---

## 📌 Visual Idea

```text
Stack              Heap
------             ------
int a = 10         malloc()
int b = 20         dynamic arrays
function calls     linked list nodes
```

---

# 4️⃣ Memory Allocation Functions

Defined in:

```c
#include <stdlib.h>
```

---

# 5️⃣ malloc()

## 📌 Syntax

```c
ptr = (type*) malloc(size_in_bytes);
```

Example:

```c
int *ptr = (int*) malloc(5 * sizeof(int));
```

### What happens?

* Allocates 20 bytes (if int = 4 bytes)
* Returns base address
* Values are garbage (uninitialized)

---

## 📌 Important

If allocation fails → returns NULL.

Always check:

```c
if (ptr == NULL) {
    printf("Memory not allocated\n");
}
```

---

# 6️⃣ calloc()

## 📌 Syntax

```c
ptr = (type*) calloc(number_of_elements, size_of_each);
```

Example:

```c
int *ptr = (int*) calloc(5, sizeof(int));
```

Difference from malloc:

| malloc          | calloc              |
| --------------- | ------------------- |
| 1 argument      | 2 arguments         |
| Garbage values  | Initializes to zero |
| Slightly faster | Slightly slower     |

---

# 7️⃣ realloc()

Used to resize allocated memory.

## 📌 Syntax

```c
ptr = realloc(ptr, new_size);
```

Example:

```c
ptr = realloc(ptr, 10 * sizeof(int));
```

Used when:

* Array needs expansion
* Implementing dynamic array

---

# 8️⃣ free()

Releases heap memory.

```c
free(ptr);
```

If you don’t free:

→ Memory leak.

After freeing:

```c
ptr = NULL;
```

Prevents dangling pointer.

---

# 9️⃣ What is Memory Leak?

When allocated memory is not freed.

Example:

```c
int *ptr = malloc(sizeof(int));
```

If program ends without `free(ptr);`

Memory remains reserved until program exits.

In long-running systems → dangerous.

---

# 🔟 What is Dangling Pointer?

After freeing memory:

```c
free(ptr);
```

If you still use:

```c
*ptr = 5;  // ERROR
```

That pointer is dangling.

---

# 1️⃣1️⃣ Dynamic Array Example

```c
int n;
scanf("%d", &n);

int *arr = (int*) malloc(n * sizeof(int));
```

Now size is runtime dependent.

This is real dynamic behavior.

---

# 1️⃣2️⃣ Dynamic Memory in Linked List

Each node is created dynamically:

```c
struct Node {
    int data;
    struct Node *next;
};

struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
```

Without dynamic memory:

Linked list cannot exist.

---

# 1️⃣3️⃣ Common Runtime Errors

### ❌ Segmentation Fault

Occurs when:

* Dereferencing NULL
* Accessing freed memory
* Accessing out-of-bounds memory

---

### ❌ Memory Leak

Forgetting free()

---

### ❌ Double Free

Calling free() twice on same pointer.

---

# 1️⃣4️⃣ malloc vs Static Allocation

## Static:

```c
int arr[10];
```

* Fixed
* Stored in stack
* Automatically freed

## Dynamic:

```c
int *arr = malloc(10 * sizeof(int));
```

* Flexible
* Stored in heap
* Must manually free

---

# 1️⃣5️⃣ When to Use Dynamic Memory?

Use when:

* Size unknown at compile time
* Implementing linked list
* Implementing trees
* Large data structures
* Data must survive outside function scope

---

# 1️⃣6️⃣ Real Viva Questions

### ❓ Where is dynamically allocated memory stored?

Heap.

---

### ❓ What happens if malloc fails?

Returns NULL.

---

### ❓ Difference between stack overflow and heap overflow?

* Stack overflow → too many function calls / large local variables
* Heap overflow → writing beyond allocated heap memory

---

### ❓ Why is dynamic memory slower than static?

Because heap management requires extra overhead.

---

# 🎯 Important Concept to Lock In

Dynamic memory gives power.

But:

More power → More responsibility.

C does not protect you.

One wrong pointer → crash.

---

# 🧠 Self-Test Questions

1. Why do we multiply with sizeof?
2. What happens if we don’t free memory?
3. What is difference between malloc and calloc?
4. Can we use free() on stack variable?
5. What causes segmentation fault?

Answer these without notes. If you hesitate, revise.
