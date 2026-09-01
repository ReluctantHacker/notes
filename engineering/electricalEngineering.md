# Electrical Engineering Foundations
- Voltage(V): Energy potential per unit charge, $V=\frac{W}{Q}$, We use symbol W as energy to avoid conflicting with electric field E
- Current(A): Rate of charge flow, $I=\frac{Q}{t}$
- Power(W): Rate of energy transfer, $P=VI$
- Energy(J): The total amount of energy transferred, $E=\int{Pdt}$
- Resistance(ohm, $\Omega$): Energy taken by load per unit current flow, $R=\frac{V}{I}$
- Load: A device/system receiving electrical power, or the electrical demand it places on a source. 
The details idea of loads, you can check the note: "electricalPowersystem.md".
Here I came up another idea that can explain high voltage transmission causes lower lost of energy by transmission wires. According to the concept of Resistance, we know that higher voltage should have higher current, which leader to higher energy consumption. This is true, but the situation here is not what you think, it's kind of tricky here. When we have an electrical power generator with a constant power. Suppose we can control the voltage it provides. And it connects to a one big load which is the constant total user load with long metal wires. And suppose we can change the resistance of that load by free. Now, suppose the generator provides lower voltage, to make the load constant, we need a higher current, which makes us need to change the load's resistance smaller(V_lower/I_higher). And noticed here, the wire's resistance is not change, but because higher current, the energy lost it causes gets higher. If we reverse the situation, make provided voltage higher, to make load constant, the resistance of the load would be bigger, which makes the current lower. And this would make the energy lost of wires lower. This is why higher voltage would causes lower wire consumption
- capacitance(F): The charge stored per voltage provided, $C=\frac{Q}{V}$
The main goal of a capacitor is to smooth the fluctuation of the voltage supplier. But it can have many other purposes if you design it well. Usually write it as $\frac{dV}{dt}=\frac{I}{C}$, which means, telling how the changing rage of voltage is effect by Capacitance and current. Roughly speaking, we can see a capacitor as a buffer of voltage.
- inductance: $L=\frac{\lambda}{I}$ where $\lambda$ is magnetic flux linkage, but mostly we write it in the form of $V=L\frac{dI}{dt}$ to prevent magnetic form. Or more specific, $\frac{dI}{dt} = \frac{V}{L}. Rougly speaking, we can see a inductor as a buffer of current.

But since current and voltage is not independent values, so saying capacitors and inductors are buffers may kind of misleading. It's an easy way to capture the picture but remember the math is what makes you understand what exactly they are. 


# Circuit Analysis
- Kirchhoff's current laws, At a node/junction we have $\Sigma{I_in}=\Sigma{I_out}$
- Kirchhoff's voltage laws, around a closed loop we have $\Sigma{V}=0$
Well, with Kirchhoff's basic laws, we can do the math to find the voltage and current in most situations but some situations won't be easy, let's why we need the following nodal/mesh analaysis, although they are not new laws but just organized ways of applying kirchholl laws.
- Nodal analysis, Pick a reference node(usually ground), assign a voltage to every other important node, then use KCL to solve for those voltages. (Well, actully, I would probably do something very similar to nodal analysis after learning kirchhoff laws anyway without even knowing nodal analysis this term.)
- Mesh analysis, Mesh analysis takes the opposite perspective. Instead of focusing on nodes and voltages, we focus on loops and currents. Assume an unknown current for each independent loop → write KVL for each loop → solve the equations.
NA and MA are basically solving the same problem from different perspective.
- Thévenin's theorem: For a linear two-terminal network, its external behavior can be represented by an ideal voltage source $V_{th}$ in series with a resistance $R_{th}$. 
Basically saying that we can have an equivalent circuit for a linear two-terminal network. Take two points(terminals) in the circuit you want and assume that point being un-existed and then try to find the total resistance and voltage of the rest of the circuit.(try to make the calulation of that point a simpler math)
- Norton theorem: For a linear two-terminal network, we can represent the network as current source $I_N$ in parallel resistance $R_N$.
Baiscally saying the same thing that we can have a equivalent circuit, same as Thevenin but we in a different way.
Thevenin: Voltage source+series resistance
Norton: current source+parallel resistance
They represent the same external behavior, just in different forms, which means one underlying method, equivalent-circuit thinking, with two different forms.
- transient circuits
# AC Circuits & Frequency Analysis
Phasors, impedance, resonance, AC power, frequency response
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
