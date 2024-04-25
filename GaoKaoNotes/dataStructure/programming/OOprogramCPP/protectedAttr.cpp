#include <iostream>
/*
private 成員是類的私有成員，它們只能在該類的成員函數中訪問和使用，對外部是不可見的，也不會被子類繼承。
protected 成員是受保護的成員，它們能夠被子類繼承並在子類中使用，但在類的外部是不可見的，只能在類的成員函數中訪問和使用。
public 成員是公共的成員，它們可以在類的內部和外部訪問和使用，也會被子類繼承。
*/

class testParent {
	private:  // 不會被child繼承
		int private_attr;
	protected: // 會被child繼承, 但與private一樣, 只能在class(或instance)內部自己使用
		int protected_attr;	
	public: // 會被繼承, 且能在class(或instance)內部和外部使用
		int public_attr;
};

