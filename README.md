# Random Sentence Constructor

A C++ project that assembles grammatically structured English sentences on the fly using randomized lookup arrays and string manipulation. This program models basic English grammar by drawing words at random from categorized lexical arrays—**articles**, **nouns**, **verbs**, and **prepositions**—to construct complete, structured sentences:

> `[Article] + [Noun] + [Verb] + [Preposition] + [Article] + [Noun].`

Each generated sentence begins with a capitalized first word, maintains proper spacing, and cleanly terminates with a period (e.g., *"The dog ran over a car."* or *"One girl skipped to some town."*).

## Objectives

- **String Manipulation:** Working with character arrays (`char[]` / C-strings) and standard string operations (`strcat`, `strcpy`, and ASCII-based letter casing with `<cctype>`).
- **Random Number Generation:** Seeding via `<ctime>` and scaling random values using the modulus operator (`%`) to match array bounds safely.
- **Modular Program Design:** Structuring reusable helper routines for random index selection, casing adjustments, and clean output formatting.
- **Memory & Array Bounds Safety:** Navigating fixed-size buffers while avoiding buffer overflows and guaranteeing proper null-termination (`\0`).

## Features

- **Grammar-Pattern Assembly:** Sequentially stitches together multiple parts of speech into coherent grammatical templates.
- **Dynamic Randomization:** Uses time-seeded pseudo-random number generation (`rand()`, `srand(time(NULL))`) to produce varied, unpredictable outputs on every run.
- **Text & Case Formatting:** Automatically capitalizes the first letter of the leading word and properly appends sentence-ending punctuation.
- **Lookup Tables:** Leverages structured 2D character arrays / string tables for quick random selection.
