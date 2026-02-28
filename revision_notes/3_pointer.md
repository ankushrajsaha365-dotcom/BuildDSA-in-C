# 📘 Part 3: Pointers in C (DSA Foundation)

---

# 1️⃣ What is a Pointer?

## 📌 Definition

A **pointer** is a variable that stores the **address of another variable**.

Example:

```c
int a = 10;
int *ptr = &a;
```

* `a` → stores value `10`
* `&a` → address of `a`
* `ptr` → stores address of `a`
* `*ptr` → value at that address (10)

---

## 📌 Memory Representation

Suppose:

* `a` is stored at address 1000
* `ptr` is stored at address 2000

```text
Address    Variable   Value
1000       a          10
2000       ptr        1000
```

So:

* `ptr` → 1000
* `*ptr` → 10

---

# 2️⃣ Important Pointer Operators

| Symbol | Meaning              |
| ------ | -------------------- |
| `&`    | Address-of operator  |
| `*`    | Dereference operator |

---

### Example:

```c
int a = 5;
int *p = &a;

printf("%d", *p);   // prints 5
```

`*p` means: go to the address stored in `p` and fetch the value.

---

# 3️⃣ Why Pointers Are Important in DSA

Because:

* Dynamic memory allocation uses pointers.
* Linked list uses pointers.
* Trees use pointers.
* Graphs use pointers.
* Passing arrays to functions uses pointers.

Without pointers → no dynamic data structures in C.

---

# 4️⃣ Pointer Arithmetic

This is where many students get confused.

Example:

```c
int arr[3] = {10, 20, 30};
int *p = arr;
```

If:

* Base address = 1000
* Size of int = 4 bytes

Then:

```text
p       = 1000
p + 1   = 1004
p + 2   = 1008
```

⚠ Important:

Pointer increases by size of data type, not by 1 byte.

---

## 📌 Why?

Because pointer type decides jump size.

```c
char *cptr;
int *iptr;
```

* `cptr + 1` → +1 byte
* `iptr + 1` → +4 bytes (usually)

---

# 5️⃣ NULL Pointer

```c
int *ptr = NULL;
```

A NULL pointer:

* Points to nothing
* Has value 0
* Safe initialization

Why use it?

To avoid accessing random memory.

---

# 6️⃣ Dangling Pointer

A pointer that points to memory that has already been freed.

Example:

```c
int *ptr = (int*)malloc(sizeof(int));
free(ptr);
```

Now `ptr` is dangling.

If you access it → Undefined behavior / crash.

Best practice:

```c
free(ptr);
ptr = NULL;
```

---

# 7️⃣ Wild Pointer

A pointer that is declared but not initialized.

```c
int *ptr;  // dangerous
```

It contains garbage address.

Always initialize:

```c
int *ptr = NULL;
```

---

# 8️⃣ Double Pointer

A pointer that stores address of another pointer.

```c
int a = 5;
int *p = &a;
int **pp = &p;
```

Memory view:

```text
a   = 5
p   = address of a
pp  = address of p
```

* `*p` → 5
* `**pp` → 5

Used in:

* Dynamic 2D arrays
* Modifying pointer inside function

---

# 9️⃣ Pointers and Arrays Relationship

Very important viva concept.

In C:

```c
int arr[3];
```

`arr` acts like a pointer to first element.

```c
arr == &arr[0]
```

Also:

```c
arr[i] == *(arr + i)
```

This is fundamental.

---

# 🔟 Passing Pointer to Function

Example:

```c
void update(int *p) {
    *p = 20;
}

int main() {
    int a = 10;
    update(&a);
}
```

Why pointer?

Because C uses pass-by-value.

To modify original variable → pass address.

---

# 1️⃣1️⃣ Stack vs Heap Memory

## 🔹 Stack Memory

* Stores local variables
* Automatically managed
* Fast
* Limited size

## 🔹 Heap Memory

* Allocated using malloc()
* Must be freed manually
* Larger
* Used in dynamic structures

---

# 1️⃣2️⃣ malloc(), calloc(), realloc(), free()

## 🔹 malloc()

```c
int *ptr = (int*)malloc(5 * sizeof(int));
```

* Allocates memory
* Contains garbage values

---

## 🔹 calloc()

```c
int *ptr = (int*)calloc(5, sizeof(int));
```

* Allocates memory
* Initializes to zero

---

## 🔹 realloc()

Changes size of allocated memory.

---

## 🔹 free()

Releases memory.

Not freeing → Memory leak.

---

# 1️⃣3️⃣ Common Viva Questions

### ❓ What is difference between `ptr` and `*ptr`?

* `ptr` → address
* `*ptr` → value at that address

---

### ❓ Can we dereference NULL pointer?

No. It causes segmentation fault.

---

### ❓ What is segmentation fault?

Accessing memory you don’t own.

---

### ❓ Why are pointers powerful but dangerous?

Because:

* Direct memory access
* Can crash system
* Can corrupt memory

---

# 1️⃣4️⃣ Why Linked List Needs Pointers?

Node structure:

```c
struct Node {
    int data;
    struct Node *next;
};
```

Without pointer to next node → no connection.

Pointer is what links nodes.

---

# 🎯 Important Concept Summary

You must clearly understand:

* `&` vs `*`
* Pointer arithmetic
* NULL vs wild vs dangling pointer
* Stack vs heap
* malloc/free
* Arrays and pointers relation
