// 8. Input temperature in Fahrenheit and convert into Celsius.


import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		 Scanner sc= new Scanner(System.in);  
       System.out.println("Enter temperature in Fahrenheit - ");  
        
       float fahrenheit= sc.nextInt(); 
       System.out.println("temperature in Fahrenheit : "+fahrenheit+"°F"); 
       ConvertFahrenheitToCelsius(fahrenheit);
	}
	private static void ConvertFahrenheitToCelsius(float tempF){
	   
	    float celsius = ((tempF-32) * 5/9);
	    System.out.println("temperature in celsius : "+celsius+"°C");
	
	}
}
