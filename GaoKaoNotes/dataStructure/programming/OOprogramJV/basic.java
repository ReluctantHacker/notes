/* There are 2 basic rules below:
1. There can be only 1 public class and it's name should be the name of the file name(This also means an important thing which is that java treats a file like a class, public class specifically. Not strictly but mostly does). So roughly, you can see a file is a class. It's not like other famous languages mostly treat a file as a modules. So roughly, we can conlude that java treat a file as a class, but other famous languages treat a file as a module.
2. Everything should be in a class
*/
public class basic {  // public class randomName {  ----> this also works but not recommended at all.// 
	// public使此method在該class或instance以外皆可讀, static使得該method不須建立instance即可以用
	public static void main(String[] args) {   
		System.out.println("hello, world.");
	}
}

/* 基本執行方法如下(java 是需要編譯的語言)
1. javac basic.java
2. java basic
