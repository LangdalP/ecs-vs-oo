
# ECS vs OO

Simple litt benchmark meant to illustrate the difference in execution time when updating the positions of all entities in an ECS/Data-oriented approach vs an OO approach

## How to run

- Use CLion
- Alternatively use cmake directly to build. Figure out the rest yourself.

## Note about AttemptedInputs

If you peek inside `AttemptedInputs.h`, you'll see that I have ifdef-ed a bunch of additional fields. This is to simulate that an entity has many other components in addition to position. But since I am lazy, I just padded this class instead. You can comment out the definitions to see the impact it has on execution time.
