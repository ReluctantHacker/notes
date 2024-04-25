#include <iostream>

/*
在 C++ 中，當一個類需要繼承另一個類時，我們使用關鍵字 public 來指定繼承類的繼承方式。這裡的 public 表示子類對於基類的訪問權限。

將 public 放在父類之前是為了指定繼承的方式。具體來說，當一個類 Derived 繼承另一個類 Base 時，我們可以通過 public、protected 和 private 來指定子類對於基類成員的訪問權限。

public 繼承：表示基類的公共成員在子類中仍然保持公共性，可以在子類的外部使用。這意味著基類的公共成員在子類中的訪問權限保持不變。
protected 繼承：表示基類的公共和受保護成員在子類中變為受保護成員，只能在子類的成員函數中訪問，對外部是不可見的。
private 繼承：表示基類的所有成員在子類中都變為私有成員，只能在子類的成員函數中訪問，對外部也是不可見的。
通常情況下，我們使用 public 繼承來保留基類的接口，使得子類可以直接訪問基類的公共成員，並且可以通過子類的對象來訪問這些成員。這樣可以維護代碼的一致性和可讀性。
*/

class testBase {
	private:
		int privateAttr;
	protected:
		int protectedAttr;
	public:
		int publicAttr;
}

class child1: public testBase {  
	/* 
	    繼承自testBase的public屬性依舊是public
	    繼承自testBase的protected屬性依舊是protected
	    無法繼承testBase的private屬性(本來就無法)
	*/
}

class child1: protected testBase {
	/* 
	    繼承自testBase的public屬性變成protected
	    繼承自testBase的protected屬性依舊是protected
	    無法繼承testBase的private屬性(本來就無法)
	*/
}

class child1: private testBase {
	/* 
	    繼承自testBase的public屬性變成private
	    繼承自testBase的protected屬性變成private
	    無法繼承testBase的private屬性(本來就無法)
	*/
}
