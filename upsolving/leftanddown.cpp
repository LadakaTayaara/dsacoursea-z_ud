  // leftanddown.cpp, done using qwen3.5 offline
  #pragma once

  #include <vector>
  #include <iostream>

  /**
   * Problem: Left and Down
   * You can move either left or down from your current position
   * Goal: Find the minimum number of moves to reach the target position
   */
  class Position {
  private:
      int x;
      int y;

  public:
      Position(int x, int y) : x(x), y(y) {}

      int getX() const { return x; }
      int getY() const { return y; }

      bool isOrigin() const { return x == 0 && y == 0; }
      bool isTarget(int targetX, int targetY) const { return x == targetX && y == targetY; }

      Position getAfterMove(int direction) const; // 0: left, 1: down
  };

  class LeftDownSolver {
  private:
      int startX;
      int startY;
      int targetX;
      int targetY;

  public:
      // Constructor
      LeftDownSolver(int startX, int startY, int targetX, int targetY)
          : startX(startX), startY(startY), targetX(targetX), targetY(targetY) {}

      /**
       * Method: Find the minimum moves from start to target
       * @return int: minimum number of moves
       */
      int calculateMinimumMoves() {
          // Move count = max horizontal + max vertical distance
          int horizontalDistance = std::abs(targetX - startX);
          int verticalDistance = std::abs(targetY - startY);

          return std::max(horizontalDistance, verticalDistance);
      }

      /**
       * Method: Reconstruct the path taken
       * @return vector of Position objects: path from start to target
       */
      std::vector<Position> getPath() {
          std::vector<Position> path;
          Position current(startX, startY);
          path.push_back(current);

          while (!current.isTarget(targetX, targetY)) {
              // Check if moving left gets us closer to target
              if (current.getX() > targetX) {
                  current = current.getAfterMove(0); // move left
              } else {
                  // Move down
                  current = current.getAfterMove(1);
              }
              path.push_back(current);
          }

          return path;
      }

      /**
       * Method: Validate if a position is reachable
       */
      bool isValidPosition(int x, int y) {
          // Assuming non-negative coordinates for this problem
          return x >= 0 && y >= 0;
      }
  };

  // Main function to demonstrate the OOP solution
  int main() {
      // Example 1: Simple 3x4 grid from (1,1) to (2,3)
      LeftDownSolver solver(1, 1, 2, 3);

      std::cout << "=== Left and Down OOP Solution ===\n"
                << "Example 1: From (1,1) to (2,3)\n"
                << "Minimum moves: " << solver.calculateMinimumMoves() << "\n"
                << "Path:\n";

      for (const auto& pos : solver.getPath()) {
          std::cout << "(" << pos.getX() << "," << pos.getY() << ")\n";
      }

      // Example 2: Different coordinates
      LeftDownSolver solver2(0, 0, 5, 5);
      std::cout << "\n\nExample 2: From (0,0) to (5,5)\n"
                << "Minimum moves: " << solver2.calculateMinimumMoves() << "\n";

      return 0;
  }