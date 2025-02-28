# Qt Application: Square Calculation  

## Project Description  
This project is a **Qt-based GUI application** that allows users to **input a number and calculate its square**.  
The program is designed with **Qt's signal-slot mechanism**. 

## Features  
- **Graphical User Interface (GUI)** built using Qt widgets.   
- **Real-time calculation** of the square of the entered number.  
- **Reset functionality** to enter new numbers.  
- **Exit button** to close the application.  

---

## Main Components  

### **Win**
- Manages the user interface.
- Contains:
  - **Input field (`QLineEdit`)** to enter a number.
  - **"Calculate" button (`QPushButton`)** to compute the square.
  - **Output field (`QLineEdit`)** to display the result.
  - **Exit button** to close the application.
- Uses **Qt signal-slot connections** to handle user input and calculations.

###  **StrValidator (Custom Input Validator)**
- Inherits from `QValidator`.
- Ensures only valid numerical input is accepted.

---

## How the Application Works  
1. **The user enters a number** in the input field.  
2. **Presses "Enter" or clicks "Next"** to compute the square.  
3. **The result appears** in the output field.  
4. If the user enters an invalid value, an **error message** is displayed.  
5. The **"Next" button resets the input field**, allowing the user to enter another number.  
6. The **"Exit" button closes the application**.  

---

## Installation & Execution  

### **Qt 5.15.2** 
