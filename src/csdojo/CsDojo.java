
package csdojo;

import java.util.ArrayList;
import java.util.Arrays;

public class CsDojo {
    public static void main(String[] args) {
       
     LinkedList <Integer> list=new LinkedList();
     list.addFirst(12);
     list.addFirst(13);
     list.addFirst(45);
     list.addLast(12);
     list.addLast(11);
     list.addFirst(10);
     list.add(3, 517);
     System.out.println("List of elements:");
     list.transverse();
     System.out.println("Head:"+list.getFirst());
     System.out.println("Tail: "+list.getLast());
  
     System.out.println("Middle element of the list are:"+list.findMiddle());
     System.out.println("\nFirst element being removed:"+list.removeFirst());
     System.out.println("\nElement being removed at index 1:"+list.remove(1));  
     System.out.println("\nLast element being removed:"+list.removeLast());
     
     System.out.println("\nElement at index 2:"+list.get(2));
     System.out.print("\nPosition of 100 in the list: "+list.indexOf(45));
     System.out.println("");
     System.out.println("\nSet element 1 as 100");
     list.set(1, 100);
       
        
     System.out.println("\nAfter several operations:");
     list.transverse();
     System.out.println("Tail:"+list.tail.element);
     
     list.reverse1();
     System.out.println("After reverse:");
     list.transverse();
     
    
   
    }
  
}
