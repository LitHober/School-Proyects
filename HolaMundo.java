import java.util.Scanner;

public class HolaMundo
{
	public static void main(String[] args) {
		
		Scanner s = new Scanner (System.in);
		System.out.println("¿Como te llamas?");
		String nombre = s.nextLine();
		System.out.println("Hola " + nombre + "!");

	}

}
