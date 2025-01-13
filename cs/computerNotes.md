1. CPU原理. 所謂CPU(central processing unit), 其實就是"運算器", 最簡單的CPU其實就是加法器(當然這是極度簡化的狀況, 現代CPU遠遠不只). 我這裡說的加法器(1位元全加法器, 1-bit full adder), 即是二進位起可以有三個輸入, input(A, B, C_in), 兩個輸出, output(C_out, S), 其中A, B, C_in, C_out, S都是二進位, 只能是0, 或1. 加法器的物理實現仰賴電路設計, 邏輯上的實現仰賴"邏輯閘"的設計, 就是那些AND門, or門, not門有的沒的. 將許多加法器並聯再一起就變成可以計算多位元算數的加法器, 每一個加法器都表示一個位元, 例如0101+0001=0110, 就是由四個加法器構成, 代表四位元二進樹的家法, 他的輸出同樣也是四位元.
	reference: (一個精簡但準確的解說)
	https://blog.codylab.com/how-cpu-works/
	A. 現代CPU的構成, 主要是算術邏輯單元(ALU, Arithmetic logic unit), 控制單元(CU, control unit), 寄存器/暫存器(register)
		a. CU, CPU是電腦的大腦，而 Control Unit是CPU的艦長，負責發號司令負責叫ALU運算跟控制暫存器
		b. ALU, 負責實際運算的部份，Input 由 Control Unit 控制，運算完的結果透過 Output 或是 Flags 來讓 Control Unit 知道結果
		c. register, register時常被拿來與ram比較, 因為兩者除了速度不同, 似乎功能和目的是完全一樣的, 要理解區別, 必須先有"Memory Hierarchy(記憶體等級)"的概念(ref: https://shihyu.github.io/books/ch17s05.html), 現代電腦的memory hierarchy有四層結構, 依照訪問速度由快到慢為CPU register, cache, memory, hard disk(包含固態硬盤).  成本由高到低也是相同排序. 撇除成本問題, 為何不把所有的記憶體都用register代替? 更多更大的register難道不好嗎? 其實理由在於register不等同於ram, 在ram中, 越多ram越好, 但是cpu中每一個register都和ALU以及UC連結, 太多的register會讓整個線路過於壅擠, 這些物理電線路的電信號有機率彼此影響, 且解碼器也要多花些時間, 詳細原因需要學習IC設計及相關物理學才能徹底弄清楚, 從16個register變成32個register, 則多出不止16個線路(因為每個register都要和其他單元連結)
			😊. Instruction register: 把指令的種類輸出到 Control Unit
			😊. Instruction address register: 下一個指令所在的 address 輸出到 memory address register
			😊. Memory address register: 把 address 輸出到 Memory
		d. 匯流排, ALU, Control Unit 和 Register 透過共用的BUS來轉移資料

	B. CPU基本指令集:
		"Load" a number from RAM into the CPU
		"ADD" two numbers toether
		"STORE" a number from the CPU back out to RAM
		"COMPARE" one number with another
		"JUMP" IF Condition to another address in RAM
		"JUMP" to another address in RAM
		"OUT"put to a device such as a monitor
		"IN"put to from a device such as a keyboard

	C. RAM, 不是CPU的一部分, 但CPU主要與RAM互動. RAM主要分兩部份，Address 和 Data。CPU 可以要求從某個 Address 讀出 Data。而RAM的Data又可以分成好幾種類型: - 指令集 - 數字 - 另一個記憶體位置 - 字元

