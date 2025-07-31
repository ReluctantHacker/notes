# Find prime
## Trial division algorithm
This Algorithm is saying that all the factors of a number n must smaller than n^(0.5). This is because of a simple logic:
```
for
a * b = n

if 
a > n^(0.5)
and 
b > n^(0.5)

Then multiplying both

a * b > n^(0.5)*n^(0.5) = n

Which is contradicts the fact that a * b = n. So at least one of a or b must be less than or equal to n^(0.5)
```
So when you are trying to figure out whether a number is a prime or not, you should try n%i, i = 1, 2, 3...n^(0.5), if n%i == 0, then i is the factor of n which means n is not a prime. If there's no such i makes n%i == 0, means n is a prime.

You would see some people in some [case](https://www.youtube.com/watch?v=3PcIJKd1PKU) use trial range from 2 to n/2 rather than n^(0.5). This may for teaching purpose to avoid explaining square roots but of course it's slower.

However, of course, this algorithm is not very efficiency and it takes O(n^0.5) time complexity. People are smart to find some other ways.

## Sieve of Eratosthenes
Erastosthenes is an ancient greek dude(around 200 BC), friend of Archimedes, the first one who found the size of earth(and he knows that earth is round) by using shadows in different location at the same time. He also find the most efficient way to find primes in a given range, we call his method "Sieve of Eratosthenes". The algorithm you can read it from wikipedia. The time complexity is O(n log log(n)). If we use traivl division method to find primes in a given range, the time complexity should be O(n n^(0.5)) which is slower if you using differential method to find the speed.
