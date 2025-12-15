# basic rule
[basic reference tutorial](https://www.youtube.com/watch?v=GlGpSQsS8uc)
## namespace
A namespace can have many classes? right? the idea is pretty much like a module. So what's the difference?

A namespace can have many classes. After all, it is just something that can make sure that class name won't conflict each other. Like an example below:
``` c#
namespace ProjectA {
    public class Logger { }
}

namespace ProjectB {
    public class Logger { }
}
```

In the practical cases, because of the properties of namespace. People would roughly treat a namespace as a module. And most file would have and only have one namespace. So roughly, we can see any c# code file as a module file.

## variable type
In c language, variable type would automatically convert itself when it asset them, for example if you asset a double value to a int variable, the fractional part of double would be truncated, and automatically turned into an int value. However, in c#, it's stricter than C when it comes to type conversions.

 - var: use this key word, you have to assign a certain value in the beginning, and then compiler would automatically convert the variable type to the value you set.
 - int, long, double...: the variable type would be constrained by the key words. It means you set the variable type by your own self, not compiler set it automatically.

In a project, it's no problem to use both symbol if you have good guided rules. Basically, "var" used when it comes to obvious typed variable like "name" must be a string, "age" must be an integer, "temperature degree" must be a double, etc.
