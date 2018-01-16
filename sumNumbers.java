class sumNumbers {
  static int sumNumbers(String str) 
  {
    int totalSum = 0;
    int tempNum  = 0;
    for(int i=0;i<str.length();i++)
    {
      if(Character.isDigit(str.charAt(i)))
      {
        String letter = String.valueOf(str.charAt(i));
        tempNum = tempNum*10 + Integer.parseInt(letter);
        if(i == str.length()-1)
          totalSum += tempNum;
      }
      else if(tempNum!=0)
      {
        totalSum += tempNum;
        tempNum = 0;
      }
    }
    return totalSum;
  }
  public static void main(String[] args) 
  {
    System.out.println(sumNumbers("7 11"));
  }
}