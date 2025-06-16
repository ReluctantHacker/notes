- in Vim, when you open a terminal by using the command ":terminal" or "ter", you would find that you can't scroll up or down in that terminal. In this time, you should doing the command "Ctrl + \" and then "Ctrl + n", this would make that terminal from "Input Mode" into "Normal Mode"! then you can use vim's jklh or other usual command to scroll up or down. You can use press "i" to go back to input mode just like editing text files.  For more details, "Ctrl + /" is actually telling vim that you want to do some special control, and then "Ctrl + n" is one of the special control.

- in Vim, the default intent when you push tab or change line, then file would show you 8 spaces, it's actually linux core's indent style. In most project cases, the spaces that indent should be is 4. here's the setting that makes intent 4 perfectly works, including making it the real 4 spaces indent
```
set tabstop=4 " when the char is "tab" it would show 4 space
set shiftwidth=4 " when the char is change line,it would show 4 space
set expandtab " this is make tab as 4 space char, those three setting is very important to make your text file clean with tab and space
```
