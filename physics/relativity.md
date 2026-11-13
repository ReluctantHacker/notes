# Event
Event is a point on space-time, (R, t)

# Proper Time
Suppose two events A and B both occur in the inertial frame S′ at the same spatial position x′. Then the time difference between them is called their **proper time**. Proper time is a central idea, because it is the quantity that defines a **world line**, which we will discuss later.

Suppose two events C and D both occur in the inertial frame S′, but at different spatial positions. The time difference between them is not a proper time. The reason: to observe both events with one and the same clock, that clock would have to travel from the position of C to the position of D. In other word, you'll need a reference frame S to to measure that C and D have no position difference. Such S moves relative to S′, so it is not at rest in S′. A proper time must be measured by a clock at rest in the frame where both events occur at the same place. 

The reason proper time define as this way is because the convenience to compare two system when one of them, S', view things(Event A and B) as **static** which is the simplest situation to do the math, S view them as in motion.


When we talk about **velocity**, we mean the ratio of the spatial separation to the time separation between two events. For events $E_1$ and $E_2$ with coordinates ($x_1$, $t_1$) and ($x_2$, $t_2$), this is
``` math
v = \dfrac{x_2-x_1}{t_2-t_1}
```

If we accept that events are the only fundamental physical entities, then velocity can be defined entirely in terms of the relations between events, without assuming world lines or four-velocity as independent concepts. In special relativity, this position is tenable.



# Time dilation
We define time range by events(the detail you can see classicalMechanics notes), but observers get different time range of two events from different inertial reference frame.

In system S', we want to know a propert time of two events. Emit(Event_1) a light go up to the mirror and reflect back(Event_2), and get the spending time $\Delta t'$. From light emits and arrives, there are two events. In system S, observer observes same two events not same position, in other word, Event_1 moving to Event_2 in position.

``` math
\Delta t' = \sqrt{\dfrac{c^2-v^2}{c^2}} \Delta t = \dfrac{\Delta t}{\gamma}
```

There's one thing you might think weird or even contradictory. Observer-o sees two events have larger time difference. o' sees smaller one. However, they should see the same time dilation effect from both point of view, so what's going on here?

The key point is that, you defaultly think  two events should happens both in S and S' the same way. But they are not if you accept

1. Principle of Relativity
2. Constancy of the speed of light 

Suppose $\gamma=2$, in System S, 50 years past, S would see only 25 years past in system S' is true. However, according to the relavitity, S' should see S is the slower one, and find S is younger after some years. The key point is that 

- Event-A: passing 50 years in S
- Event-B: passing 25 years in S'

For S, A and B happen simultanesouly. But for S', they are not.

| event | S time line| S' time line|
|---|---:|---:|
| A：S 50y pass | 50y | 100y |
| B：S' 25y pass | 50y | 25y |

For System S, A and B happen at the same time t=50y, but for system S', A and B happen at t'=25y and t'=100y, not the same time.

Simultaneity is not absolute anymore, but a relative concept.

So who's the younger one after 50 years?
| event | S time line| S' time line|
|---|---:|---:|
| V：S 50y pass | 50y | 100y |
| W：S' 50y pass | 100y | 50y |
| X：S 25y pass | 25y | 50y |
| Y：S' 25y pass | 50y | 25y |

Event-X and Event-Y are not the same event, and not even happen in the same time for both system. In System S, he observes that Event-X happens at 50 years time point, but Event-Y at 100 years time point. In system S', he observes that Event-Y happens at 50 years time point, but Event-X happens at 100 years time point.

# Proper Distance
**Proper Distance** of two events are the space distance between two events when they are at the same time in S'. This is reasonable, because, intuitively, it's the same idea of classical distance. 

The more interesting thing is that there is a symmetry structure between the concept of proper distance and proper time. In proper time, we define two events A and B at same position, which mean "space static" between two events. In proper distance, we define two events C and D at same time, which means "time static" between two events. When you observe A and B in S which has relative velocity to S', you are not seeing proper time anymore, because A, B are not in the same position. When you observe C and D in S, you are not seeing proper distance, either, because C and D are not at the same time anymore.

