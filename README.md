# 📘 Demand Paging Simulation

## 📌 Project Overview

This project demonstrates the concept of **Demand Paging** in a virtual memory environment, a key topic in **Operating Systems (OS)**.

Demand paging is a memory management technique where pages are loaded into main memory only when required. This project simulates how page faults occur and how the system handles them efficiently.

---

## 🎯 Objectives

- To understand the concept of **virtual memory**
- To implement **demand paging**
- To simulate **page fault handling**
- To analyze different **page replacement algorithms**

---

## ⚙️ Features

- ✔️ Simulates demand paging mechanism
- ✔️ Detects and handles page faults
- ✔️ Supports page replacement algorithms:
  - FIFO (First In First Out)
  - LRU (Least Recently Used)
  - Optimal Page Replacement

- ✔️ Displays page frames after each step
- ✔️ Calculates total page faults

---

## 🧠 Concepts Used

- Virtual Memory
- Demand Paging
- Page Fault
- Page Replacement Algorithms
- Memory Management (OS)

---

## 🛠️ Technologies Used

- Programming Language: (Python / Java / C++)
- IDE: VS Code / IntelliJ / Eclipse

---

## 📊 How It Works

1. User enters:
   - Number of frames
   - Page reference string

2. System checks if page is present in memory:
   - If YES → No page fault
   - If NO → Page fault occurs

3. Required page is loaded into memory
4. If memory is full → Page replacement algorithm is applied

---

## ▶️ Sample Input

```
Frames: 3
Pages: 7 0 1 2 0 3 0 4
```

## ▶️ Sample Output

```
Page Faults: 6
```

---

## 📂 Project Structure

```
Demand-Paging-Simulation/
│── src/
│   ├── main.(py/java/cpp)
│── README.md
```

---

## 🚀 Future Enhancements

- Add GUI for better visualization
- Compare performance of algorithms
- Real-time memory simulation

---

## 👨‍💻 Authors

- Muneebur Rahman
- Debjit Talukdar

---

## ⭐ Conclusion

This project helps in understanding how operating systems efficiently manage memory using demand paging and page replacement strategies.
