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
The main goal of a capacitor is to smooth the fluctuation of the voltage supplier. But it can have many other purposes if you design it well.
- inductance:























# Circuit Analysis
Kirchhoff's laws, nodal/mesh analysis, Thévenin/Norton, transient circuits
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
