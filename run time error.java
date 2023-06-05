
import java.util.*;
import java.util.Scanner;
public class RunErrorDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a =10, b=0, c;
		try {
			c=a/b;
			System.out.println(c);
		}
		catch(ArithmeticException e) {
			System.out.println("\n Divide by zero"+e);
		}

	}

}
