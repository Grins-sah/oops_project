# 🗺️ Graph-Based Navigation System (C++)

A real-world **C++ OOP + DSA** project that mimics the core logic behind systems like **Google Maps** and **Uber**.  
It features modular design, shortest path algorithms, and extendable architecture using design patterns.

---

## 🚀 Features

- Add locations and roads dynamically
- Find shortest route using:
  - Dijkstra's Algorithm
  - BFS
  - A* (optional)
- Custom route strategy via **Strategy Pattern**
- Singleton-powered Navigator for centralized control
- Real-time road status updates (block/congestion)
- Extensible graph structure using STL

---

## 🧠 Concepts Used

- **OOP**: Inheritance, Polymorphism, Encapsulation, Abstraction
- **DSA**: Graphs (Adjacency List), Dijkstra, BFS, A*, Priority Queue
- **Design Patterns**: Strategy, Singleton
- **Advanced C++**: Templates, Smart Pointers, STL Containers

---

## 🛠️ Setup Instructions

```bash
g++ -std=c++17 main.cpp -o navigator
./navigator

```
## Sample Usage
```cpp
Navigator* nav = Navigator::getInstance();
nav->addLocation("A", 12.5, 77.2);
nav->addLocation("B", 12.6, 77.3);
nav->addRoad("A", "B", 5.5, 40);
nav->setStrategy(new DijkstraRoute());
nav->findRoute("A", "B");
```
## 🏫 Author
Made with 💻 by `Grins Sah`