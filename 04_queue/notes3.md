# 📚 QUEUE — Part 3: Circular Queue

Now we solve the limitation of simple queue.

---

# 🧠 Idea of Circular Queue

Instead of moving in straight line:

```
0 → 1 → 2 → 3 → 4
```

We connect end to beginning:

```
0 → 1 → 2 → 3 → 4
↑                   ↓
←←←←←←←←←←←←←←←←←←←
```

It becomes circular.

---

# 📦 Visual Representation

Size = 5

Initial:

```
FRONT = -1
REAR  = -1
```

---

## 🟢 Enqueue 10, 20, 30

```
Index:  0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Queue = │10  │20  │30  │    │    │
        └────┴────┴────┴────┴────┘
         ↑              ↑
       FRONT           REAR
```

---

## 🔴 Dequeue twice

```
Index:  0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Queue = │    │    │30  │    │    │
        └────┴────┴────┴────┴────┘
               ↑         ↑
             FRONT      REAR
```

Now if we enqueue 40 and 50:

```
Index:  0    1    2    3    4
        ┌────┬────┬────┬────┬────┐
Queue = │40  │50  │30  │    │    │
        └────┴────┴────┴────┴────┘
         ↑          ↑
       REAR        FRONT
```

REAR wrapped around.

---

# 🔹 Circular Enqueue Algorithm

```
IF (REAR + 1) % MAX == FRONT
    Overflow
ELSE
    IF FRONT == -1
        FRONT = 0
    REAR = (REAR + 1) % MAX
    QUEUE[REAR] = value
```

---

# 🔹 Circular Dequeue Algorithm

```
IF FRONT == -1
    Underflow
ELSE
    value = QUEUE[FRONT]

    IF FRONT == REAR
        FRONT = REAR = -1
    ELSE
        FRONT = (FRONT + 1) % MAX
```

---

# 🟢 Condition for Full (Circular Queue)

```
(REAR + 1) % MAX == FRONT
```

---

# 🟢 Condition for Empty

```
FRONT == -1
```

---

# ⚖️ Simple vs Circular Queue

| Feature            | Simple Queue | Circular Queue   |
| ------------------ | ------------ | ---------------- |
| Memory Utilization | Wastes space | Efficient        |
| False Overflow     | Yes          | No               |
| Implementation     | Easy         | Slightly complex |
| Preferred          | Not ideal    | Better           |

---

# 🧠 Final Understanding

Queue:

* Follows FIFO
* Uses FRONT and REAR
* Enqueue at rear
* Dequeue at front
* Circular queue solves memory wastage

---