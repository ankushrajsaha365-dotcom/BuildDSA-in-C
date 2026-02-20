# 🎯 Selection Sort — Complete Notes (With Visual Representation)

---

## 1️⃣ Introduction

**Selection Sort** is a simple comparison-based sorting algorithm.

👉 It repeatedly **selects the minimum element**
👉 Places it at the correct position
👉 Expands the sorted portion from the left

Unlike Bubble Sort, it does **minimum swaps**.

---

## 2️⃣ Core Idea

For an array of size `n`:

* Find the smallest element
* Swap it with the first element
* Then find second smallest
* Swap with second position
* Continue until sorted

After each pass, one element is permanently fixed.

---

## 3️⃣ Step-by-Step Visual Example

Let’s sort:

```
[5, 3, 8, 4, 2]
```

---

## 🔵 PASS 1

Find the minimum from entire array.

```
[5, 3, 8, 4, 2]
                ↑
Minimum = 2
```

Swap 2 with first element (5)

```
[2, 3, 8, 4, 5]
```

✅ 2 is fixed.

---

## 🔵 PASS 2

Find minimum from remaining unsorted part:

```
[2 | 3, 8, 4, 5]
```

Minimum = 3

Already in correct position.

```
[2, 3, 8, 4, 5]
```

✅ 3 is fixed.

---

## 🔵 PASS 3

Find minimum from:

```
[2, 3 | 8, 4, 5]
```

Minimum = 4

Swap 4 with 8

```
[2, 3, 4, 8, 5]
```

✅ 4 is fixed.

---

## 🔵 PASS 4

Find minimum from:

```
[2, 3, 4 | 8, 5]
```

Minimum = 5

Swap 5 with 8

```
[2, 3, 4, 5, 8]
```

---

## ✅ FINAL SORTED ARRAY

```
[2, 3, 4, 5, 8]
```

---

## 4️⃣ Visual Summary (Pass by Pass)

```
Initial:  [5, 3, 8, 4, 2]

Pass 1 →  [2, 3, 8, 4, 5]
Pass 2 →  [2, 3, 8, 4, 5]
Pass 3 →  [2, 3, 4, 8, 5]
Pass 4 →  [2, 3, 4, 5, 8]
```

Notice:

* Sorted portion grows from the left.
* Only one swap per pass.

---

## 5️⃣ Algorithm Pattern (Conceptual)

For each index `i`:

1. Assume `i` is minimum
2. Search the rest of array
3. Update minimum index
4. Swap once

---

## 6️⃣ Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n²)           |
| Average Case | O(n²)           |
| Worst Case   | O(n²)           |

### Why always O(n²)?

Even if the array is sorted:

* You still scan the entire unsorted portion.
* No early stopping like optimized Bubble Sort.

Comparisons:

```
(n-1) + (n-2) + (n-3) + ... + 1
= n(n-1)/2
```

---

## 7️⃣ Space Complexity

```
O(1)
```

In-place sorting.

---

## 8️⃣ Stability

❌ **Not Stable (by default)**

Example:

```
[4a, 2, 4b]
```

After swapping minimum:

```
[2, 4b, 4a]
```

Relative order of 4a and 4b changes.

---

## 9️⃣ Number of Swaps

Maximum swaps:

```
n - 1
```

This is better than Bubble Sort (which may swap many times).

---

## 🔟 When Should You Use It?

Be practical:

❌ Not efficient for large datasets
❌ Rarely used in production

✅ Useful when:

* Memory writes are costly
* You want minimum swaps
* Small dataset

---

## 1️⃣1️⃣ Key Observations (Important for Exams)

* Always performs n(n-1)/2 comparisons
* Performs at most n-1 swaps
* Not adaptive
* Not stable (by default)
* In-place

---

## 1️⃣2️⃣ Quick Intuition Trick

Think:

🎯 You **select** the smallest and put it in place.

Unlike Bubble Sort (pushing largest to end),
Selection Sort pulls smallest to front.

---

## 🧠 Bubble vs Selection (Quick Comparison)

| Feature   | Bubble           | Selection |
| --------- | ---------------- | --------- |
| Swaps     | Many             | Few       |
| Best Case | O(n) (optimized) | O(n²)     |
| Stable    | Yes              | No        |
| Adaptive  | Yes (optimized)  | No        |

---
