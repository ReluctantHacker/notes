# basic rule
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
