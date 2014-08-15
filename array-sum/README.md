Array sum
---------

For the givven array calcualte sum of the elements.

# Python

    given_array = []
    user_input = ""
    print "Enter elements of array (input incorrect number or empty line to finish):"
    while(True):
    try:
        user_input = input("element = ")
        given_array.append(float(user_input))
    except:
        break

    sum = 0
    for element in given_array:
        sum += element
    print "Sum: =", sum

# Java

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

# JavaScript

    var givenArray = [];
    var sum = 0;
    
    do {
        var userInput = prompt("Enter element (leave empty or enter incorrect number format to finish): ");
        var element = Number(userInput);
        if(element)
            givenArray.push(element);
    } while(element)
    
    for (var i =0; i<givenArray.length; i++) {
        sum += givenArray[i];
    }
    
    alert(sum);
