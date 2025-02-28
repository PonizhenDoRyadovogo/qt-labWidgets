# Qt Application: Animated Moving Figures

## Project Description
This project is a **Qt-based application** that animates the movement of two geometric shapes (**a line and a square**). The movement is based on **trigonometric transformations**, and the application utilizes **Qt's signal-slot mechanism**.

## Main Components
The project consists of the following key classes:

### **Win (Main Window)**
- Defines the main application window.
- Contains the **`Area`** (drawing area) and a **"Close"** button.
- Closes the application when the button is clicked.

### **Area (Drawing Area)**
- Handles the drawing of shapes (`MyLine`, `MyRect`).
- Uses **`QPainter`** for rendering.
- Starts a timer for animation (`timerEvent`).
- Updates the angular displacement of shapes (`m_alpha`).

### **Figure (Abstract Shape Class)**
- Defines a common interface for all figures.
- Implements `move(float alpha, QPainter *painter)`, which updates the shape's position.

### **MyLine and MyRect (Specific Shapes)**
- `MyLine`: A line rotating around its center.
- `MyRect`: A square rotating similarly.

## How the Application Works
1. The `Win` window starts, containing the **drawing area** and a button.
2. `Area` creates two figures (`MyLine`, `MyRect`).
3. **A timer starts (50 ms interval), triggering `paintEvent()`**.
4. **On each frame**:
   - `m_alpha` increases.
   - `move()` recalculates **new shape coordinates** using `sin` and `cos`.
   - `paintEvent()` redraws the updated positions.
5. The animation continues **until the window is closed**.

**Qt version: 5.15.2**  
