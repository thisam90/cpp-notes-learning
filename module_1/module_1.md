|  A  |  B  |  C  | (A ∧ B) | (¬A ∧ C) | (A ∧ B) ∨ (¬A ∧ C) |
| :-: | :-: | :-: | :-----: | :------: | :----------------: |
|  T  |  T  |  T  |    T    |     F    |        **T**       |
|  T  |  T  |  F  |    T    |     F    |        **T**       |
|  T  |  F  |  T  |    F    |     F    |        **F**       |
|  T  |  F  |  F  |    F    |     F    |        **F**       |
|  F  |  T  |  T  |    F    |     T    |        **T**       |
|  F  |  T  |  F  |    F    |     F    |        **F**       |
|  F  |  F  |  T  |    F    |     T    |        **T**       |
|  F  |  F  |  F  |    F    |     F    |        **F**       |


(A AND B) OR (!A AND C) reads as follows:

Use B when A is true, otherwise use C

same as a hardware multiplexer : selec one input or another based on a control line.

The above is similar in c++ , with a ternary operator ```cpp int x = condition ? value1 : value2; ```


| Original                 | Simplified       | Reason                |
| :----------------------- | :--------------- | :-------------------- |
| `(A AND B) OR (A AND C)` | `A AND (B OR C)` | distributive law      |
| `(A OR B) AND (A OR C)`  | `A OR (B AND C)` | dual distributive law |
| `(NOT A OR B)`           | `A ⇒ B`          | implication form      |


**De Morgan's Law**

When you refactor or negate a condition , often we use De Morgan's Law implicitly

```cpp
if (!(x > 0 && y > 0)) { ... }

             same as
             
if ( x  <= 0 || y <= 0 ) { ... }

```