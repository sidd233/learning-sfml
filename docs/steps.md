## Level 1: Make things move

Move the circle with WASD.

You'll learn:

* Variables
* Position
* Input handling
* Frame updates

```text
WASD
 ↓
Update position
 ↓
Draw at new position
```

This is the foundation of every game.

---

## Level 2: Bouncing Ball

Make a circle that moves automatically and bounces off walls.

You'll learn:

* Velocity
* Collision detection
* Vector math

```cpp
position += velocity;
```

This single line is responsible for half the objects in video games.

---

## Level 3: Multiple Objects

Draw 100 circles.

Then 1000.

Then make them move independently.

You'll learn:

```cpp
std::vector
for loops
object management
```

Now you're writing actual simulations.

---

## Level 4: Build Pong

This is where everything starts clicking.

Features:

* Player paddle
* AI paddle
* Ball
* Score

You'll learn:

* Classes
* Collision
* Game states

Most beginner game dev courses start here.

---

## Level 5: Visualize Algorithms

As a CSE student, this is where SFML gets really interesting.

Imagine watching:

### Sorting

```text
█ █ █ █ █ █
↓
Bubble Sort
↓
Bars swap visually
```

### Pathfinding

```text
Grid
↓
A*
↓
See search happen live
```

### Graph Algorithms

```text
Nodes
↓
Dijkstra
↓
Shortest path highlighted
```

This combines C++ + DSA + graphics.

---

## Level 6: Make a Chess GUI

Since you already know programming and are not a complete beginner, this is a fantastic project.

Features:

* Chessboard
* Piece sprites
* Drag and drop
* Move validation

Skills:

```text
Classes
Inheritance
Polymorphism
STL
Architecture
```

This starts looking like real software engineering.

---

## Level 7: Build a Tiny Game Engine

After a few projects you'll notice repetition:

```cpp
Player
Enemy
Bullet
```

all have:

```cpp
Update()
Render()
Position
```

You start building abstractions:

```cpp
class Entity
{
public:
    virtual void update();
    virtual void render();
};
```

Congratulations, you're now discovering why game engines exist.

---

1. Move circle with WASD
2. Bouncing ball
3. Pong
4. A* Pathfinding Visualizer
5. Chess GUI
6. Small 2D game (Asteroids or Space Invaders)