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

But wait! If we have 99% for sure of next number in the sequence will be, can we say it's random? Yeah...but apparently it's not that random compare to for example only 1% for sure of next number would be, right? 99% for sure! We can say it's almost predictable. So we can't just say some sequence is random, we also need to define how **The Degree of Randomness**.

Something is random if it is based on a set of possible events and it cannot be predicted which event will take place. The degree of randomness of a random event increases with the number of possible events in the set. So it is reasonable to say that the outcome of a throw of a six sided die is more random than the outcome of a cointoss.

So the degree of randomness must be highly relavent with the number of possible events $n$. 

The answer is that **Entropy** is the definition we want(This is also what Shannon thought). In a uniform distribution over $n$ outcomes, the entropy is $log\left(n\right)$. A distribution with higher entropy is considered more random.

The $log$ is for 


degree of randomness(Entropy)
degree of freedom [reference](https://www.zhihu.com/question/26720278)



Binomial distribution
---------------------
Two outcome values of samples


Multinomial distribution
------------------------
Multiple outcome values of samples. The important fact is that, if we have n outcomes values(or categories) the distribution diagram is n dimensional! In binomial distribution(Bernoullie trial, 1 or 0), if we have 10 tests, we want to know how many times the outcomes value is 1. This is simple combination problem. However, in **trinomial distribution**(0, 1, 2) problem, we want to know how many times the value is 1 or 2! There are two things we want to know. So the diagram would be 3 dimensional.

Why randomness generates "distribution"? The randomness should be totally unpredictable? The key point is that the number of events. [0, 1, 1], [1, 1, 0], [1, 0, 1]. They are all have two 1. However [1, 1, 1] is the only events of three 1.


> [!NOTE]
> The following notes is possibly wrong! Just read but dont' take it too seriously! ------>  The essence of randomness is "unpredictability (uncertainty)". It is impossible to predict what "event" will occur at a certain time and place. This is what we call randomness. However, the reason why there are "patterns" in randomness is that we impose some restrictions on it. For example, if we limit the possible "events" to a few types at a certain time and place, such as rolling a dice where the outcomes are only 1, 2, ...6, this is called "restricting the range of events". This restriction creates boundaries for randomness, leading to "patterns" and "distributions", which are certain "rules" of randomness. But if "randomness" itself has no restrictions, then the events that occur at any time and place are completely without boundaries, meaning any event can happen. Thus, there would be no "patterns", "distributions", or "rules". This is complete randomness—completely unpredictable randomness.


