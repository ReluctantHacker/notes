# Basic nature of probability and statistics
In short, we can say that Probability tells you how to go from a population to a sample, and statistics tell you how to go from a sample to a population.

Before we start, there's some important mathematical terms we should know:
  * **Population**: A **set** of all the data. For example, a population of a city means all the people in that city is our samples. In short, total data collection we want to discuss.
  * **Sample**: One Randomly selected from population. Of course, you can have many samples ramdomly selected.
  * **Outcome Value**: the value of randomly selected sample.
  * **Expected Value**: Which is the reasonable 'predicted value' of a sample drawn from the population. This value is the sum of all data points multiplied by their respective probabilities of occurrence (it is not the average value of the samples, don't get confused, the concepts are different).

Expected value is derived from Population and Sample. So the only two basic concept ideas are Population and Sample. All the other theories or ideas are came from those two basic concepts.

Before we go further, there's one thing that we need to comfirm or "define", that is **Random**. Yeah! Because probability is based on random events. We can't go further if we have no definition of random.

> [!NOTE]
> Randomness is **Unpredictability** of a sequence. Give you a sequence of numbers(or events) and you have no way to predict what the next number in the sequence will be, then the sequence is random.

But wait! If we have 99% for sure of next number in the sequence will be, can we say it's random? Yeah...but apparently it's not that random compare to for example only 1% for sure of next number would be, right? 99% for sure! We can say it's almost predictable. So we can't just say a sequence is random, we also need to define what is **Degree of Randomness**.

Something is random if it is based on a set of possible events and it cannot be predicted which event will take place. The degree of randomness of a random event increases with the number of possible events in the set. So it is reasonable to say that the outcome of a throw of a six sided die is more random than the outcome of a cointoss.

So the degree of randomness must be highly relavent with the number of possible events $n$. However, $n$ is not very suitable for definition of degree of randomness because when it comes to $n=1$, the degree of randomness should be $0$, not $1$. And moreover, XXXX.

A more natural definition would be **chosing times**. For example, if there is only $1$ event, then the chosing time would be only 0. If there are $2$ events, then the chosing time would be 1 time. If there ar $4$ events, then the chosing time would be 2 times which means you should chose from two events and then chose from two events again. So the chosing time, or so called the divergent time of the random tree should be the definition of degree of randomness we want, not the number of the branches in a node on the random tree.

This is exactly the definition of **Entropy**, which is also the basic idea of Shannon's data theory. In a uniform distribution over $n$ outcomes, the entropy is $log\left(n\right)$. A distribution with higher entropy is considered more random.

degree of freedom [reference](https://www.zhihu.com/question/26720278)



Binomial distribution to Normal distribution
---------------------
Two outcome values of samples. Suppose we are flapping a coin by N times, and want to know how many times it shows head or tails. Suppose we N=3, then there are {head, head}, {head, tail}, {tail, head}, {tail, tail}, 4 combinations(all combinations has the same possibility to shows). {head, tail} and {tail, head}, those two combinations represents 1 head result, so 1 head result has two combinations and this tells that 1 head result is two times possible than 2 heads result or 2 tails result.

Suppose we have P combinations of k heads result for flapping n times, we can write it as 
``` math
P(k) = C^n_k p^k q^{n-k} = \dfrac{n!}{k!(n-k)!}
```

When n goes to infinity, we can have that P(k) would converge to normal distribution. This truth classically prove by **Stirlin formula**. Classically, Stirlin formula was proved by **Wallis formula** which wasn't proved by Wallis himself but only for a guess. We can use calculus to prove Stirlin formula but be careful, classically Newton didn't prove calculus but only take a guess. The real proof you can check my calculus note.

The Stirlin formula:
``` math
\ln(n!) = \sum_{k=1}^{n} \ln(k) \approx \int_{1}^{n} \ln(x) dx
```

The more inituitively method is using Guass's method. Suppose 
``` math
lim_{n->\infty)} P(n, k) = f(k)
```

We want to prove that f is the normal distribution. Suppose, we have f(k) number of combinations if k times of head happens. And we have f(h) number of combinations if h times of head happens. Suppose we do the two round, the first round is f(k) and second round is f(h). Then what is the number of combinations of those two round together? 

Apparently, according to the combination theory, the total combination number of those two rounds would be 
``` math
f(k)f(h)
```

Now, we have one thing need to be proved or argue, f(k)f(h) is circular symmetry which means f(k)f(h) is the same if k^2+h^2 keep the value. In short, we need to prove this below:
``` math
f(k)f(h) = g(k^2+h^2) = g(r^2)
```


P(n, k) * P(n, h) = n! / k!(n-k)! * n! / h!(n-h)! = (n!^2) / k!h!(n-k)!(n-h)!

This is not natural because f(k)f(h) doesn't imply it is circular symmetry.



Multinomial distribution
------------------------
Multiple outcome values of samples. The important fact is that, if we have n outcomes values(or categories) the distribution diagram is n dimensional! In binomial distribution(Bernoullie trial, 1 or 0), if we have 10 tests, we want to know how many times the outcomes value is 1. This is simple combination problem. However, in **trinomial distribution**(0, 1, 2) problem, we want to know how many times the value is 1 or 2! There are two things we want to know. So the diagram would be 3 dimensional.

Why randomness generates "distribution"? The randomness should be totally unpredictable? The key point is that the number of events. [0, 1, 1], [1, 1, 0], [1, 0, 1]. They are all have two 1. However [1, 1, 1] is the only events of three 1.


> [!NOTE]
> The following notes is possibly wrong! Just read but dont' take it too seriously! ------>  The essence of randomness is "unpredictability (uncertainty)". It is impossible to predict what "event" will occur at a certain time and place. This is what we call randomness. However, the reason why there are "patterns" in randomness is that we impose some restrictions on it. For example, if we limit the possible "events" to a few types at a certain time and place, such as rolling a dice where the outcomes are only 1, 2, ...6, this is called "restricting the range of events". This restriction creates boundaries for randomness, leading to "patterns" and "distributions", which are certain "rules" of randomness. But if "randomness" itself has no restrictions, then the events that occur at any time and place are completely without boundaries, meaning any event can happen. Thus, there would be no "patterns", "distributions", or "rules". This is complete randomness—completely unpredictable randomness.

Normal distribution
-------------------


Random walk
-----------
**Random walk** is the reason behind **Diffusion** of particles system. And random walk also makes things very clear that we do need the idea of **standard deviation**. I actually had no idea why we need standard deviation until I learned random walk and matter wave of quantum mechanics.

Suppose we are flapping coin again by N times and notes the result for head means +1, tail means -1. All the possible combination like {+1, -1, +1, .........}, of course, when N comes to infinity,  
