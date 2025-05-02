# Tennis Game Coding Dojo

Coding Dojo exercise to track the players' score during a game of tennis.

## Rules of Tennis Scoring (simplified)
- Scores: Love (0), Fifteen (1), Thirty (2), Forty (3)
- If both players have the same score:
    - 0–0 → "Love-All"
    - 1–1 → "Fifteen-All"
    - 2–2 → "Thirty-All"
    - 3–3 or more → "Deuce"
- If either player has 4 or more points:
    - Lead by 1 → "Advantage player"
    - Lead by 2 or more → "Game player"
- Normal scores: "Fifteen-Love", "Thirty-Fifteen", etc.

## Completing the exercise
- We follow the principles of TDD:
    - Starting with an initial failing test case.
    - One person fixes the failing test case.
    - That person then writes another failing test case.
    - Next person's turn...

## Building the project
```
cd <root or project>
mkdir build
cd build
cmake .. -GNinja
ninja test_tennis_game
```

## Running the tests
```
cd <root of project>
build/test/test_tennis_game
```
