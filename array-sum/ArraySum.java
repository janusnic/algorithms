import java.io.Console;
import java.util.*;

public class ArraySum {
    public static void main (String args[]) {
        Console console = System.console();
        double sum = 0;
        List<Double> givenArray = new ArrayList<Double>();
        
        System.out.println("Enter elements of array (input incorrect number or empty line to finish):");
        while(true) {
            String userInput = console.readLine("element = ");
            try {
                givenArray.add(Double.parseDouble(userInput));
            }
            catch(Exception e) {
                break;
            }
        }
        
        for(double element : givenArray) {
            sum += element;
        }
        
        System.out.println(sum);
    }
}
