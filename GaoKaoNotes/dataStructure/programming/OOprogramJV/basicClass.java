class testClass1 { // 沒有public則為default
	// java 同c++一樣有modifier(public, private, protected), 不一樣的是c++採用public: int xxx; private: int yyy....
	public int testVar1 = 1;  // 所有class都可以用
	private int testVar2 = 2;  // 只有declared class可以用
	/* --------------------------------------------------------------------------- */
	// 若想要在該class之外能夠開放控制private變數, 有一招叫做"get and "set", 就是encapsulation
	// getter
	public int getVar2() {
		return testVar2;
	}
	// setter
	public void setVar2() {
		this.testVar2 = 3;
	}
	/* --------------------------------------------------------------------------- */
	protected int testVar3 = 3;  // 同package條件下, declared class和其subClass可用

	// 若沒有modifier
	int testVar4 = 4;  // default, 同package條件下, 所有class都可用
	
	// 靜態static方法
	int testVar5 = 5;  // need an instance
	static int testVar6 = 6; // don't need an instance to implement this
}

public class basicClass {
	public static void main(String[] args) {
		System.out.println(testClass1.testVar6); // --->靜態變數不須創對象即可用
		testClass1 testInstance1 = new testClass1();   // ---> java創建物件的方式與c++語法不大一樣, 她必須要有"new"
		System.out.println(testInstance1.testVar1);
	}
}
