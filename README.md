# learning-sfml

My journey learning SFML, modern C++, CMake, and game programming fundamentals from scratch.

The goal of this repository is not to build a finished game, but to document progress through small experiments and projects while learning how graphical applications work under the hood.

## Repository Structure

```text
.
├── build/
├── docs/
│   └── steps.md
├── src/
│   ├── main.cpp
│   └── move_circle.hpp
├── CMakeLists.txt
├── LICENSE.md
└── README.md
```

### Directory Overview

| Directory/File   | Purpose                                          |
| ---------------- | ------------------------------------------------ |
| `src/`           | Source code and experiments                      |
| `docs/`          | Notes, learnings, and development steps          |
| `build/`         | Generated build files (not intended for editing) |
| `archive/`       | Completed experiments                            |
| `CMakeLists.txt` | Build configuration                              |
| `README.md`      | Project overview                                 |

## Building

```bash
cmake -B build
cmake --build build
```

## Running

From the project root:

```bash
./build/bin/main
```

## Learning Roadmap

* [x] Create a window
* [x] Draw a circle
* [x] Move a circle with keyboard input
* [ ] Bouncing ball
* [ ] Multiple objects
* [ ] Pong
* [ ] Particle simulation
* [ ] Pathfinding visualizer
* [ ] Chess GUI
* [ ] Small 2D game

