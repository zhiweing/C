
package csdojo;

public class LinkedList<E> {
    Node<E> head;
    Node<E> tail;
    int size=0;
    
   public void addFirst(E e){
      Node<E> firstNode=new Node<>(e);
      firstNode.next=head;
      head=firstNode;
      size++;
      if(tail==null){
          head=tail=firstNode;
      }
   }
   
   public void addLast(E e){
      if(tail==null){
          head=tail=new Node<>(e);
      } 
      else{
          tail.next=new Node<>(e);
          tail=tail.next;
          
      }
      size++;
   }
    public void transverse(){
       Node<E> node1=head;
       while(node1!=null){
           System.out.println(node1.element);
           node1=node1.next;
       }
    }
    
    public E removeFirst(){
        if(size==0){
          return null;  
        }
       
        else{
          Node<E>temp=head;
          head=head.next;
          size--;
          if(head==null){
              tail=null;
          }
          return temp.element;
        }
    }
    
    public E removeLast(){
        if(size==0){
            return null;
        }
        else if(size==1){
            return removeFirst();
        }
        else{
          Node<E>current=head;
          for(int i=0;i<size-2;i++){
            current=current.next;  
          }
          Node<E>temp=tail;
          tail=current;
          tail.next=null;
          return temp.element;
        }
  
    }
    public void add(int index,E e){
        if(index==0){
            addFirst(e);
        }
        else if(index>=size){
            addLast(e);
        }
        else{
            Node<E>current=head;
           for(int i=0;i<index-1;i++){
               current=current.next;
           } 
           Node<E>temp=current.next;
           current.next=new Node<>(e);
           current.next.next=temp;
           size++;
           /*
        Node<E>temp=new Node<>(e);
        temp.next=current.next;
        current.next=temp;
           */
        }
    }
    
    public E remove(int index){
        if(index<0||index>=size){
            return null;
        }
        else if(index==size-1){
            return removeLast();
        }
        else if(index==0){
            return removeFirst();
        }
        else{
            Node<E>current=head;
            for(int i=0;i<index-1;i++){
               current=current.next; 
            }
            Node<E>temp=current.next;
            current.next=temp.next;
            size--;  
            
            return temp.element;
        }
    }
    
    public boolean contains(E e){
       Node<E>temp=head;
       while(temp!=null){
           if(temp.element==e){
               return true;
           }
           temp=temp.next;
       }
       return false;
    }
    
    public E get(int index){
        if(index<0 ||index>=size){
            return null;
        }else{
         Node<E>temp=head;
         for(int i=0;i<index;i++){
             temp=temp.next;
         }
         return temp.element;
        }
    }
    
    public E getFirst(){
        return head.element;
    }
    
    public E getLast(){
        return tail.element;
    }
    
    public int countNodes(){
        int count=0;
        Node<E>temp=head;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        return count;
    }
   
    public void clear(){
        head=null;
        tail=null;
        size=0;
    }
    
    public void set(int index,E element){
       if(index<0||index>=size){
           return;
       } 
       Node<E>temp=head;
       for(int i=0;i<index;i++){
           temp=temp.next;
       }
       temp.element=element;
    }
    
    public int indexOf(E e){
        int index=0;
        Node<E>temp=head;
        while(temp!=null){
            if(temp.element==e){
                return index;
            }
            temp=temp.next;
            index++;
        }
        return -1;
    }
    
    public int lastIndexOF(E e){
       int lastIndex=-1;
       int index=0;
       
       Node<E>temp=head;
       while(temp!=null){
         if(temp.element==e){
             lastIndex=index;
         }  
         temp=temp.next;
         index++;
       }
       return lastIndex;
    }
    
    public void reverse(){
       Node<E> next=null;
       Node<E> previous=null;
       
       Node<E>current=head;
       while(current!=null){
          next=current.next;
          current.next=previous;
          previous=current;
          current=next;         
       }
       head=previous;
    }
    
  public void reverse1(){
      Node<E>next=null;
      Node<E>previous=null;
      
      Node<E>current=head;
      while(current!=null){
        next=current.next;  
        current.next=previous;
        previous=current;
        current=next;
  }
      head=previous;
  }
  
  public E findMiddle(){
      if(head==null){
          return null;
      }
      Node<E>slow=head;
      Node<E>fast=head;
      
      while(fast!=null && fast.next!=null){
         slow=slow.next;
         fast=fast.next.next;
      }
      return slow.element;
  }
    
  
}
    
    
   
       
   
    
    
    

