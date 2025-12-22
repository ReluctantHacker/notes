/* There are 2 basic rules below:
1. There can be only 1 public class and it's name should be the name of the file name(This also means an important thing which is that java treats a file like a class, public class specifically. Not strictly but mostly does). So roughly, you can see a file is a class. It's not like other famous languages mostly treat a file as a modules. So roughly, we can conlude that java treat a file as a class, but other famous languages treat a file as a module.
2. Everything should be in a class
*/
public class basic {  // public class randomName {  ----> this also works but not recommended at all.// 
	// public使此method在該class或instance以外皆可讀, static使得該method不須建立instance即可以用. C++和C#都差不多
    // static 修飾詞的意思其實就是指該function是屬於class而不是instance(雖然你可以用instance去call這個function, 但編譯器會自動轉成為class所call. 其實c++和c#幾乎一樣(C++多一點點額外的東西)
    // (String[] args) 裡面的東西其實就是一個陣列宣告. 他表示args這個變數是一個string陣列, 與C#一樣的表示法. 但與C和C++正好相反, 在C和C++中, 會使用(String args[]), 常見的例子就是int testArr[];這樣的宣告. 但是在java和C#中就是int[] testArr;剛好相反, 這只是語法不同而已
    // 其實是這樣的: c++ came from c, And C# came from java which came from c++. 這是語言演化脈絡
	public static void main(String[] args) {   
		System.out.println("hello, world.");
	}
}

/* 基本執行方法如下(java 是需要編譯的語言)
1. javac basic.java
2. java basic
