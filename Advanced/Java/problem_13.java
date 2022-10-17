import java.util.Stack;
 
class Test
{

    static int findMaxLen(String str)
    {
        int n = str.length();
 

        Stack<Integer> stk = new Stack<>();
        stk.push(-1);
 
        int result = 0;
 

        for (int i = 0; i < n; i++)
        {

            if (str.charAt(i) == '(')
                stk.push(i);
 
            else
            {
                if(!stk.empty())
                    stk.pop();
 
              
                if (!stk.empty())
                    result
                        = Math.max(result,
                                   i - stk.peek());
 
          
                else
                    stk.push(i);
            }
        }
 
        return result;
    }

    public static void main(String[] args)
    {
        String str = "((()()";
       

        System.out.println(findMaxLen(str));
 
        str = "()(()))))";
    
        System.out.println(findMaxLen(str));
    }
}
