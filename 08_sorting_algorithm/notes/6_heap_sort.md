# 🌲 Heap Sort — Complete Notes (With Visual Representation)

---

# 1️⃣ Introduction

**Heap Sort** is a comparison-based sorting algorithm based on the **Binary Heap** data structure.

It works in two major phases:

1️⃣ Build a **Max Heap**
2️⃣ Repeatedly extract the maximum element

Unlike Quick Sort:

* ✅ Worst case = **O(n log n)**
* ✅ In-place
* ❌ Not stable

It’s consistent and reliable.

---

# 2️⃣ What Is a Heap?

A **Binary Heap** is a complete binary tree that satisfies:

### 🔹 Max Heap Property

Parent ≥ Children

Example:

```
        8
      /   \
     7     6
    / \   /
   5  4  3
```

Largest element is always at the root.

---

# 3️⃣ Core Idea of Heap Sort

### Step 1: Convert array into a Max Heap

### Step 2: Swap root (max element) with last element

### Step 3: Reduce heap size

### Step 4: Heapify again

### Repeat until sorted

---

# 4️⃣ Step-by-Step Example

Let’s sort:

```
[4, 10, 3, 5, 1]
```

---

# 🔵 STEP 1 — Build Max Heap

Initial array:

```
[4, 10, 3, 5, 1]
```

Convert to Max Heap:

```
        10
       /   \
      5     3
     / \
    4   1
```

Array representation:

```
[10, 5, 3, 4, 1]
```

---

# 🔵 STEP 2 — Extract Maximum

Swap root with last element:

```
[1, 5, 3, 4, 10]
```

10 is now fixed.

Heap size reduces to 4.

---

# 🔵 Heapify Remaining Heap

Rearrange:

```
        5
       /   \
      4     3
     /
    1
```

Array:

```
[5, 4, 3, 1, 10]
```

---

# 🔵 STEP 3 — Extract Again

Swap:

```
[1, 4, 3, 5, 10]
```

5 fixed.

Heapify:

```
        4
       /   \
      1     3
```

Array:

```
[4, 1, 3, 5, 10]
```

---

# 🔵 STEP 4 — Repeat

Swap:

```
[3, 1, 4, 5, 10]
```

Heapify:

```
[3, 1, 4, 5, 10]
```

Swap:

```
[1, 3, 4, 5, 10]
```

---

# ✅ FINAL SORTED ARRAY

```
[1, 3, 4, 5, 10]
```

---

# 5️⃣ Visual Summary

```
Initial:      [4, 10, 3, 5, 1]

Max Heap:     [10, 5, 3, 4, 1]

After 1st:    [5, 4, 3, 1, 10]

After 2nd:    [4, 1, 3, 5, 10]

After 3rd:    [3, 1, 4, 5, 10]

Final:        [1, 3, 4, 5, 10]
```

---

# 6️⃣ Time Complexity

| Phase           | Time       |
| --------------- | ---------- |
| Build Heap      | O(n)       |
| Heapify n times | O(n log n) |
| Total           | O(n log n) |

---

## Why Build Heap is O(n)?

This surprises many students.

Because heapify cost is smaller for lower levels.

Total cost:

```
O(n)
```

Not O(n log n).

---

# 7️⃣ Space Complexity

```
O(1)
```

In-place sorting.

Only constant extra space used.

---

# 8️⃣ Stability

❌ Not Stable

Swapping root with last element can change order of equal elements.

---

# 9️⃣ Why Heap Sort Matters

* Guaranteed O(n log n)
* No worst-case slowdown like Quick Sort
* In-place unlike Merge Sort
* Used in priority queues

It’s consistent and safe.

---

# 🔟 Comparison With Other Advanced Sorts

| Feature          | Merge      | Quick     | Heap            |
| ---------------- | ---------- | --------- | --------------- |
| Worst Case       | O(n log n) | O(n²)     | O(n log n)      |
| Space            | O(n)       | O(log n)  | O(1)            |
| Stable           | Yes        | No        | No              |
| In-place         | No         | Yes       | Yes             |
| Fast in practice | Good       | Very Fast | Slightly slower |

---

# 1️⃣1️⃣ Key Observations (Interview Level)

* Based on Binary Heap
* Complete binary tree
* Parent index: `i`
* Left child: `2i + 1`
* Right child: `2i + 2`
* Efficient for priority queue operations

---

# 1️⃣2️⃣ Intuition Trick

Think:

Instead of dividing (Merge)
Instead of choosing pivot (Quick)

Heap Sort:

* Builds a structure where max is always on top
* Removes max repeatedly

It’s like repeatedly removing the strongest player from a tournament.

---