It's easy to understand A, B. For C, D, suppose a train is at rest in frame S'. A lamp at the center of the carriage flashes, and the light reaches the rear end (event C) and the front end (event D). In S', the two ends are equidistant from the center and light speed is invariant, so the light reaches both ends simultaneously. Thus C and D are simultaneous in S', and the spatial distance between them in S' is their proper distance. Now observe the same two events from frame S, in which the train moves forward with speed v. The rear and moves toward the light while the front end moves away from it, so the light reaches the rear end first and the front end later. Therefore C and D are no longer simultaneously in S, and the spatial distance measured in S is not the proper distance; it is larger.

# Spatial Length(normally just length)
Spatial Length is actually the proper distance of two events when the system is the proper system. There's a very important idea of relative length. 

Event A and Event B occurs in system S' at the same time. Event C and Event D occurs in system S at the same time. Then if velocity of AC(transfer in same system) equal to velocity of BD(transfer in same system) equal to the velocity between S and S', then distance of AB is the length L0 in S' which is the distance of CD in S.

# Time Length
Time Length is actually the proper time in S' at the same position of two events when the system is the proper system.

If space and time are symmetry, we should discuss the version of length of time, too. For events E, F, G, H. E and F should be at same position in S'. G and H should be at same position in S. If velocity of EG equal to velocity of FH equal to the velocity between S and S', then time difference between EF in S' which is correspond to the time difference between GH.

AB are the two end points of a ruler. EF are the two end points of a "time ruler". CD and GH are the same situation.

> [!NOTE]
> In a time snapshot, the spatial points captured have no temporal separation between them—only spatial separation. This is the case where relativity reduces to the classical concept of distance: when we speak of “distance” in the classical setting, we implicitly assume that all spatial points in the universe share a universal time; at that time, one computes the spatial distance between any two points, and time has no effect on space.
>
> In a space snapshot, the temporal points captured have no spatial separation between them—only temporal separation. This is the case where relativity reduces to the classical concept of time interval: when we speak of “time interval” in the classical setting, we presuppose that all temporal points in the universe share an absolute space, so the time at every spatial point is the same, and space has no effect on time.

# Distance dilation
In system S', C and D are at same time. However, in S, it see C and D at different time. Suppose spatial distance of C and D in S is d'

# Space Contraction (Length contraction)
We define length(metric) as space distance of two events as they are at same time. However, notice here, because two events at same time in S' would not at the same time in S. So when we measure the length from different reference frame, we are actually measure two groups of events with one includes two events.

Using the exactly same thought experiment in time dilation. The S' measure the distance of a flash of light starting to go up(Event A) to the ceil mirror(Event B).
``` math
L' = 2c \delta t'
```



In time dilation, the observers observe the "orthogonal" motion of light relative to motion of the reference frame. 

They're actually measuring the time difference between two events. However, when you measuring the distance in space, you can't just say that $\Delta t c = \Delta d$ and $\Delta t' c = \Delta d'$ so distance dilation, too. It's not how it is because distance/length means velocity multiplies time. 

The distance should be difference of two different positions **at the same time**(simultaneously). In system S, for a bar with two ends point A and B, if we want to measure the distance between them.
``` math
L=x_B(t)-x_A(t)
```

And because only speed of light is constant, So it should be:
``` math
\dfrac{\Delta d}{\Delta t} = \dfrac{\Delta d'}{\Delta t'} = c
```


If time dilation, then according to the axiom of constant light speed to every reference frame, space should contracts because time dilates.
# World line(Worldline)

# Lorentz transformation

# Momentum Conservation
The reason momentum conserves in classical system, is because we assume the symmetry of space. So A-particle would do the same force to B-particle as B-particle do the same back with reverse direction if A, B particles are the same.

In classical term of momentum conservation, with Lorentz transformation, if object-A holds momentum conservation in system S, then it won't hold anymore in S'.
