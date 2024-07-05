public class classConstructor {
	int x;
	public classConstructor() {  // 跟c++基本差不多了, 都是建立在public, 且不須要設定返回型態
		x = 5; // 這裡跟c++也差不多了
	}
}


class Main {
	public static void main(String[] args) {
		classConstructor testObj = new classConstructor();
		System.out.println(testObj.x);
	}
}

