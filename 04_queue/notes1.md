Alright. Let’s build **Queue** properly — structured and clean — just like you’d put in your DSA repo.

---

# 📚 QUEUE — Part 1: Theory

---

# 🧠 1. What is a Queue?

A **Queue** is a linear data structure that follows:

> 🔥 **FIFO — First In, First Out**

The first element inserted is the first one removed.

---

## 🚶 Real-Life Example

Line of people at a ticket counter:

* First person in line → First person served
* New people join at the back

That is exactly how a queue works.

---

# 🟢 2. Basic Terminology

* **FRONT** → Points to first element
* **REAR** → Points to last element
* **Enqueue** → Insert element at rear
* **Dequeue** → Remove element from front
* **Peek** → View front element

---

# 📦 3. Visual Representation

## 🟢 Empty Queue

```
FRONT = -1
REAR  = -1

[  ][  ][  ][  ][  ]
```

---

## 🟢 Enqueue 10

```
FRONT        REAR
  ↓            ↓
[10][  ][  ][  ][  ]
```

---

## 🟢 Enqueue 20

```
FRONT              REAR
  ↓                  ↓
[10][20][  ][  ][  ]
```

---

## 🟢 Enqueue 30

```
FRONT                    REAR
  ↓                        ↓
[10][20][30][  ][  ]
```

---

## 🔴 Dequeue

Remove from FRONT:

```
After removing 10:

      FRONT            REAR
        ↓                ↓
[  ][20][30][  ][  ]
```

👉 10 was removed first (FIFO)

---

# ⚙️ 4. Basic Operations

## 1️⃣ Enqueue

* Insert element at REAR
* Move REAR forward

---

## 2️⃣ Dequeue

* Remove element from FRONT
* Move FRONT forward

---

## 3️⃣ Peek

Return element at FRONT (without removing)

---

## 4️⃣ isEmpty

Condition:

```
FRONT == -1  OR  FRONT > REAR
```

---

## 5️⃣ isFull (Array Queue)

Condition:

```
REAR == MAX - 1
```

---

# ⚠️ 5. Queue Errors

## 🔴 Overflow

Trying to enqueue in full queue.

## 🔴 Underflow

Trying to dequeue from empty queue.

---

# ⏱️ 6. Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Enqueue   | O(1)       |
| Dequeue   | O(1)       |
| Peek      | O(1)       |

---

# 🎯 7. Applications of Queue

* CPU scheduling
* Printer spooling
* BFS in graphs
* Handling requests (servers)
* Call center systems

---

---

---


