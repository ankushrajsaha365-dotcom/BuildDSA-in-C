# 📘 Static Memory Allocation in C (DSA Foundation)

---

# 1️⃣ What is Static Memory Allocation?

## 📌 Definition

Static memory allocation means:

> Memory is allocated at **compile time** and its size **cannot be changed during runtime**.

The size is fixed before the program starts executing.

---

## 📌 Example

```c
int arr[5];
int x = 10;
```

Here:

* Memory is reserved before execution.
* Size cannot change.
* Automatically managed.

---

# 2️⃣ Where is Static Memory Stored?

Static allocation mainly uses:

* **Stack memory** (local variables)
* **Data segment** (global & static variables)

---

## 📌 Memory Layout of a C Program

```text
--------------------
|   Code Segment   |
--------------------
|  Global/Data     |
--------------------
|      Heap        |
--------------------
|      Stack       |
--------------------
```

### Static memory exists in:

* Stack (local variables)
* Data segment (global/static variables)

---

# 3️⃣ Characteristics of Static Memory

* Fixed size
* Faster allocation
* Automatically freed
* No manual memory management
* Risk of stack overflow if too large

---

# 4️⃣ Example of Static Allocation (Array)

```c
int arr[10];
```

If `int` = 4 bytes
Memory allocated = 40 bytes

This cannot be resized.

---

# 5️⃣ Local Static Allocation (Stack)

```c
void func() {
    int a = 5;
}
```

* `a` stored in stack.
* Destroyed after function ends.

---

# 6️⃣ Global Static Allocation

```c
int g = 100;
```

* Stored in data segment.
* Exists throughout program lifetime.

---

# 7️⃣ Static Keyword (Important Viva Area)

```c
static int x = 10;
```

### What does static keyword do?

1. If used inside function:

   * Value persists between function calls.

2. If used globally:

   * Restricts scope to that file only.

---

## 📌 Example: Static Inside Function

```c
void counter() {
    static int count = 0;
    count++;
    printf("%d", count);
}
```

Output:

```
1
2
3
```

Because:

* Variable is created once.
* Value preserved.

---

# 8️⃣ Static Memory vs Dynamic Memory

| Static Memory             | Dynamic Memory       |
| ------------------------- | -------------------- |
| Allocated at compile time | Allocated at runtime |
| Fixed size                | Flexible size        |
| Stack/Data segment        | Heap                 |
| Automatically freed       | Must use free()      |
| Faster                    | Slightly slower      |
| Less control              | More control         |

---

# 9️⃣ Advantages of Static Memory

* Simple to use
* No memory leaks
* Faster allocation
* Safe (less crash-prone)

---

# 🔟 Disadvantages of Static Memory

* Size cannot change
* Memory waste if over-allocated
* Stack size limited
* Cannot build dynamic structures

---

# 1️⃣1️⃣ Why Linked List Cannot Use Static Memory

If you do:

```c
struct Node nodes[100];
```

Then:

* Max size fixed (100).
* Not truly dynamic.

Linked list requires:

* Creating nodes as needed.
* That requires heap memory.

---

# 1️⃣2️⃣ What is Stack Overflow?

If you declare:

```c
int arr[10000000];
```

Inside a function → program may crash.

Why?

Stack has limited size.

That is stack overflow.

---

# 1️⃣3️⃣ Common Viva Questions

### ❓ Can static memory be resized?

No.

---

### ❓ Is array static or dynamic?

Depends:

```c
int arr[10];         → Static
int *arr = malloc(); → Dynamic
```

---

### ❓ Why is static memory faster?

Because:

* No heap management overhead.
* Allocated before runtime.

---

### ❓ Can we free static memory?

No.

Only heap memory can be freed.

---

### ❓ What happens to local variables after function ends?

Destroyed automatically (stack unwinds).

---

# 1️⃣4️⃣ When Should You Use Static Memory?

Use static when:

* Size known in advance
* Data small
* No resizing required
* Temporary variables
* Simple programs

---

# 🎯 Big Concept to Understand

Static memory = Simplicity
Dynamic memory = Flexibility

In DSA:

* Arrays → often static
* Linked List → dynamic
* Trees → dynamic
* Graphs → dynamic

---

# 🧠 Self-Test

Answer without notes:

1. Where are local variables stored?
2. What is difference between stack and heap?
3. Can static memory cause memory leak?
4. What is stack overflow?
5. Why is static memory faster?

If you can answer clearly, your foundation is strong.

---
