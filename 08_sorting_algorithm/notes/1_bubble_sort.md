# 🫧 Bubble Sort — Complete Notes (With Visual Representation)

---

## 1️⃣ Introduction

**Bubble Sort** is a simple comparison-based sorting algorithm.

👉 It repeatedly compares **adjacent elements**
👉 Swaps them if they are in the wrong order
👉 After each pass, the largest element "bubbles" to the end

That’s why it’s called **Bubble Sort**.

---

## 2️⃣ Core Idea

For an array of size `n`:

* Pass 1 → Largest element moves to last position
* Pass 2 → Second largest moves to second last
* Pass 3 → Third largest moves correctly
* … and so on

After `(n - 1)` passes, the array is sorted.

---

## 3️⃣ Step-by-Step Visual Example

Let’s sort:

```
[5, 3, 8, 4, 2]
```

---

### 🔵 PASS 1

Compare adjacent elements:

```
[5, 3, 8, 4, 2]
 ↑  ↑
```

5 > 3 → Swap

```
[3, 5, 8, 4, 2]
```

Next:

```
[3, 5, 8, 4, 2]
    ↑  ↑
```

5 < 8 → No swap

Next:

```
[3, 5, 8, 4, 2]
       ↑  ↑
```

8 > 4 → Swap

```
[3, 5, 4, 8, 2]
```

Next:

```
[3, 5, 4, 8, 2]
          ↑  ↑
```

8 > 2 → Swap

```
[3, 5, 4, 2, 8]
```

✅ Largest element (8) is now fixed.

---

### 🔵 PASS 2

```
[3, 5, 4, 2, 8]
```

Compare:

3 < 5 → No swap
5 > 4 → Swap → `[3, 4, 5, 2, 8]`
5 > 2 → Swap → `[3, 4, 2, 5, 8]`

✅ 5 is fixed now.

---

### 🔵 PASS 3

```
[3, 4, 2, 5, 8]
```

3 < 4 → No swap
4 > 2 → Swap → `[3, 2, 4, 5, 8]`

---

### 🔵 PASS 4

```
[3, 2, 4, 5, 8]
```

3 > 2 → Swap → `[2, 3, 4, 5, 8]`

---

### ✅ FINAL SORTED ARRAY

```
[2, 3, 4, 5, 8]
```

---

## 4️⃣ Visual Summary (Pass by Pass)

```
Initial:  [5, 3, 8, 4, 2]

Pass 1 →  [3, 5, 4, 2, 8]
Pass 2 →  [3, 4, 2, 5, 8]
Pass 3 →  [3, 2, 4, 5, 8]
Pass 4 →  [2, 3, 4, 5, 8]
```

Notice:

* After every pass, the largest unsorted element moves right.
* The sorted portion grows from the right side.

---

## 5️⃣ Algorithm Pattern (Conceptual)

For each pass:

* Compare `arr[i]` and `arr[i+1]`
* Swap if `arr[i] > arr[i+1]`
* Repeat until no swaps needed

---

## 6️⃣ Time Complexity

| Case         | Time Complexity       |
| ------------ | --------------------- |
| Best Case    | O(n) *(if optimized)* |
| Average Case | O(n²)                 |
| Worst Case   | O(n²)                 |

### Why O(n²)?

Two nested loops:

* Outer loop → n times
* Inner loop → up to n comparisons

Total ≈ n × n

---

## 7️⃣ Space Complexity

```
O(1)
```

It sorts **in-place** (no extra array used).

---

## 8️⃣ Stability

✅ **Stable**

Equal elements maintain their relative order.

Example:

```
[4a, 2, 4b]
```

After sorting:

```
[2, 4a, 4b]
```

Order of 4a and 4b remains same.

---

## 9️⃣ Optimized Bubble Sort Idea

If during a pass:

👉 No swaps happen
👉 That means array is already sorted

So we can stop early.

This improves best-case time complexity to:

```
O(n)
```

---

## 🔟 When Should You Use It?

Be honest with yourself:

❌ Not for large datasets
❌ Not for competitive programming
❌ Not for production systems

✅ Only for:

* Learning sorting basics
* Understanding comparison-based sorting
* Very small datasets

---

## 1️⃣1️⃣ Key Observations (Important for Exams)

* Number of passes = n - 1
* After kth pass → last k elements are sorted
* Worst case swaps = n(n-1)/2
* Adaptive (if optimized)
* Stable
* In-place

---

## 1️⃣2️⃣ Quick Intuition Trick

Think of:

🫧 Bubbles in water rising to the top

Largest element rises to the top (end of array) every pass.

---
