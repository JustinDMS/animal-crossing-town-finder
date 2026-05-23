# Animal Crossing Town Generator

Performs a 1:1 town generation using a matching reconstruction of the algorithm used in Animal Crossing (2002). 

## How it works

Previously, I had written a tool that [generates a view of one town](https://github.com/JustinDMS/AC-Map-Preview) as a means of searching for a layout favorable enough for a tool-assisted Golden Rod speedrun. I quickly found that the iteration speed was lacking, clocking in at one town every 30 seconds. There had to be a better way.

Randomness in Animal Crossing is based on a single value. This value is an unsigned 32-bit integer, having 2^32-1 (~4.3 billion) possible states. It's the result of a calculation that uses the value itself. So, while its value at any given time is unreliable (thus well-suited for randomness), the order in which the value transforms is deterministic. By extension, this means town generation is reproducable given the same starting value, or "seed".

By using the public [Animal Crossing decompilation project](https://github.com/ACreTeam/ac-decomp) as reference, I extracted the town generation logic and molded it into a standalone program. When it was all said and done, this bumped the iteration speed up from 1 to ~200,000 every 30 seconds and succeeded in finding an improved layout for the speedrun. In theory, this program could be used to create a database of all ~4.3 billion generation results, searchable in constant `O(1)` time.

## Usage

**Requirements:** GCC, Make

Build:
```
make
```

Run:
```
build/ACTownGenerator.exe
```

## Credits

- Cuyler, as the main contributor to the [Animal Crossing decompilation project](https://github.com/ACreTeam/ac-decomp).