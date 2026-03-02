# 📘 Time Complexity (Complete Viva + Concept Notes)

---

# 1️⃣ What is Time Complexity?

## 📌 Definition

Time Complexity measures:

> How the running time of an algorithm grows as input size increases.

It does **NOT** measure actual time in seconds.

It measures **growth rate**.

---

# 2️⃣ Why Do We Study Time Complexity?

Because:

* Computers get faster.
* Input sizes get MUCH larger.
* Bad algorithm + large input = program failure.

Example:

* 1,000 elements → fine
* 1,000,000 elements → disaster (if inefficient)

---

# 3️⃣ What is Big-O Notation?

## 📌 Definition

Big-O represents the **worst-case time complexity** of an algorithm.

It tells:

> Upper bound of growth.

---

## 📌 Example

If an algorithm takes:

```
5n² + 3n + 10
```

Big-O =

```
O(n²)
```

Why?

* Ignore constants
* Ignore lower order terms
* Keep highest growth term

---

# 4️⃣ Common Time Complexities

| Complexity | Meaning     | Example             |
| ---------- | ----------- | ------------------- |
| O(1)       | Constant    | Array access        |
| O(log n)   | Logarithmic | Binary search       |
| O(n)       | Linear      | Linear search       |
| O(n log n) | Log-linear  | Merge sort          |
| O(n²)      | Quadratic   | Bubble sort         |
| O(2ⁿ)      | Exponential | Recursive Fibonacci |

---

# 5️⃣ Understanding with Examples

---

## 🔹 O(1) – Constant Time

```c
int x = arr[3];
```

No matter if array size = 10 or 10 million.

Time does not change.

---

## 🔹 O(n) – Linear Time

```c
for(int i = 0; i < n; i++)
    printf("%d", arr[i]);
```

If n doubles → time doubles.

---

## 🔹 O(n²) – Quadratic Time

```c
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        printf("*");
```

If n doubles → time becomes 4 times.

Very dangerous for large n.

---

## 🔹 O(log n) – Logarithmic

Binary search:

Each step:

* Cuts array into half.

Example:

n = 16
Steps = 4
Because:

```
16 → 8 → 4 → 2 → 1
```

---

# 6️⃣ Best Case, Worst Case, Average Case

## 🔹 Best Case

Minimum time taken.

Example:
Linear search → element at first position.

Time = O(1)

---

## 🔹 Worst Case

Maximum time taken.

Example:
Element at last position.

Time = O(n)

---

## 🔹 Average Case

Expected time for random input.

Usually harder to calculate.

---

# 7️⃣ Why Do We Ignore Constants?

Example:

```
100n
```

vs

```
n
```

For large n:

Difference becomes negligible compared to growth.

We care about growth pattern, not exact time.

---

# 8️⃣ How to Calculate Time Complexity (Step-by-Step)

---

### Case 1: Single Loop

```c
for(i = 0; i < n; i++)
```

→ O(n)

---

### Case 2: Nested Loop

```c
for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
```

→ O(n²)

---

### Case 3: Loop Halving Each Time

```c
while(n > 1)
    n = n / 2;
```

→ O(log n)

---

### Case 4: Consecutive Loops

```c
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
```

→ O(n + n) = O(n)

Not O(n²)

Be careful.

---

# 9️⃣ Time Complexity of Common DSA Structures

| Operation          | Array | Linked List |
| ------------------ | ----- | ----------- |
| Access             | O(1)  | O(n)        |
| Search             | O(n)  | O(n)        |
| Insert (beginning) | O(n)  | O(1)        |
| Delete             | O(n)  | O(n)        |

---

| Algorithm            | Time Complexity |
| -------------------- | --------------- |
| Linear Search        | O(n)            |
| Binary Search        | O(log n)        |
| Bubble Sort          | O(n²)           |
| Selection Sort       | O(n²)           |
| Insertion Sort       | O(n²)           |
| Merge Sort           | O(n log n)      |
| Quick Sort (average) | O(n log n)      |
| Quick Sort (worst)   | O(n²)           |

---

# 🔟 Important Concept: Growth Comparison

If n = 1,000,000:

* O(n) → 1,000,000 steps
* O(n log n) → ~20,000,000 steps
* O(n²) → 1,000,000,000,000 steps

See the difference?

That’s why algorithm choice matters.

---

# 1️⃣1️⃣ Space Complexity

Measures:

> How much extra memory an algorithm uses.

Example:

Merge sort uses extra array → O(n) space.

Bubble sort → O(1) space.

---

# 1️⃣2️⃣ Common Viva Questions

### ❓ Which is better: O(n log n) or O(n²)?

O(n log n)

Because growth is slower.

---

### ❓ Why is binary search faster?

Because it divides search space by 2 every time.

---

### ❓ What is worst case of quick sort?

O(n²)

When pivot is smallest or largest every time.

---

### ❓ What is constant time?

Time independent of input size.

---

### ❓ Is O(2n) equal to O(n)?

Yes.

Constants are ignored.

---

# 1️⃣3️⃣ Trap Questions

### ❓ What is time complexity of:

```c
for(i = 0; i < n; i++)
    for(j = 0; j < i; j++)
```

Answer:

O(n²)

Because total iterations ≈ n(n-1)/2

---

### ❓ What about:

```c
for(i = 0; i < n; i++)
    for(j = 0; j < 5; j++)
```

O(n)

Inner loop constant.

---

# 🎯 What You Must Master

You should confidently:

* Identify O(1), O(n), O(n²), O(log n)
* Analyze loops
* Ignore constants
* Compare algorithms
* Explain worst case clearly

---

