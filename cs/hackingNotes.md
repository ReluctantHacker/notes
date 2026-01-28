# Memory hacking

Buffer Overflow
---------------
I've noted the details of this trick in "cLanguageNotes.md", the technique is based on the fact that usual operating systems using virtual memory to manage real memory. 

The virtual memory has **Memory layout** which has **stack**, **heap**, **data**, **text**. When the program is loaded into process memory, data stored general variable, text stored the mechanical logic for the programming(including functions and all the logic of the program). Stack and Heap are for **executing** functions. 

When the programming running on a certain function in text, that variables in function would be loaded into stack(or heap) to calculate. This design is for reusing functions effectively. However, with this design, when the cpu done calculated in stack(or heap), it must focus back to text and continue the remain program. This means that stack has to remember the position in text it coming from. 

Actually stack has a single block of memory stored the address in text it coming from. And this makes hacker has chance to rewrite that block of memory to a fake address(usually somewhere in the stack), and cheat computer that it has already come back to text to run the remain program but it actually still running in stack. And when that stack has malicious mechine code that hacker input, then attack is successful executing.

But of course, this technique is obsolete. A lotta modern defended techs which are default built in operating systems nowaday would not let this happen, like **Non-executable stack/heap(NX, in short)** which basically let the stack region can't be executable. This automatically killed technique of classic buffer overflow attack. You need to use advanced version of buffer overflow to conquer this called **Return-Oriented Programming** which we are gonna talk about latter.

The modern operating system also use **Address space layout randomization** which we are also gonna talk about latter. 

Normally, attackers would use malicious machine code to open shell, and use shell to do the things below:
  * Privilege Escalation: Gain higher-level access, such as root or administrator privileges. This may done by Exploiting some vulnerabilities in system.
  * Creating New Users: This is for persistent access, usually all the attackers want to create an admin user.
  * Installing Backdoors: For ensuring remote access.
  * Exfiltrating Data: Steal sensitive information.
  * Deploying Malware:
  * Disabling Security Measures:
  * Modifying System Configurations: Make it easier to exploit the system in the future.

Normally, the main goal of all the attackers is trying to gain the Admin privileges. However, when the attacker successfully using buffer overflow technique to open the shell. The privilege of that shell is based on the running process. If the process attacker exploit is not running on admin but normal user, then basically, the shell buffer overflow technique opens would be normal privilege. In this situation, attackers would need Privilege Escalation which is totally a different and unrelated technique to buffer overflow. This means that if buffer overflow is successfuly exploited by attacker but the privileged is only normal user, the attacker need to find other way to do Privilege Escalation which we are gonna talk about in future.

Memory Leak
-----------
I've noted this concept in "cLanguageNotes.md" as well. This is not a hacking skill but more like a knowlage about how operating system manage memory. This may not directly cause being attack, however, still possible get hacked if attacker know this flaw in sofwaresystem. Basically it says heap memory doesn't release by programmer correctly which makes the process gaining more and more memory as the program keep request memory and finally leads to crash. 

Modern operating systems automatically reclaim all memory allocated by a process when that process terminates. This means that memory leaks are primarily a concern while the process is still running.

Stack Overflow
--------------
Buffer overflow means over the range of buffer. Stack overflow means over the range of stack. This usually happens when recursive function doesn't program right so the stack keep growing and finally pass the barrier of the stack. It may cover the memory which may have already been used by heap or other part of the memory layout.

This is not direct attacking method. However, it may be a potential security problem.

Return-Oriented Programming(ROP) 
--------------------------------
This technique is basically the advanced version of buffer overflow attack to overcome the NX. The classic attacking insert malicious machine code by attackers themself into stack(or heap). In ROP, attackers directly use some useful machine codes(we call Gadget here) that has already existed in program rather than use self coded inserted malicious machine code. [reference](https://secureteam.co.uk/articles/how-return-oriented-programming-exploits-work/)

The first exploit of this kind attack is by using libc which is well known and usually linked by other programs. The memory of libc's subroutine probably has already been studied over and over again. People may already know the memory of every functions. For example attacker can directly return address of system() function(in libc) which can start up a shell. And since libc is executable area, it doesn't violate the rule of NX.

This attack is called **Return-to-libc** which is the precursor of ROP and first implemented in 1997. 

In 2002, **Address Space Layout Randomisation(ASLR)** was introduced and became a standard. Modern compilers generate PIE(Position Independent Executable) to support ASLR. ASLR randomly arranges the address space positions of key data areas of a process so an attacker does not know which addresses to inject into the call stack in order to abuse libc or other known software libraries including the system Kernel. The introduction of ASLR and changes to many system libraries like libc that made it harder to abuse their functions spurred new research and in 2007 the Return-Oriented Programming technique was first demonstrated.

ROP Uses a sequence(or chain) of gadgets to perform arbitrary operations, providing greater control and flexibility. It can bypass more advanced defenses.

# Binary Exploitation

What is Binary Exploitation
---------------------------
Interacting with the compiled program in a way that takes advantage of its flaws to get what we want. The memory leak attack is one of Binary Exploitation. Here's a website are all about Binary exploitation attacking training [website](pwnable.tw). 


# What programming language?
[reference](https://www.reddit.com/r/hacking/comments/zsoe2x/i_see_a_lot_of_hacking_tutorials_recommending/)


# Data packets analysis
When you using wireshark, you would see **hex dump** on the right-down panel. The left part is just hex data, and the right part is the translation of hex data to ASCII code. The reason for this is that data payload may contains some pure text data with ASCII, so it defaulty use this. But of couse, the datas nowaday are usually encrypted, so it's more and more seldom that we can read the readable thing on that anymore. 

By the way, if the hex dump part shows "...", it means ascii code of that data unit is like controlling ascii code, like NULL, BEL, ESC..., etc.

You can use vim ":%!xxd" to view files as hex dump view. and use ":%!xxd -r" to change back.


