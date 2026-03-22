# 📡 Network Packet Routing System

## 📌 Overview
The **Network Packet Routing System** is a C-based project that simulates how data packets are routed in a network using graph algorithms. It demonstrates efficient pathfinding and traversal techniques used in real-world networking.

---

## 🚀 Features
- 📍 Shortest path calculation using **Dijkstra’s Algorithm**
- 🔄 Graph traversal using **Breadth-First Search (BFS)**
- 🧠 Efficient routing logic based on weighted graphs
- 📂 Modular code structure for better understanding and maintenance

---

## 🛠️ Technologies Used
- C Programming Language
- Graph Data Structures
- Algorithms:
  - BFS (Breadth-First Search)
  - Dijkstra’s Algorithm

---

## 📂 Project Structure
.
├── main.c # Entry point of the program
├── graph.c # Graph implementation
├── graph.h
├── bfs.c # BFS algorithm
├── bfs.h
├── dijkstra.c # Dijkstra algorithm
├── dijkstra.h

---

## ⚙️ How It Works
- The network is represented as a graph.
- Nodes represent routers/devices.
- Edges represent connections between nodes.
- Weights represent distance or cost.
- The system calculates the best route for packet transmission.

---

## ▶️ How to Run

### 🔹 Step 1: Compile the program
```bash
gcc main.c bfs.c dijkstra.c graph.c -o output
