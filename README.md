# [Problem F: Funny Sentences](https://nbhspc21.kattis.com/problems/nbhspc21.funnysentences)

A fun game for kids is to make sentences by selecting a subject, a verb, an object, and a prepositional phrase (we will limit ourselves to places here), which independently would make sense but that become funny when put together. For example, let’s say we have the following choices:
| subjects  | verbs       | objects     | place           |
| --------- | ----------- | ----------- | --------------- |
| Mommy     | danced with | a frog      | on the roof     |
| Daddy     | played with | a kangaroo  | in the yard     |
| My dog    | talked to   | a pig       | on the street   |
| My cat    | saw         | a cactus    | in the kitchen  |
| My friend | heard       | a reindeer  | at school       |

With these, we could have “My cat saw a frog in the yard.”, but also “Mommy danced with a pig on the roof.” (!!) Even more funny is to generate such sentences randomly. This is what you will have to do for this problem. However, we will assume that you do not have access to a random-number generator, so you will have to implement your own.

Computers actually use pseudo-random generators, which use a formula to calculate the next number in a sequence. For example, if I want to generate numbers between 0 and 4, starting with the number 1, I can generate the next numbers using the formula (a ∗ n + b) mod m, where the values of a, b, and m are provided (m is the number of possible values that can be generated, so 5 in our example above), and n is the previously-generated number. “mod m” means the remainder of the division by m. So assuming that a = 1, b = 3, m = 5, and the first n = 1, the sequence of random numbers would be generated this way:

- next number n = (a ∗ n + b) mod m = (1 ∗ 1 + 3) mod 5 = 4 mod 5 = 4

- next number n = (a ∗ n + b) mod m = (1 ∗ 4 + 3) mod 5 = 7 mod 5 = 2

- next number n = (a ∗ n + b) mod m = (1 ∗ 2 + 3) mod 5 = 5 mod 5 = 0

- next number n = (a ∗ n + b) mod m = (1 ∗ 0 + 3) mod 5 = 3 mod 5 = 3

and etc.
      
Note:
if your programming language does not have the “mod” operator, you can simply deduct m from the number until you reach a number that is smaller than m (e.g., 7 mod 5 = 7 − 5 = 2 and 13 mod 5 = 13 − 5 − 5 = 3).

The random sentence generated with the 4 values calculated above would be:

- The subject at index 4: “My friend”

- The verb at index 2: “talked to”

- The object at index 0: “a frog”

- The place at index 3: “in the kitchen”

## Input
The input to your program is first 3 positive integers, on separate lines: first the value for a, second the value for b, and then the value for m (n will always be 1 at the beginning). Then you get m subjects (one per line), then m verbs, then m objects, and finally m places (all one per line).

You can assume a, b and m are less than 50. No line is longer than 50 characters.
## Output
The output is m funny sentences generated using the formula above, one line per sentence. Add one space between each part of the sentence and add a period at the end.

Note:
Continue with the next value of n, even when you change to the next sentence.

## Sample Input 1
```
1
3
5
Mommy
Daddy
My dog
My cat
My friend
danced with
played with
talked to
saw
heard
a frog
a kangaroo
a pig
a cactus
a reindeer
on the roof
in the yard
on the street
in the kitchen
at school
```

## Sample Output 1
```
My friend talked to a frog in the kitchen.
Daddy heard a pig on the roof.
My cat played with a reindeer on the street.
Mommy saw a kangaroo at school.
My dog danced with a cactus in the yard.
```
