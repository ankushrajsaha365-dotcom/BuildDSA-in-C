# ⚡ Quick Sort — Complete Notes (With Visual Representation)

---

# 1️⃣ Introduction

**Quick Sort** is a **Divide and Conquer** algorithm.

But unlike Merge Sort:

👉 It does NOT divide into equal halves first
👉 It selects a **pivot element**
👉 Places pivot in correct position
👉 Recursively sorts left and right parts

It is one of the fastest sorting algorithms in practice.

---

# 2️⃣ Core Idea

Three main steps:

1️⃣ Choose a **pivot**
2️⃣ Partition the array

* Elements smaller than pivot → Left
* Elements greater than pivot → Right
  3️⃣ Recursively apply same process

After partition:

👉 Pivot is in its final correct position.

---

# 3️⃣ Step-by-Step Visual Example

Let’s sort:

```
[8, 3, 5, 4, 7, 6, 1, 2]
```

We’ll choose **last element as pivot** (common approach).

---

# 🔵 STEP 1 — First Partition

Pivot = **2**

```
[8, 3, 5, 4, 7, 6, 1, 2]
                             ↑
                           pivot
```

We rearrange elements:

* Smaller than 2 → Left
* Greater than 2 → Right

Only 1 is smaller.

After partition:

```
[1, 2, 5, 4, 7, 6, 8, 3]
     ↑
   pivot fixed
```

Now pivot 2 is in correct position.

Left side: `[1]`
Right side: `[5, 4, 7, 6, 8, 3]`

---

# 🔵 STEP 2 — Sort Right Subarray

Subarray:

```
[5, 4, 7, 6, 8, 3]
```

Pivot = 3

Partition:

Only values smaller than 3 → none

After partition:

```
[3, 4, 7, 6, 8, 5]
 ↑
pivot fixed
```

Full array now:

```
[1, 2, 3, 4, 7, 6, 8, 5]
```

---

# 🔵 STEP 3 — Continue Recursively

Now sort:

```
[4, 7, 6, 8, 5]
```

Pivot = 5

Partition:

```
[4, 5, 6, 8, 7]
```

Array becomes:

```
[1, 2, 3, 4, 5, 6, 8, 7]
```

---

Next:

Sort `[6, 8, 7]`

Pivot = 7

Partition:

```
[6, 7, 8]
```

---

# ✅ FINAL SORTED ARRAY

```
[1, 2, 3, 4, 5, 6, 7, 8]
```

---

# 4️⃣ Visual Recursion Structure

```
[8,3,5,4,7,6,1,2]
            ↓
Pivot=2 → [1] 2 [rest]

                ↓
Pivot=3 → [ ] 3 [rest]

                    ↓
Pivot=5 → [4] 5 [6,8,7]

                        ↓
Pivot=7 → [6] 7 [8]
```

Quick Sort sorts by fixing pivots one by one.

---

# 5️⃣ Time Complexity

| Case         | Time       |
| ------------ | ---------- |
| Best Case    | O(n log n) |
| Average Case | O(n log n) |
| Worst Case   | O(n²)      |

---

## Why Worst Case O(n²)?

If pivot selection is poor:

Example:

```
[1,2,3,4,5]
```

Choosing last element as pivot each time gives:

* One side empty
* Other side size n-1

Becomes:

```
n + (n-1) + (n-2) + ...
= O(n²)
```

---

# 6️⃣ Space Complexity

```
O(log n)  (recursion stack in average case)
```

Worst case:

```
O(n)
```

---

# 7️⃣ Stability

❌ **Not Stable**

Equal elements may change order during partition.

---

# 8️⃣ Why Quick Sort Is So Powerful

* Very fast in practice
* Cache-friendly
* In-place (unlike Merge Sort)
* Used in many real-world systems

Most libraries use optimized versions of Quick Sort.

---

# 9️⃣ Merge vs Quick (Important)

| Feature            | Merge Sort | Quick Sort |
| ------------------ | ---------- | ---------- |
| Worst Case         | O(n log n) | O(n²)      |
| Space              | O(n)       | O(log n)   |
| Stable             | Yes        | No         |
| In-place           | No         | Yes        |
| Faster in practice | No         | Yes        |

---

# 🔟 Key Observations (Interview Points)

* Based on partitioning
* Performance depends on pivot choice
* Random pivot improves performance
* Tail recursion optimization possible
* Hybrid algorithms use Quick Sort + Insertion Sort

---

# 1️⃣1️⃣ Intuition Trick

Think like this:

Instead of dividing evenly (like Merge Sort),

Quick Sort:

* Picks a leader (pivot)
* Puts it in correct position
* Then organizes around it

It’s aggressive and efficient.

---
