# 🔢 Radix Sort — Complete Notes (With Visual Representation)

---

# 1️⃣ Introduction

**Radix Sort** is a **non-comparison sorting algorithm**.

Unlike:

* Bubble
* Selection
* Insertion
* Merge
* Quick
* Heap

It does NOT compare elements directly.

Instead, it sorts numbers **digit by digit**.

---

# 2️⃣ Core Idea

For numbers:

👉 Sort by **least significant digit (LSD)** first
👉 Then next digit
👉 Continue until most significant digit

At each step, we use a **stable sorting algorithm** (usually Counting Sort).

---

# 3️⃣ When Radix Sort Works

✅ Works well when:

* Numbers have fixed number of digits
* Range of digits is small (0–9)
* Data is integers or fixed-length strings

❌ Not ideal for arbitrary real numbers

---

# 4️⃣ Step-by-Step Example

Let’s sort:

```
[170, 45, 75, 90, 802, 24, 2, 66]
```

We sort digit by digit (base 10).

---

# 🔵 PASS 1 — Sort by Units Digit

Look at last digit:

```
170 → 0
45  → 5
75  → 5
90  → 0
802 → 2
24  → 4
2   → 2
66  → 6
```

Group them:

```
0 → 170, 90
2 → 802, 2
4 → 24
5 → 45, 75
6 → 66
```

New array:

```
[170, 90, 802, 2, 24, 45, 75, 66]
```

---

# 🔵 PASS 2 — Sort by Tens Digit

Tens digit:

```
170 → 7
90  → 9
802 → 0
2   → 0
24  → 2
45  → 4
75  → 7
66  → 6
```

Group:

```
0 → 802, 2
2 → 24
4 → 45
6 → 66
7 → 170, 75
9 → 90
```

New array:

```
[802, 2, 24, 45, 66, 170, 75, 90]
```

---

# 🔵 PASS 3 — Sort by Hundreds Digit

Hundreds digit:

```
802 → 8
2   → 0
24  → 0
45  → 0
66  → 0
170 → 1
75  → 0
90  → 0
```

Group:

```
0 → 2, 24, 45, 66, 75, 90
1 → 170
8 → 802
```

Final array:

```
[2, 24, 45, 66, 75, 90, 170, 802]
```

---

# ✅ FINAL SORTED ARRAY

```
[2, 24, 45, 66, 75, 90, 170, 802]
```

---

# 5️⃣ Visual Summary

```
Original:
[170, 45, 75, 90, 802, 24, 2, 66]

After Units:
[170, 90, 802, 2, 24, 45, 75, 66]

After Tens:
[802, 2, 24, 45, 66, 170, 75, 90]

After Hundreds:
[2, 24, 45, 66, 75, 90, 170, 802]
```

---

# 6️⃣ Time Complexity

If:

* n = number of elements
* d = number of digits
* k = range of digit (0–9 → k=10)

Then:

```
Time = O(d × (n + k))
```

If k is constant (like 10):

```
O(d × n)
```

For fixed digit integers:

```
≈ O(n)
```

That’s why it can outperform O(n log n) sorts.

---

# 7️⃣ Space Complexity

```
O(n + k)
```

Needs extra space for counting buckets.

---

# 8️⃣ Stability

✅ **Stable**

Because it uses stable sorting internally.

This stability is crucial.

If it weren’t stable, digit-wise sorting would break.

---

# 9️⃣ Why Radix Sort Is Powerful

* Can be linear time
* Great for large integer datasets
* Used in competitive programming
* Useful in string sorting (fixed length)

---

# 🔟 Comparison With Other Advanced Sorts

| Feature    | Merge      | Quick      | Heap       | Radix          |
| ---------- | ---------- | ---------- | ---------- | -------------- |
| Type       | Comparison | Comparison | Comparison | Non-Comparison |
| Worst Case | O(n log n) | O(n²)      | O(n log n) | O(dn)          |
| Stable     | Yes        | No         | No         | Yes            |
| Space      | O(n)       | O(log n)   | O(1)       | O(n)           |

---

# 1️⃣1️⃣ Key Observations (Interview Level)

* Non-comparison sort
* Uses Counting Sort internally
* Efficient when digits are small
* Not suitable for floating-point values directly
* Very powerful in right conditions

---

# 1️⃣2️⃣ Intuition Trick

Instead of comparing numbers directly…

Radix Sort:

* Organizes numbers digit by digit
* Like sorting papers by last letter first,
* Then second last,
* Then first.

It’s systematic.

---
