# 📌 Doubly Linked List (DLL) – Complete Notes

You’ve done singly linked list. Good.
Now understand this clearly:

A **Doubly Linked List** solves one major limitation of SLL —
👉 **Backward traversal**.

But it comes at a cost. Let’s break it down properly.

---

# 1️⃣ What is a Doubly Linked List?
If you're building your DSA repo structure, this should go under:

```
02_linked_list/
    ├── singly_linked_list/
    └── doubly_linked_list/
```

Keep theory separate from implementation.

---


A **Doubly Linked List** is a linear data structure where:

* Each node contains:

  * **Data**
  * **Pointer to next node**
  * **Pointer to previous node**

So every node knows:

* Who comes after it
* Who comes before it

---

# 2️⃣ Structure of a Node

```
+--------+--------+--------+
|  Prev  |  Data  |  Next  |
+--------+--------+--------+
```

---

# 3️⃣ Visual Representation

```
NULL ← 10 ⇄ 20 ⇄ 30 → NULL
```

Detailed view:

```
        +------+------+------+
NULL ←  |Prev | 10  | Next |  → 
        +------+------+------+
               ⇅
        +------+------+------+
        |Prev | 20  | Next |
        +------+------+------+
               ⇅
        +------+------+------+
        |Prev | 30  | NULL |
        +------+------+------+
```

---

# 4️⃣ Why Do We Need Doubly Linked List?

### Problem in Singly Linked List:

* Can't move backwards
* Deleting a node requires access to previous node
* Some operations become harder

### DLL Solution:

* Easy backward traversal
* Easier deletion of a known node
* Useful for bidirectional navigation

---

# 5️⃣ Basic Operations

---

## 🔹 1. Traversal

### ➤ Forward Traversal

```
temp = head
while temp != NULL:
    print(temp.data)
    temp = temp.next
```

### ➤ Backward Traversal

Start from tail:

```
temp = tail
while temp != NULL:
    print(temp.data)
    temp = temp.prev
```

⏱ Time Complexity: O(n)

---

## 🔹 2. Insertion

---

### ➤ A) Insert at Beginning

Steps:

1. Create new node
2. new->next = head
3. head->prev = new
4. head = new
5. new->prev = NULL

```
Before:
NULL ← 10 ⇄ 20 → NULL

Insert 5

After:
NULL ← 5 ⇄ 10 ⇄ 20 → NULL
```

⏱ Time: O(1)

---

### ➤ B) Insert at End

If tail is maintained:

1. new->prev = tail
2. tail->next = new
3. tail = new
4. new->next = NULL

⏱ Time: O(1)

If tail not maintained → O(n)

---

### ➤ C) Insert at Position

1. Traverse to position
2. Adjust 4 pointers:

```
new->next = current
new->prev = previous
previous->next = new
current->prev = new
```

⏱ Time: O(n)

---

## 🔹 3. Deletion

---

### ➤ A) Delete from Beginning

1. temp = head
2. head = head->next
3. head->prev = NULL
4. free(temp)

⏱ Time: O(1)

---

### ➤ B) Delete from End

1. temp = tail
2. tail = tail->prev
3. tail->next = NULL
4. free(temp)

⏱ Time: O(1)

---

### ➤ C) Delete a Specific Node

Adjust:

```
node->prev->next = node->next
node->next->prev = node->prev
free(node)
```

⏱ Time: O(n) (to find node)

---

# 6️⃣ Time Complexity Summary

| Operation                 | Time Complexity |
| ------------------------- | --------------- |
| Access by index           | O(n)            |
| Search                    | O(n)            |
| Insert at beginning       | O(1)            |
| Insert at end (with tail) | O(1)            |
| Delete at beginning       | O(1)            |
| Delete at end             | O(1)            |

---

# 7️⃣ Memory Representation

Each node requires:

* Data
* 2 pointers (prev + next)

So memory cost is higher than singly linked list.

---

# 8️⃣ Advantages

✔ Bidirectional traversal
✔ Easier deletion
✔ Efficient insertion/deletion at both ends
✔ Better for navigation systems

---

# 9️⃣ Disadvantages

❌ Extra memory usage
❌ More pointer manipulation (error-prone)
❌ Slightly complex implementation

---

# 🔟 Applications

* Browser back & forward navigation
* Undo/Redo functionality
* Music playlist next/previous
* LRU Cache implementation
* Deque implementation

---

# 🧠 Singly vs Doubly Linked List

| Feature            | Singly   | Doubly |
| ------------------ | -------- | ------ |
| Pointers per node  | 1        | 2      |
| Backward traversal | ❌        | ✔      |
| Memory usage       | Less     | More   |
| Deletion ease      | Moderate | Easy   |

---

# ⚠ Important Edge Cases

You must handle:

* Empty list
* Single node list
* Deleting head
* Deleting tail
* Inserting at position 1

---

# 🔥 Common Interview Questions

1. Reverse a doubly linked list
2. Convert DLL to circular DLL
3. Implement LRU Cache
4. Delete all occurrences of a value
5. Find pair with given sum in sorted DLL

---

# 🎯 What You Should Focus On

* Pointer updates (this is where most students mess up)
* Handling NULL carefully
* Drawing diagrams before coding

---

