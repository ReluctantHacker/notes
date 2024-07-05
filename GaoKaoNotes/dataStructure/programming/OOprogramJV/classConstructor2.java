// java可以在main裡面自己創見母class的物件..
public class classConstructor2 {
	int x;
	public classConstructor2() {  // 跟c++基本差不多了, 都是建立在public, 且不須要設定返回型態
		x = 5; // 這裡跟c++也差不多了
	}
	public static void main(String[] args) {
		classConstructor2 testObj = new classConstructor2();
		System.out.println(testObj.x);
	}
}

