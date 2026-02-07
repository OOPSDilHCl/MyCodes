import java.util.*;
public class imp1
{
  public static void main(String[] args)
  {
/*Example→ 10.01 in decimal in binary is 1010.0000001010001111.... which is infinite and thus cut and thus actually stored as 10.009999999776482582... very close but not exact.Same way 0.1 and 0.2
0.1₁₀ ≈ 0.0001100110011001100110011…₂,
0.2₁₀ ≈ 0.001100110011001100110011…₂ thus 0.1+0.2≠0.3 exactly 0.30000000000000004 roundof.*/
    double x = 0.1 + 0.2;
    if(0.1+0.2!=0.3)
    System.out.printf("%.20f\n", x);
  }
}
