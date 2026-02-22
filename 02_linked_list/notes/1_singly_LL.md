# 📌 Singly Linked List – Complete Notes (DSA)

You’re building strong DSA foundations. Linked List is one of those topics that **looks simple but builds deep thinking about memory and pointers**. Master this properly.

---

# 1️⃣ What is a Singly Linked List?

A **Singly Linked List (SLL)** is a linear data structure where:

* Each element is called a **node**
* Each node contains:

  * **Data**
  * **Pointer (address) to the next node**
* The last node points to `NULL`

Unlike arrays:

* ❌ Not stored in contiguous memory
* ✅ Dynamic size
* ✅ Efficient insertion/deletion (if position known)

---

# 2️⃣ Structure of a Node

```
+--------+---------+
|  Data  |  Next   |
+--------+---------+
```

Example:

```
Head
  ↓
+----+------+    +----+------+    +----+------+
| 10 |  •----->  | 20 |  •----->  | 30 | NULL |
+----+------+    +----+------+    +----+------+
```

---

# 3️⃣ Terminology

* **Head** → First node
* **Tail** → Last node
* **Next** → Pointer to next node
* **NULL** → End of list

---

# 4️⃣ Why Do We Need Linked List?

### Problems with Array:

* Fixed size
* Insertion in middle = shifting elements
* Deletion = shifting elements

### Linked List Advantage:

* Dynamic memory allocation
* No shifting required
* Easy insertion/deletion at beginning

But:

⚠ No random access
⚠ Extra memory for pointer

---

# 5️⃣ Basic Operations

---

## 🔹 1. Traversal

Move from head until `NULL`

```
temp = head
while temp != NULL:
    print(temp.data)
    temp = temp.next
```

### ⏱ Time Complexity: O(n)

---

## 🔹 2. Insertion

### ➤ A) Insert at Beginning

Steps:

1. Create new node
2. new->next = head
3. head = new

```
Before:
Head → 10 → 20 → NULL

Insert 5

After:
Head → 5 → 10 → 20 → NULL
```

⏱ Time: **O(1)**

---

### ➤ B) Insert at End

Steps:

1. Traverse to last node
2. last->next = new
3. new->next = NULL

⏱ Time: **O(n)**

---

### ➤ C) Insert at Position

Steps:

1. Traverse to (pos - 1)
2. Adjust pointers

```
prev->next = new
new->next = nextNode
```

⏱ Time: **O(n)**

---

## 🔹 3. Deletion

---

### ➤ A) Delete from Beginning

```
temp = head
head = head->next
free(temp)
```

⏱ Time: O(1)

---

### ➤ B) Delete from End

1. Traverse to second last node
2. secondLast->next = NULL

⏱ Time: O(n)

---

### ➤ C) Delete by Value

1. Search node
2. Adjust links

⏱ Time: O(n)

---

# 6️⃣ Time Complexity Summary

| Operation           | Time Complexity |
| ------------------- | --------------- |
| Access by index     | O(n)            |
| Search              | O(n)            |
| Insert at beginning | O(1)            |
| Insert at end       | O(n)            |
| Delete at beginning | O(1)            |
| Delete at end       | O(n)            |

---

# 7️⃣ Memory Representation

In array:

```
[10][20][30]
```

In linked list:

```
Address 1000 → (10, 1040)
Address 1040 → (20, 1080)
Address 1080 → (30, NULL)
```

Nodes are scattered in memory.

---

# 8️⃣ Advantages

✔ Dynamic size
✔ Efficient insertion/deletion
✔ No memory wastage like static array

---

# 9️⃣ Disadvantages

❌ Extra memory for pointer
❌ No direct indexing
❌ Slower traversal than array

---

# 🔟 Applications

* Implementing Stack
* Implementing Queue
* Hash table chaining
* Graph adjacency list
* Undo/Redo systems

---

# 🔥 Important Interview Questions

1. Reverse a linked list
2. Detect cycle (Floyd’s algorithm)
3. Find middle element
4. Merge two sorted lists
5. Remove nth node from end

---

# 🧠 Visual Summary

```
Singly Linked List:

Head
 ↓
[data|next] → [data|next] → [data|NULL]
```

---

# 🎯 What You Must Be Clear About

* Pointer manipulation
* Edge cases:

  * Empty list
  * Single node
  * Deleting head
* Why insertion at beginning is O(1)

---
