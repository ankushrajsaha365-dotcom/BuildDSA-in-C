# 📊 Complete Comparison of Sorting Algorithms (Clear + Structured Notes)

You’ve studied:

* Bubble
* Selection
* Insertion
* Merge
* Quick
* Heap
* Radix

Now let’s connect everything properly.

This is where real understanding happens.

---

# 1️⃣ Big Picture Classification

## 🔹 Based on Comparison

### ✅ Comparison-Based

* Bubble
* Selection
* Insertion
* Merge
* Quick
* Heap

These compare elements directly.

Lower bound:

```
Ω(n log n)
```

No comparison sort can beat this in worst case.

---

### 🚀 Non-Comparison Based

* Radix
* Counting
* Bucket

These use structure of numbers instead of comparisons.

Can achieve:

```
O(n)
```

Under specific conditions.

---

# 2️⃣ Time Complexity Comparison Table

| Algorithm          | Best Case  | Average Case | Worst Case |
| ------------------ | ---------- | ------------ | ---------- |
| Bubble (optimized) | O(n)       | O(n²)        | O(n²)      |
| Selection          | O(n²)      | O(n²)        | O(n²)      |
| Insertion          | O(n)       | O(n²)        | O(n²)      |
| Merge              | O(n log n) | O(n log n)   | O(n log n) |
| Quick              | O(n log n) | O(n log n)   | O(n²)      |
| Heap               | O(n log n) | O(n log n)   | O(n log n) |
| Radix              | O(dn)      | O(dn)        | O(dn)      |

Where:

* `d` = number of digits

---

# 3️⃣ Space Complexity Comparison

| Algorithm | Space                          |
| --------- | ------------------------------ |
| Bubble    | O(1)                           |
| Selection | O(1)                           |
| Insertion | O(1)                           |
| Merge     | O(n)                           |
| Quick     | O(log n) (avg recursion stack) |
| Heap      | O(1)                           |
| Radix     | O(n + k)                       |

---

# 4️⃣ Stability Comparison

| Algorithm | Stable? |
| --------- | ------- |
| Bubble    | ✅ Yes   |
| Selection | ❌ No    |
| Insertion | ✅ Yes   |
| Merge     | ✅ Yes   |
| Quick     | ❌ No    |
| Heap      | ❌ No    |
| Radix     | ✅ Yes   |

---

# 5️⃣ In-Place vs Not In-Place

| Algorithm | In-Place? |
| --------- | --------- |
| Bubble    | ✅ Yes     |
| Selection | ✅ Yes     |
| Insertion | ✅ Yes     |
| Merge     | ❌ No      |
| Quick     | ✅ Yes     |
| Heap      | ✅ Yes     |
| Radix     | ❌ No      |

---

# 6️⃣ Performance on Nearly Sorted Data

| Algorithm          | Performance      |
| ------------------ | ---------------- |
| Bubble (optimized) | Good             |
| Insertion          | Excellent        |
| Selection          | Same O(n²)       |
| Merge              | Same O(n log n)  |
| Quick              | Depends on pivot |
| Heap               | Same O(n log n)  |

Insertion sort shines here.

---

# 7️⃣ Real-World Usage

### 🟢 Used Practically

* Quick Sort (optimized versions)
* Merge Sort
* Hybrid algorithms (Tim Sort = Merge + Insertion)
* Radix (specific use cases)

### 🔴 Rarely Used Alone

* Bubble
* Selection

These are educational.

---

# 8️⃣ Visual Growth Ladder

```
Beginner Level:
Bubble → Selection → Insertion

Intermediate Level:
Merge → Quick

Advanced Level:
Heap → Radix → Hybrid sorts
```

---

# 9️⃣ Key Decision Guide

## 🔹 Small dataset?

Use Insertion Sort.

## 🔹 Nearly sorted?

Insertion Sort.

## 🔹 Large dataset, stable required?

Merge Sort.

## 🔹 Large dataset, memory limited?

Heap Sort.

## 🔹 Need fastest practical?

Quick Sort (good pivot).

## 🔹 Integers with limited digits?

Radix Sort.

---

# 🔟 Core Concept Differences

| Algorithm | Main Idea              |
| --------- | ---------------------- |
| Bubble    | Repeated swapping      |
| Selection | Select minimum         |
| Insertion | Insert in sorted part  |
| Merge     | Divide & merge         |
| Quick     | Partition around pivot |
| Heap      | Build max heap         |
| Radix     | Sort digit by digit    |

---

# 1️⃣1️⃣ Theoretical Insight

### Why O(n log n) appears everywhere?

Because of:

* Divide and Conquer
* Binary decision tree
* Comparison lower bound

If you're serious about DSA,
understanding this deeply matters.

---

# 1️⃣2️⃣ The Real Takeaway

There is no “best” sorting algorithm.

There is only:

* Best for the situation
* Best for constraints
* Best for memory
* Best for stability
* Best for input structure

Strong programmers choose wisely.

---
