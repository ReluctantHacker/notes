# Electrical Engineering Foundations
## Voltage(V): 
- definition: Energy potential per unit charge, $V=\frac{W}{Q}$, We use symbol W as energy to avoid conflicting with electric field E
## Current(A): 
- definition: Rate of charge flow, $I=\frac{Q}{t}$
## Power(W): 
- definition: Rate of energy transfer, $P=VI$
## Energy(J): 
- definition: The total amount of energy transferred, $E=\int{Pdt}$
## Resistance(ohm, $\Omega$): 
- definition: Energy taken by load per unit current flow, $R=\frac{V}{I}$
## Load: 
- definition: A device/system receiving electrical power, or the electrical demand it places on a source. 
The details idea of loads, you can check the note: "electricalPowersystem.md".
Here I came up another idea that can explain high voltage transmission causes lower lost of energy by transmission wires. According to the concept of Resistance, we know that higher voltage should have higher current, which leader to higher energy consumption. This is true, but the situation here is not what you think, it's kind of tricky here. When we have an electrical power generator with a constant power. Suppose we can control the voltage it provides. And it connects to a one big load which is the constant total user load with long metal wires. And suppose we can change the resistance of that load by free. Now, suppose the generator provides lower voltage, to make the load constant, we need a higher current, which makes us need to change the load's resistance smaller(V_lower/I_higher). And noticed here, the wire's resistance is not change, but because higher current, the energy lost it causes gets higher. If we reverse the situation, make provided voltage higher, to make load constant, the resistance of the load would be bigger, which makes the current lower. And this would make the energy lost of wires lower. This is why higher voltage would causes lower wire consumption
## capacitance(F): 
- definition: The charge stored per voltage provided, $C=\frac{Q}{V}$
The main goal of a capacitor is to smooth the fluctuation of the voltage supplier. But it can have many other purposes if you design it well. Usually write it as $\frac{dV}{dt}=\frac{I}{C}$, which means, telling how the changing rage of voltage is effect by Capacitance and current. Roughly speaking, we can see a capacitor as a buffer of voltage.
## inductance: 
- definition: $L=\frac{\lambda}{I}$ where $\lambda$ is magnetic flux linkage, but mostly we write it in the form of $V=L\frac{dI}{dt}$ to prevent magnetic form. Or more specific, $\frac{dI}{dt} = \frac{V}{L}. Rougly speaking, we can see a inductor as a buffer of current.

But since current and voltage is not independent values, so saying capacitors and inductors are buffers may kind of misleading. It's an easy way to capture the picture but remember the math is what makes you understand what exactly they are. 

# Circuit Analysis
## Kirchhoff's current laws
- declaration: At a node/junction we have $\Sigma{I_in}=\Sigma{I_out}$
## Kirchhoff's voltage laws
- declaration: around a closed loop we have $\Sigma{V}=0$

Well, with Kirchhoff's basic laws, we can do the math to find the voltage and current in most situations but some situations won't be easy, let's why we need the following nodal/mesh analaysis, although they are not new laws but just organized ways of applying kirchholl laws.
## Nodal analysis
- declaration: Pick a reference node(usually ground), assign a voltage to every other important node, then use KCL to solve for those voltages. (Well, actully, I would probably do something very similar to nodal analysis after learning kirchhoff laws anyway without even knowing nodal analysis this term.)
## Mesh analysis, 
- declaration: Mesh analysis takes the opposite perspective. Instead of focusing on nodes and voltages, we focus on loops and currents. Assume an unknown current for each independent loop → write KVL for each loop → solve the equations.
NA and MA are basically solving the same problem from different perspective.
## Thévenin's equivalent circuit theorem: 
- declaration: For a linear two-terminal network, its external behavior can be represented by an ideal voltage source $V_{th}$ in series with a resistance $R_{th}$. 

Basically saying that we can have an equivalent circuit for a linear two-terminal network. Take two points(terminals) in the circuit you want and assume that point being un-existed and then try to find the total resistance and voltage of the rest of the circuit.(try to make the calulation of that point a simpler math)
## Norton's equivalent circuit theorem: 
- declaration: For a linear two-terminal network, we can represent the network as current source $I_N$ in parallel resistance $R_N$.

Baiscally saying the same thing that we can have a equivalent circuit, same as Thevenin but we in a different way.

