# Qt Application: Counter with Signal-Slot Mechanism  

## Project Description  
This project is a **Qt-based GUI application** that implements a **counter system** with two synchronized fields. The first counter increments by `+1`, and every multiple of `5`, it triggers the second counter to increment.  
The program utilizes **Qt's signal-slot mechanism** to handle events and ensure seamless synchronization between counters.  

## Features  
- **Graphical User Interface (GUI)** built with Qt.  
- **Two counter fields (`Counter`)** that work in sync:
  - **First counter** increments by `+1` each time the button is clicked.  
  - **Second counter** increments when the first counter reaches a multiple of `5`.  
- **Real-time event handling** using **Qt signals and slots**.  
- **Exit button** to close the application.  

---

## Main Components  

### **Win**
- Inherits from `QWidget`.
- Contains:
  - **Two labels (`QLabel`)** for counter descriptions.
  - **Two counter fields (`Counter`)** based on `QLineEdit`.
  - **Two buttons (`QPushButton`)**:  
    - `" +1 "` button to increment the first counter.  
    - `"Exit"` button to close the application.
- **Manages layout and connects signals to slots**.

### **Counter (Custom Counter Widget)**
- Inherits from `QLineEdit` (text input field).  
- Implements **a custom slot `add_one()`**, which increments the counter.  
- Emits a **custom signal `tick_signal()`** every time the value reaches a multiple of `5`.  
- Used twice inside the `Win` class, creating a synchronized counting system.  

---

## How the Application Works  
1. The user starts the application, and both counters are initialized to `0`.  
2. Clicking the `" +1 "` button:
   - Increments the **first counter** by `+1`.  
   - If the number is a **multiple of `5`**, it **triggers the second counter**.  
3. The second counter updates only when it receives the `tick_signal()`.  
4. Clicking the `"Exit"` button closes the application.  

---

## 📌 Installation & Execution  

### **Qt 5.15.2**
