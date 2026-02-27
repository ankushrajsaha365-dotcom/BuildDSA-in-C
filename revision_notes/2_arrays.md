# 📘 Part 2: Arrays (Detailed Viva Notes – C Focused)

---

# 1️⃣ What is an Array?

## 📌 Definition

An **array** is a collection of elements of the same data type stored in **contiguous memory locations**.

In C:

```c
int arr[5] = {10, 20, 30, 40, 50};
```

All elements:

* Same type (`int`)
* Stored next to each other in memory

---

## 📌 Key Characteristics

* Fixed size
* Same data type
* Index-based access
* Stored in contiguous memory
* Random access possible

---

# 2️⃣ How Array is Stored in Memory

This is VERY important in viva.

Suppose:

```c
int arr[5] = {10, 20, 30, 40, 50};
```

If base address = 1000
Size of int = 4 bytes

Memory layout:

```
Address    Value
1000       10
1004       20
1008       30
1012       40
1016       50
```

---

## 📌 Formula to Access Element

For 1D array:

```
Address of arr[i] = Base Address + (i × size of data type)
```

This is why access is O(1).

No traversal needed.

---

# 3️⃣ Time Complexity of Array Operations

| Operation              | Time Complexity |
| ---------------------- | --------------- |
| Access                 | O(1)            |
| Update                 | O(1)            |
| Linear Search          | O(n)            |
| Binary Search (sorted) | O(log n)        |
| Insertion at end       | O(1)            |
| Insertion at middle    | O(n)            |
| Deletion               | O(n)            |

---

## 📌 Why is Insertion Costly?

Example:

Insert 25 at index 2:

Before:

```
10 20 30 40 50
```

After:

```
10 20 25 30 40 50
```

We must shift:

* 30 → 40 → 50

Shifting takes O(n).

---

# 4️⃣ Types of Arrays in C

## 🔹 1D Array

```c
int arr[5];
```

Linear structure.

---

## 🔹 2D Array (Matrix)

```c
int arr[3][3];
```

Represents table or matrix.

---

## 🔹 Multi-Dimensional Array

```c
int arr[2][3][4];
```

Rare but possible.

---

# 5️⃣ Row-Major Order (Very Important)

C stores multi-dimensional arrays in **Row-Major Order**.

That means:

* Row by row storage

Example:

```c
int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Memory layout:

```
1 2 3 4 5 6
```

NOT column-wise.

---

## 📌 Formula for 2D Array Address

For:

```
arr[i][j]
```

Formula:

```
Address = Base + ((i × number_of_columns) + j) × size
```

Examiner LOVES this formula.

---

# 6️⃣ Static vs Dynamic Array in C

## 🔹 Static Array

```c
int arr[10];
```

* Size fixed
* Stored in stack (usually)
* Cannot resize

---

## 🔹 Dynamic Array

```c
int *arr = (int*)malloc(10 * sizeof(int));
```

* Allocated at runtime
* Stored in heap
* Can resize using realloc()
* Must free memory

---

# 7️⃣ Advantages of Arrays

* Fast access (O(1))
* Easy implementation
* Efficient for small data
* Good cache performance

---

# 8️⃣ Disadvantages of Arrays

* Fixed size
* Wastes memory if size too large
* Insertion/deletion costly
* Only same data type
* Cannot grow dynamically (static arrays)

---

# 9️⃣ Array vs Linked List (Very Common Viva Question)

| Array                | Linked List              |
| -------------------- | ------------------------ |
| Contiguous memory    | Non-contiguous           |
| Fixed size           | Dynamic                  |
| Random access        | Sequential access        |
| Less memory overhead | Extra memory for pointer |
| Insertion costly     | Insertion easier         |

---

# 🔟 Common Viva Traps

### ❓ Can array size be changed after declaration?

No (for static arrays).

### ❓ Why array index starts from 0?

Because:

```
arr[i] = base + (i × size)
```

If index started at 1, formula would be inefficient.

### ❓ Is array stored in heap?

Static → usually stack
Dynamic (malloc) → heap

### ❓ Can we store different data types in array?

No (unless using structure or union).

---

# 1️⃣1️⃣ Applications of Arrays

* Searching algorithms
* Sorting algorithms
* Matrix operations
* Implementing stack
* Implementing queue
* Polynomial representation

---

# 🎯 Important Concept to Remember

Array is best when:

* Size is known
* Frequent access needed
* Few insertions/deletions

If insert/delete frequently → use linked list.

---

# 🧠 If You Want to Test Yourself

Try answering without notes:

1. Why is array access O(1)?
2. Why is insertion O(n)?
3. Explain row-major order.
4. Difference between malloc array and static array.
5. Write address formula for arr[i][j].

If you can answer confidently, you are progressing.
