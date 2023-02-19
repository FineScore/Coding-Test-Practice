import java.util.*;

class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int count = sc.nextInt();
		sc.close();

		for(int i = 1; i <= count; i++) {
			for(int j = count-1; j >= i; j--) {
				System.out.print(" ");
			}
			for(int k = 1; k <= i; k++) {
				System.out.print("*");
			}
			System.out.println();
		}

	}

}
