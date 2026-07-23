# basic CPU
Basically, a CPU is just a "calculator". The most simple CPU is an "adder". Of course this is an extreme simplified example, modern CPU is way more complicated, but we can get the low-level concept of how CPU work. 

The simplest adder I mentioned above is 1-bit adder which is binary and can handle 3 inputs: ($A_in$, $B_in$, $C_in$) and 2 outputs: ($C_out$, $S$). The $C_in$ means previous "carry" need to input which means the adder need to know the two input number and also the previous adder's carry result. $C_out$ is the carry that current adder's carry result. All the value of input and output are either 1 or 0, totally binary. 

The physical implementation of an adder is based on the design of electric circuit. And logic implementation is based on the design of logic gates, the AND-gates, OR-gates and NOT-gates, etc.

When we collect many adders parallel, then we can do multi-bit calculation. For example, 0101+0001=0110, using 4 adders to do 4 bit addition, every adder represent a bit. The output is 4 bit long, too. 

# Semicondutor
Because a modern computer's calculation unit is full of transistors which are generally made with semiconductors, we have to talk about it.

Basically, a semiconductor is just an insulator whose energy gap is small enough that there are "some" carriers in the higher band at room temperatures on planet Earth. When the input voltage is high enough, it acts just like normal conductor. 

Unlike a metal, because semiconductors do have an energy gap, one can: 1) form junctions with built-in electric fields via doping allowing one to create situations of one-way flow or corridors of flow, and 2) in addition to doping, their conductivity can be varied over something like 10 orders of magnitude simply by applying an electric field which allows for the creation of a voltage-controlled switch. Thus we can create "wires" and "switches" of electricity in a single integrated chunk of material.

Can't a conductor do the same stuff more easily?

Metals can't form junctions and their conductivity is not tunable via an applied voltage/electric field so you can't create a "computing circuit" out of them.
[reference](https://www.reddit.com/r/AskPhysics/comments/m7r8qw/whats_the_point_of_semiconductors_isnt_it_just/)

The conductability is because of the outside orbit of the atom. Metals are big atoms. The top layer of electrons is very far away from their core, so they are only losely bound to it. This is called **delocalized electron** which means that electron is not tied to any specific atom or bond. 

> [!NOTE]
> There's a term in physics called **Free Electron** which also means that electrons has no restriction by any atom. The difference is that **delocalized electron** emphasis that the electron is not restricted by any atom. **Free electron**, on the other hand, emphasis that the electron is free to move. However, generally in consequence, they are talking about the same thing.

The outer electrons(**outer shell**, **most outside shell**, **valence shell**, three terms are saying the same thing) are basically as close to the neighouring atoms as they are to their original owner wich makes them able to just hop over with very little energy (the original atom wants to stay neutral so it will grab another losely bound electron from another neigbour). [reference](https://www.reddit.com/r/explainlikeimfive/comments/pyhqtf/eli5_why_do_metals_have_free_electrons/)

Or, in other words, we can say that when atoms are close enough, their outer electron orbitals would overlap with each other, allowing the electrons to move freely between atoms. This overlap is what creates the "sea" of electrons in metal lattice, contributing to their high conductivity.

The origin of the band theory is based on the consequence of quantum mechanical interactions within electrons of atoms in proximity to each other. [reference](https://www.quora.com/What-is-the-origin-of-the-formation-of-a-band-gap-in-the-band-structure-of-some-materials)

Question(I am not 100% sure, need to be clarified)
------------------------------------------------
If the distance between atoms is close enough, every outside shell's electron would be delocalized, which means electrons would be free.

This might be basic ground idea or at least relevent of superconductor which performed in low temperature makes the distance bewteem atoms get small.

Anyway, if the delocalized electrons are caused by the distance between atoms, that means we can make everything conductor if we give enough pressure on them. Like hydrogen become conductor when pressure is really high in Jupiter. 

In 1935, physicists Eugene Wigner and Hillard Bell Huntington predicted that under an immense pressure of around 25 GPa (250,000 atm; 3,600,000 psi), hydrogen would display metallic properties: instead of discrete H2 molecules (which consist of two electrons bound between two protons), a bulk phase would form with a solid lattice of protons and the electrons delocalized throughout. Since then, producing metallic hydrogen in the laboratory has been described as "the holy grail of high-pressure physics". [reference](https://en.wikipedia.org/wiki/Metallic_hydrogen)

# Transistor
All the electric elements are very tiny, integrated on chips today. Transistors are the most important of them. It is made with semiconductor which is insulator when the eletric voltage is low but a conductor when electric voltage is high enough. 



A transistor has three terminals:
  * **Emmiter**:
  * **Base**:
  * **Collector**:

# Structure of modern CPU
Modern CPU mainly constructured with 3 important part: 
  * **CU(Control Unit)**: CPU is the brain of a computer, CU is the brain of a CPU. It send tasks and control ALU and register. 
  * **ALU(Arithemtic Logic Unit)**: Doing the actual calculation. The input of ALU is controlled by CU. And the calculation result will send back to CU through output or "flags". 
  * **Register**:  Registers are often compared with RAM because except for the speed, they are pretty much doing the same thing. To truly understand the difference, you have to know a concept called [Memory Hierarchy](https://shihyu.github.io/books/ch17s05.html). According to accessing speed, from fast to slow(also from expensive to cheap), there are four layers of Memory Hierarchy: Register(CPU), cache(CPU), Memory(RAM), Hard Disk(including SSD). Regardless the costs, the reason why not all used registers is that CPU is very small.   Register use flip-flop electric disign, normal RAM unit using transistor plus a capacitor design which is simpler but more slower because of capacitor generally need time to charge.



		a. CU, CPU是電腦的大腦，而 Control Unit是CPU的艦長，負責發號司令負責叫ALU運算跟控制暫存器
		b. ALU, 負責實際運算的部份，Input 由 Control Unit 控制，運算完的結果透過 Output 或是 Flags 來讓 Control Unit 知道結果
		c. register, register時常被拿來與ram比較, 因為兩者除了速度不同, 似乎功能和目的是完全一樣的, 要理解區別, 必須先有"Memory Hierarchy(記憶體等級)"的概念(ref: https://shihyu.github.io/books/ch17s05.html), 現代電腦的memory hierarchy有四層結構, 依照訪問速度由快到慢為CPU register, cache, memory, hard disk(包含固態硬盤).  成本由高到低也是相同排序. 撇除成本問題, 為何不把所有的記憶體都用register代替? 更多更大的register難道不好嗎? 其實理由在於register不等同於ram, 在ram中, 越多ram越好, 但是cpu中每一個register都和ALU以及UC連結, 太多的register會讓整個線路過於壅擠, 這些物理電線路的電信號有機率彼此影響, 且解碼器也要多花些時間, 詳細原因需要學習IC設計及相關物理學才能徹底弄清楚, 從16個register變成32個register, 則多出不止16個線路(因為每個register都要和其他單元連結)
			😊. Instruction register: 把指令的種類輸出到 Control Unit
			😊. Instruction address register: 下一個指令所在的 address 輸出到 memory address register
			😊. Memory address register: 把 address 輸出到 Memory
		d. 匯流排, ALU, Control Unit 和 Register 透過共用的BUS來轉移資料


[reference](https://blog.codylab.com/how-cpu-works/)

# CPU Algorithm Instructions and their hardware implements
[計算機CPU除法實現reference](https://www.zhihu.com/question/55707696)

