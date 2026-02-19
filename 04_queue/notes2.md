# 📚 QUEUE — Part 2: Simple Queue (Linear Queue using Array)

This is the basic implementation.

---

# 🏗️ 1. Structure

We need:

* Array
* FRONT pointer
* REAR pointer

---

## 📦 Memory Representation

Size = 5

```
Index:  0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Queue = │10  │20  │30  │    │    │
        └────┴────┴────┴────┴────┘
         ↑                ↑
       FRONT             REAR
```

---

# 🔹 Enqueue Algorithm

```
IF REAR == MAX - 1
    Overflow
ELSE
    IF FRONT == -1
        FRONT = 0
    REAR = REAR + 1
    QUEUE[REAR] = value
```

---

# 🔹 Dequeue Algorithm

```
IF FRONT == -1 OR FRONT > REAR
    Underflow
ELSE
    value = QUEUE[FRONT]
    FRONT = FRONT + 1
```

---

# ⚠️ Major Problem in Simple Queue

After multiple dequeues:

```
[  ][  ][30][40][50]
       ↑        ↑
     FRONT     REAR
```

Now even if space exists at left side,
we **cannot reuse it**.

👉 This leads to **false overflow**.

This is why circular queue exists.

---

---

---
