# 📚 STACK — Complete Notes (Part 2: Implementation)

---

# 🏗️ 1. Array Implementation of Stack

## Structure

We need:

* An array
* A variable `TOP`

---

## 📦 Memory Representation

Assume size = 5

```
Index:   0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Array = │ 10 │ 20 │ 30 │    │    │
        └────┴────┴────┴────┴────┘
                     ↑
                    TOP = 2
```

---

## 🔹 Algorithm: Push

```
IF TOP == MAX - 1
    Overflow
ELSE
    TOP = TOP + 1
    STACK[TOP] = value
```

---

## 🔹 Algorithm: Pop

```
IF TOP == -1
    Underflow
ELSE
    value = STACK[TOP]
    TOP = TOP - 1
```

---

## 🔹 Algorithm: Peek

```
IF TOP == -1
    Underflow
ELSE
    RETURN STACK[TOP]
```

---

# 🏗️ 2. Linked List Implementation of Stack

Instead of array, use nodes.

---

## 📦 Node Structure Concept

Each node contains:

* Data
* Pointer to next node

---

## 🟢 Representation

```
TOP → ┌─────┐
       │ 30  │ → ┌─────┐
       └─────┘   │ 20  │ → ┌─────┐
                   └─────┘   │ 10  │ → NULL
                              └─────┘
```

TOP always points to first node.

---

## 🔹 Push (Linked List)

Steps:

1. Create new node
2. new_node → next = TOP
3. TOP = new_node

---

## 🔹 Pop (Linked List)

Steps:

1. temp = TOP
2. TOP = TOP → next
3. Free temp

---

# ⚖️ 3. Array vs Linked List

| Feature        | Array Stack | Linked List Stack   |
| -------------- | ----------- | ------------------- |
| Size           | Fixed       | Dynamic             |
| Memory         | Continuous  | Non-contiguous      |
| Overflow       | Yes         | Only if memory full |
| Implementation | Easy        | Slightly complex    |

---

# 🧠 Final Concept Summary

A stack:

* Follows LIFO
* Uses one pointer (TOP)
* Push & Pop are O(1)
* Can be implemented using Array or Linked List
* Forms backbone of recursion & expression handling

