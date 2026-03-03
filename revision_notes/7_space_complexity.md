# 📘 Space Complexity (Detailed Viva + Concept Notes)

---

# 1️⃣ What is Space Complexity?

## 📌 Definition

Space Complexity measures:

> The total amount of memory used by an algorithm as a function of input size (n).

It includes:

* Input space
* Auxiliary (extra) space

---

# 2️⃣ Components of Space Complexity

## 🔹 1. Input Space

Memory required to store input.

Example:

```c
int arr[n];
```

Space = O(n)

We usually **do not focus heavily** on input space in analysis.

---

## 🔹 2. Auxiliary Space

Extra memory used by the algorithm (excluding input).

Example:

```c
int sum = 0;
```

Space = O(1)

This is what examiners mostly care about.

---

# 3️⃣ Total Space Complexity

Total Space = Input Space + Auxiliary Space

But in interviews and exams, when someone says:

> “What is space complexity?”

They usually mean **auxiliary space**.

---

# 4️⃣ Common Space Complexities

| Complexity | Meaning                                     |
| ---------- | ------------------------------------------- |
| O(1)       | Constant space                              |
| O(n)       | Linear extra space                          |
| O(n²)      | Quadratic extra space                       |
| O(log n)   | Logarithmic space (usually recursion stack) |

---

# 5️⃣ Examples with Explanation

---

## 🔹 Example 1: Constant Space – O(1)

```c
int sum = 0;
for(int i = 0; i < n; i++) {
    sum += arr[i];
}
```

Extra memory used:

* One variable `sum`
* One variable `i`

No matter how large n becomes → space stays same.

So space complexity = O(1)

---

## 🔹 Example 2: Linear Space – O(n)

```c
int temp[n];
```

If n doubles → memory doubles.

So space complexity = O(n)

---

## 🔹 Example 3: Nested Array – O(n²)

```c
int matrix[n][n];
```

Memory required grows as n².

---

# 6️⃣ Space Complexity in Recursion

Very important.

Every recursive call uses stack memory.

Example:

```c
void func(int n) {
    if(n == 0) return;
    func(n-1);
}
```

How many calls?

n calls.

Each call occupies stack space.

So:

Space Complexity = O(n)

Even though no array is used.

---

# 7️⃣ Example: Factorial Recursion

```c
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n-1);
}
```

Recursion depth = n

So space = O(n)

---

# 8️⃣ Example: Iterative Factorial

```c
int fact(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
        result *= i;
}
```

Uses only few variables.

Space = O(1)

---

👉 Same problem.
Different implementation.
Different space complexity.

That’s powerful understanding.

---

# 9️⃣ Space Complexity of Common Algorithms

| Algorithm                 | Space Complexity |
| ------------------------- | ---------------- |
| Linear Search             | O(1)             |
| Binary Search (iterative) | O(1)             |
| Binary Search (recursive) | O(log n)         |
| Bubble Sort               | O(1)             |
| Selection Sort            | O(1)             |
| Insertion Sort            | O(1)             |
| Merge Sort                | O(n)             |
| Quick Sort (average)      | O(log n)         |
| Quick Sort (worst)        | O(n)             |

---

# 🔟 Why Merge Sort Uses O(n) Space?

Because:

It creates temporary arrays for merging.

Extra memory proportional to n.

---

# 1️⃣1️⃣ Why Quick Sort Uses O(log n) Space?

Because:

Recursion depth ≈ log n (average case).

No extra arrays.

---

# 1️⃣2️⃣ Stack vs Heap in Space Complexity

Recursive algorithms:

Use stack memory → affects space complexity.

Dynamic structures:

Use heap memory → affects space complexity.

Both count in analysis.

---

# 1️⃣3️⃣ In-Place Algorithms

Definition:

> Algorithm that uses constant extra space (O(1)).

Examples:

* Bubble sort
* Selection sort
* Insertion sort

Not in-place:

* Merge sort

---

# 1️⃣4️⃣ Trade-off Between Time and Space

Sometimes:

More space → Less time

Example:

Hashing uses extra space
But gives O(1) search.

This is called:

Space-Time Tradeoff.

Very important concept.

---

# 1️⃣5️⃣ Common Viva Questions

### ❓ What is difference between time and space complexity?

* Time → Speed
* Space → Memory usage

---

### ❓ Why recursive function uses more space?

Because each call uses stack memory.

---

### ❓ Which is better: less time or less space?

Depends on problem constraints.

---

### ❓ Is input array counted in space complexity?

Generally, auxiliary space is considered.

---

### ❓ What is in-place algorithm?

Algorithm that uses O(1) extra space.

---

# 1️⃣6️⃣ Trap Questions

### ❓ What is space complexity of:

```c
for(int i = 0; i < n; i++)
    printf("%d", i);
```

O(1)

Loop count does not affect space.

---

### ❓ What about:

```c
int arr[n];
```

O(n)

---

# 🎯 What You Must Understand Deeply

* Difference between input space and auxiliary space
* Recursion stack matters
* In-place algorithm
* Space-time tradeoff
* Iterative vs recursive space difference

---