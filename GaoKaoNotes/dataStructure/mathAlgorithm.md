# Find prime
## Trial division algorithm
This Algorithm which is first described by Fibonacci in 1202 and is saying that all the factors of a number n must be complementary with another factor. So there must be half of all of the factors are smaller(or squal to) than n^(0.5). Another half of all are bigger(or euqal to) than n^(0.5). The simple logic is like below:
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
So when you are trying to figure out whether a number is a prime or not, All you need to try is figure if n%i, i = 1, 2, 3...n^(0.5), if n%i == 0 or not. Because you only need to half of all the factors, another half is complementary. if n%i==0, then i is the factor of n which means n is not a prime. If there's no such i makes n%i == 0, means n is a prime.

You would see some people in some [case](https://www.youtube.com/watch?v=3PcIJKd1PKU) use trial range from 2 to n/2 rather than n^(0.5). This may for teaching purpose to avoid explaining square roots but of course it would be much slower.

However, of course, this algorithm is not very efficiency and it takes O(n^0.5) time complexity. People are smart to find some other ways.

## Sieve of Eratosthenes
Erastosthenes is an ancient greek dude(around 200 BC), friend of Archimedes, the first one who found the size of earth(and he knows that earth is round) by using shadows in different location at the same time. He also find the most efficient way to find primes in a given range, we call his method "Sieve of Eratosthenes". The algorithm you can read it from wikipedia. The time complexity is O(n log log(n)). If we use traivl division method to find primes in a given range, the time complexity should be O(n n^(0.5)) which is slower if you using differential method to find the speed.

# Find square root
In modern cpu, there are often sqrt instructions, so called hardware square root, most of them are faster and more precise than software square root. Here is a [reference](https://www.reddit.com/r/embedded/comments/16l6drt/why_hardware_inverse_square_root_is_still_faster/) discussed this. 
## Binary search algorithm
```
float sqrt(float n) {
    float low = 0;
    float high = n;
    float mid;
    float tolerance = 0.000001;

    while (high-low > tolerance) {
        mid = (high+low) / 2;
        if (mid*mid > n) {
            high = mid;
        } else if (mid*mid < n) {
            low = mid;
        } else {
            return mid;
        }
    }
    return mid;
}
```

# Others
[reference](https://www.youtube.com/watch?v=g1r3iLejTw0)
