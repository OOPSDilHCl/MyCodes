public class DeleteLastNode{
  public static class Node{
    int val;
    Node next;
    Node(int val){
      this.val=val;
    }
  }
  Node head;
  public void insertAtHead(int val){
    Node newNode=new Node(val);
    newNode.next=head;
    head=newNode;
  }
  public void deleteLastNode(){
    if(head==null){
      return;
    }
    else if(head.next==null){
      head=null;
      return;
    }
    Node curr=head;
    while(curr.next.next!=null){
      curr=curr.next;
    }
    curr.next=curr.next.next;
  }
  public void print(){
    if(head==null){
      System.out.println("null");
      return;
    }
    Node curr=head;
    StringBuilder sb=new StringBuilder();
    while(curr!=null){
      sb.append(curr.val).append("->");
      curr=curr.next;
    }
    sb.append("null");
    System.out.println(sb);
  }
  public static void main(String[] args){
DeleteLastNode list=new DeleteLastNode();
    list.insertAtHead(1);
    list.insertAtHead(0);
    list.insertAtHead(2);
    list.insertAtHead(5);
    list.print();
    list.deleteLastNode();
    list.print();
    list.deleteLastNode();
    list.print();
    list.deleteLastNode();
    list.print();
    list.deleteLastNode();
    list.print();
    list.deleteLastNode();
    list.print();
  }
}