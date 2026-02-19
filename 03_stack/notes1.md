# 📚 STACK — Complete Notes (Part 1: Theory)

---

# 🧠 1. What is a Stack?

A **Stack** is a linear data structure that follows:

> 🔥 **LIFO — Last In, First Out**

The last element inserted is the first one removed.

### 🥞 Real-Life Example

Stack of plates:

* You put a plate on top.
* You remove the top plate first.

That’s exactly how a stack behaves.

---

# 🟢 2. Basic Terminology

* **TOP** → Pointer/index to the top element
* **Push** → Insert element
* **Pop** → Remove element
* **Peek/Top** → View top element
* **isEmpty** → Check if stack is empty
* **isFull** → Check if stack is full (array case)

---

# 📦 3. Visual Representation

## 🟢 Empty Stack

```
   ┌───────┐
   │       │
   └───────┘
     TOP = -1
```

---

## 🟢 Push 10

```
   ┌───────┐ ← TOP
   │  10   │
   └───────┘
```

---

## 🟢 Push 20

```
   ┌───────┐ ← TOP
   │  20   │
   ├───────┤
   │  10   │
   └───────┘
```

---

## 🟢 Push 30

```
   ┌───────┐ ← TOP
   │  30   │
   ├───────┤
   │  20   │
   ├───────┤
   │  10   │
   └───────┘
```

---

## 🔴 Pop Operation

Removing top:

```
   ┌───────┐ ← TOP
   │  20   │
   ├───────┤
   │  10   │
   └───────┘
```

👉 30 is removed first (LIFO)

---

# ⚙️ 4. Operations Explained

## 1️⃣ Push

* Increment TOP
* Insert element at TOP

---

## 2️⃣ Pop

* Remove element at TOP
* Decrement TOP

---

## 3️⃣ Peek

* Return top element
* Do not remove it

---

## 4️⃣ isEmpty

Condition:

```
TOP == -1
```

---

## 5️⃣ isFull (Array Case)

Condition:

```
TOP == MAX - 1
```

---

# ⚠️ 5. Stack Errors

## 🔴 Stack Overflow

Occurs when pushing into a full stack.

```
[10][20][30]
      ↑
    TOP = MAX-1

Push → ❌ Overflow
```

---

## 🔴 Stack Underflow

Occurs when popping from empty stack.

```
TOP = -1
Pop → ❌ Underflow
```

---

# ⏱️ 6. Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Push      | O(1)       |
| Pop       | O(1)       |
| Peek      | O(1)       |
| isEmpty   | O(1)       |

Stack is extremely efficient.

---

# 🎯 7. Applications of Stack

## ✅ Function Calls (Call Stack)

```
main()
  ↓
func1()
  ↓
func2()
```

Stack:

```
TOP → func2()
        func1()
        main()
```

When func2 ends → popped
Then func1 → popped

---

## ✅ Parenthesis Checking

Used to validate expressions like:

```
((a+b) * c)
```

---

## ✅ Expression Conversion

* Infix → Postfix
* Infix → Prefix

---

## ✅ Undo / Redo

Used in:

* Text editors
* Browser history

---

## ✅ Backtracking

Used in:

* DFS
* Maze solving
* Recursion

---

# 🧩 8. Stack vs Queue

| Feature   | Stack    | Queue |
| --------- | -------- | ----- |
| Principle | LIFO     | FIFO  |
| Insertion | Same end | Rear  |
| Deletion  | Same end | Front |

