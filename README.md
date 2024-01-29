# Genetic Algorithm Optimization

## Introduction

This C++ program implements a basic Genetic Algorithm (GA) for optimization. The GA is applied to find the optimal solution for a simple binary optimization problem. The goal is to evolve a population of binary strings to reach a solution that satisfies predefined fitness criteria.

## Problem Description

The problem involves optimizing a binary string of length 8. The objective function, represented by the `fitness()` function, evaluates each chromosome's fitness based on its binary representation. The algorithm aims to evolve a population of these binary strings to minimize the fitness function.

## Components

1. **Initialization (`init_gen()`):**
   - Initializes a population of 4 chromosomes, each with a binary string of length 8.

2. **Fitness Evaluation (`fitness()`):**
   - Evaluates the fitness of each chromosome based on its binary representation.

3. **Selection (`selection()`):**
   - Selects the two best chromosomes based on their fitness values for crossover.

4. **Crossover (`crossover()`):**
   - Performs a one-point crossover on the selected parent chromosomes to create two offspring.

5. **Mutation (`mutation()`):**
   - Introduces random mutations to the offspring chromosomes.

6. **Print (`print()`):**
   - Displays the chromosomes after mutation.


The program will display the initial population, perform selection, crossover, mutation, and print the population after each generation until the termination condition is met.

## Termination Condition

The algorithm continues to evolve the population until at least one of the chromosomes achieves the target fitness value of -1.

Feel free to modify the code and parameters for your specific optimization problem.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