Thevenin: Voltage source+series resistance
Norton: current source+parallel resistance

They represent the same external behavior, just in different forms, which means one underlying method, equivalent-circuit thinking, with two different forms.
## Linear circuit
A linear circuit is a circuit in which the voltage between any two nodes and the current through any branch are linear functions of the independent sources. In other words, it obeys the law of superposition. This means:
- Scaling: if you double a source's voltage (or current), the resulting circuit voltages/currents double.
- Multiple sources: If the circuit has, say, two independent sources S_1 and S_2, then the total response is:

Of course in real world, most cases are non-linear ones. However, A nonlinear circuit can often be approximated by a linear circuit around a particular operating state(at a particular time). That's the reason linear cases matter.

Well, for example, a resistor would often been seen as a linear component because it's V-I curve is approximately a straight line. But for a transistor, V-I relationship is much more complicated and generally nonlinear. But around a carefully chosen operating point (Q-point), the curve can often be approximated by a straight line. 

We intentionally choose an operating point that lies in a region where the transistor's behavior is sufficiently linear, then approximate the behavior around that point as linear. This makes the circuit much easier to design, control, and analyze, especially for amplifiers or ICs. 
## transient circuits
- declaration: A transient is the temporary changing behavior of a circuit as it moves from one operating state toward another, often a new steady state.
For example:

- Turn a circuit on → transient → steady state.
- Change the input voltage → transient → new steady state.
- Turn a circuit off → transient → possibly another steady state.
- Change a switch or component → transient → new state.

Theoretically, transients often occur because a circuit contains energy-storage(energy buffer) elements, mainly capacitors and inductors. These elements cannot change their stored energy instantaneously, so voltage and/or current must change over time.

Mostly, when a physical circuit changes from one state to another, the transition cannot generally happen instantaneously. The resulting transient is often not the desired final behavior, so we analyze it to understand and control how the circuit gets from the old state to the new one.

Sometimes, transient is intentional. Examples where a transition is intentionally used include:

- RC timing/delay circuits — the charging/discharging transition itself provides a time delay.
- Pulse-shaping circuits — a capacitor/inductor's transient response can turn an input waveform into a desired pulse.
- Relaxation oscillators — charging and discharging repeatedly is part of generating the oscillation.

# AC Circuits & Frequency Analysis
All the circuit-analysis methods you learned still apply to AC circuits. The main thing that changes is the element relationships you plug into KCL/KVL

With DC, after transients settle, voltages and currents can be constant. With AC, voltage/current continuously change with time, typically sinusoidally. So instead of asking only "What is the voltage/current. We often need to ask "How does the circuit respond to a singal at a particular frequency?" 

This is important because capacitors and inductors behave differently depending on frequency.
 
## Phasors
- declaration: A phasor is basically a compact mathematical representation of a sinusoidal signal
``` math
v(t) = 10 cos(\omega t + \dfrac{\pi}{6})
```
In short, it keeps magnitude and phase information
## impedance
This one is more tricky. Typically, for a normal resistor. The resistance and impedance of that resistor is the same.

Impedance is essentially the AC version of the voltage-to-current relationship, where the relationship can include phase difference. In other words, to find a resistance WITH PHASE information.
## resonance
## AC power
## frequency
## response
# Signals & Systems
LTI systems, convolution, Fourier/Laplace transforms, transfer functions
# Semiconductor Devices
PN junctions, diodes, BJTs, MOSFETs
# Analog Electronics
Amplifiers, biasing, small-signal models, differential amplifiers
# Operational Amplifiers & Feedback
Op-amps, feedback, filters, stability
# Digital Electronics
Logic gates, Boolean algebra, combinational/sequential circuits, FSMs
# Computer Architecture
CPU, ALU, registers, memory, instruction sets, microarchitecture
# Electromagnetics
Electric/magnetic fields, Maxwell's equations, waves, transmission lines, antennas
# Control Systems
Feedback, stability, transfer functions, PID, state-space
# Power Electronics
Switching, converters, rectifiers, inverters, PWM
# Electrical Machines & Power Systems
Transformers, motors, generators, three-phase systems, electrical grid
# Embedded Systems & Communications
Microcontrollers, ADC/DAC, sensors, communication protocols, modulation, RF
