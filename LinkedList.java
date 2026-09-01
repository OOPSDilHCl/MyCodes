public class LinkedList{
  public static void main(String[] args){
    LinkedList list=new LinkedList();
    list.addFirst(4);
    list.addFirst(3);
    list.addFirst(2);
    list.addFirst(1);
    System.out.println("List:");
    list.print();
    list.addLast(5);
    list.addLast(6);
    list.addLast(7);
    list.addLast(8);
    list.addLast(9);
    System.out.println("New List:");
    list.print();
    list.remove(8);
  /*list.removeLast();
    System.out.println("Final list:");
    list.print();
    list.reverse();
 System.out.println("Reverse the list:");
    list.print();*/
  }
  public void addLast(int val){
    Node newNode=new Node(val);
    if(head==null){
      head=newNode;
      return;
    }
    else if(head.next==null){
      head.next=newNode;
      return;
    }
    Node curr=head;
    while(curr.next!=null){
      curr=curr.next;
    }
    curr.next=newNode;
  }
  public void remove(){
    
  }
  Node head;
  public static class Node{
    int val;
    Node next;
    Node(int val){
      this.val=val;
    }
  }
  public void addFirst(int val){
    Node newNode=new Node(val);
    newNode.next=head;
    head=newNode;
  }
  public void print(){
    if(head==null){
      return;
    }
    Node curr=head;
    StringBuilder sb=new StringBuilder();
    while(curr!=null){
      sb.append(curr.val).append("->");
      curr=curr.next;
    }
    sb.append("null");
    System.out.println(sb.toString());
/* System.out.println(sb); sb will also work bcz println is overloaded function and supports object as parameters it internally does sb.toString(). */
  }
}