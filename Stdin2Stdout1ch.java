import java.io.InputStreamReader;

public class Stdin2Stdout1ch {
	public static void main(String[] args) throws Exception {
		InputStreamReader ir = new InputStreamReader(System.in);
		int i = ir.read();
		while(i != -1){
			char c = (char) i;
			System.out.print(c);
			i = ir.read();
		}
	}
}
