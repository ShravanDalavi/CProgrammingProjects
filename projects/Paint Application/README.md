# Paint Application

## Description

This project implements a simple paint application using the SDL (Simple DirectMedia Layer) library. The application allows you to draw on a window using different colors and brush sizes. 

## Features

- **Draw with Mouse:** Use the left mouse button to draw on the window.
- **Change Colors:** Press `r` for red, `g` for green, `b` for blue, `k` for black, and `w` for white.
- **Adjust Brush Size:** Press the up arrow key to increase the brush size and the down arrow key to decrease it.
- **Quit Application:** Close the window or press the close button.

## Required Modules

- SDL2 library

## How to Install Required Modules

### On Ubuntu:

1. Update your package list and install the SDL2 library:

```sh
    sudo apt update
    sudo apt install libsdl2-dev
```

### On macOS:

1. Use Homebrew to install the SDL2 library:

```sh
    brew install sdl2
```

### On Windows:

1. Download the SDL2 development libraries from [libsdl.org](https://www.libsdl.org/download-2.0.php).
2. Follow the instructions provided to set up SDL2 with your compiler.

## How to Run the Script

1. **Clone the Repository:**

```sh
    git clone https://github.com/yourusername/paint-application.git
    cd paint-application
```

2. **Compile the Program:**

```sh
    gcc -o paint paint.c -lSDL2
```

3. **Run the Program:**

```sh
    ./paint
```

## Example Output

When you run the application, a window will appear where you can draw using your mouse. The console will show any error messages if the SDL library fails to initialize or create the window/renderer.



