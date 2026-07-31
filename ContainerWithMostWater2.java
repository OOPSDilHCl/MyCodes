public class ContainerWithMostWater2{
  public static void main(String[] args){
    int[] arr={4,3,2,1,10,9};
    int max_area=0,lt=0,rt=arr.length-1,height=0,area=0;
    while(lt<rt){
      height=Math.min(arr[lt],arr[rt]);
      area=height*(rt-lt);
      max_area=Math.max(area,max_area);
      if(arr[lt]<arr[rt]) lt++;
      else rt--;
    }
    System.out.println(max_area);
  }
}