# rag-deadlock-simulator

Resource Allocation Graph (RAG) Deadlock Simulator

A simple and educational C-based simulator that models process–resource interactions using a Resource Allocation Graph and performs deadlock detection using a DFS cycle detection algorithm.

This project is made for Operating Systems Lab and demonstrates how deadlocks form when processes compete for limited resources.

🧠 Features

Add Process nodes

Add Resource nodes

Add Request edges (P → R)

Add Allocation edges (R → P)

Display the entire RAG

Detect deadlocks using DFS

Menu-driven CLI interface

Clean, simple, exam-friendly C implementation

✔ Processes & Resources

Each node is either:

PROCESS (P)

RESOURCE (R)

✔ Edges

P → R = Process is requesting a resource

R → P = Resource is allocated to a process

✔ Deadlock Detection

The algorithm:

Builds a directed graph

Runs DFS

If it detects a cycle → Deadlock exists

Simple, clear, and matches OS theory perfectly.

🧪 Sample Input
1 → Add Process
2 → Add Resource
3 → Request Edge P → R
4 → Allocation Edge R → P
5 → Display Graph
6 → Detect Deadlock

🛠️ Technologies Used

Language: C

Compiler: GCC (Ubuntu/Linux)

Concepts Used:

Resource Allocation Graph

Wait-For Graph

DFS Cycle Detection

Menu-driven CLI

📎 Future Enhancements

GUI visualization (GTK / Python binding)

Graphviz export

Real OS-level resource monitoring

Multi-threaded simulation

