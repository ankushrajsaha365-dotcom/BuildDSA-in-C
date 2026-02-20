# 🧩 Insertion Sort — Complete Notes (With Visual Representation)

---

## 1️⃣ Introduction

**Insertion Sort** builds the sorted array **one element at a time**.

👉 It takes one element
👉 Inserts it into its correct position
👉 Inside the already sorted part

It works exactly like sorting playing cards in your hand.

---

## 2️⃣ Core Idea

* Assume first element is already sorted
* Pick next element
* Compare it with previous elements
* Shift larger elements to the right
* Insert element in correct position

Sorted portion grows from **left to right**.

---

## 3️⃣ Step-by-Step Visual Example

Let’s sort:

```
[5, 3, 8, 4, 2]
```

---

## 🔵 PASS 1

Sorted part: `[5]`
Key = 3

Compare 3 with 5:

```
[5, 3, 8, 4, 2]
 ↑  ↑
```

5 > 3 → Shift 5 right

```
[5, 5, 8, 4, 2]
```

Insert 3 at correct position:

```
[3, 5, 8, 4, 2]
```

✅ Sorted part: `[3, 5]`

---

## 🔵 PASS 2

Key = 8

Compare with 5:

5 < 8 → No shift

```
[3, 5, 8, 4, 2]
```

✅ Sorted part: `[3, 5, 8]`

---

## 🔵 PASS 3

Key = 4

```
[3, 5, 8, 4, 2]
        ↑
```

Compare backward:

8 > 4 → Shift

```
[3, 5, 8, 8, 2]
```

5 > 4 → Shift

```
[3, 5, 5, 8, 2]
```

3 < 4 → Stop

Insert 4:

```
[3, 4, 5, 8, 2]
```

✅ Sorted part: `[3, 4, 5, 8]`

---

## 🔵 PASS 4

Key = 2

Shift everything bigger:

8 > 2 → shift
5 > 2 → shift
4 > 2 → shift
3 > 2 → shift

Insert 2 at start:

```
[2, 3, 4, 5, 8]
```

---

## ✅ FINAL SORTED ARRAY

```
[2, 3, 4, 5, 8]
```

---

## 4️⃣ Visual Summary

```
Initial:  [5, 3, 8, 4, 2]

Pass 1 →  [3, 5, 8, 4, 2]
Pass 2 →  [3, 5, 8, 4, 2]
Pass 3 →  [3, 4, 5, 8, 2]
Pass 4 →  [2, 3, 4, 5, 8]
```

Notice:

* Elements are shifted, not swapped repeatedly.
* Each element finds its correct position.

---

## 5️⃣ Algorithm Pattern (Conceptual)

For each index `i` (from 1 to n-1):

1. Store current element as `key`
2. Compare with elements before it
3. Shift larger elements right
4. Insert `key` in correct position

---

## 6️⃣ Time Complexity

| Case                        | Time Complexity |
| --------------------------- | --------------- |
| Best Case (Already Sorted)  | O(n)            |
| Average Case                | O(n²)           |
| Worst Case (Reverse Sorted) | O(n²)           |

### Why Best Case is O(n)?

If array is already sorted:

* Only one comparison per element
* No shifting required

---

## 7️⃣ Space Complexity

```
O(1)
```

In-place sorting.

---

## 8️⃣ Stability

✅ **Stable**

Example:

```
[4a, 2, 4b]
```

After sorting:

```
[2, 4a, 4b]
```

Relative order maintained.

---

## 9️⃣ Why Insertion Sort is Important

Here’s the truth:

* Used inside advanced algorithms like Merge Sort & Tim Sort
* Very efficient for small arrays
* Great for nearly sorted data
* Frequently asked in interviews

It is much more practical than Bubble and Selection.

---

## 🔟 Comparisons Among First 3 Sorts

| Feature       | Bubble | Selection | Insertion          |
| ------------- | ------ | --------- | ------------------ |
| Best Case     | O(n)   | O(n²)     | O(n)               |
| Worst Case    | O(n²)  | O(n²)     | O(n²)              |
| Stable        | Yes    | No        | Yes                |
| Adaptive      | Yes    | No        | Yes                |
| Swaps         | Many   | Few       | Shifts             |
| Practical Use | Rare   | Rare      | Yes (small arrays) |

---

## 1️⃣1️⃣ Key Observations (Exam Points)

* Builds sorted array gradually
* Shifts instead of frequent swapping
* Good for nearly sorted data
* Stable and adaptive
* In-place

---

## 1️⃣2️⃣ Intuition Trick

Think of arranging playing cards:

You:

* Pick a card
* Slide bigger cards right
* Insert card in correct place

That’s insertion sort.

---
