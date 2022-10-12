import java.util.Scanner;
import java.util.Arrays;
public class Main
{
  public static void main (String[]args)
  {
    Scanner sc = new Scanner (System.in);

    int fact = 0;
    String sent,word;
    System.out.println ("Please Enter the sentence seprated with space : ");
      sent = sc.nextLine ();
    System.out.println ("Please Enter the  word: ");
      word = sc.nextLine ();
      fact = findWordIndex (sent, word);	// function to calculate word's index in Sentence.
    if (fact >= 0)
	System.out.println ("Positin  of  " + word + " is: " + fact);
    else
	System.out.println ("Entered String does not contain this word : " +  word);
  }

  private static int findWordIndex (String sent, String word)
  {
    String[]arrOfStr = sent.split (" ");
    int index = Arrays.asList (arrOfStr).indexOf(word); // gives index of match else give negative. 
    return index;

  }
}
