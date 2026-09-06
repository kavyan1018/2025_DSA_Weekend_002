
class Node {

    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }

}

public class main2 {

    Node head = null;
    Node tail = null;

    // Insert at Start
    void insertAtStart(int data) {

        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
            tail.next = head;
        } else {

            newNode.next = head;
            head = newNode;
            tail.next = head;

        }
    }

    void insertAtEnd(int data) {

        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
            tail.next = head;
        } else {

            tail.next = newNode;
            tail = newNode;
            tail.next = head;

        }
    }

    void display() {

        if (head == null) {
            System.out.println("List is empty!!!!");
            return;
        }

        Node temp = head;

        do {
            System.out.print(temp.data + "->");
            temp = temp.next;
        } while (temp != head);

        System.out.println("Back to Head");
    }

    public static void main(String[] args) {

        main2 list = new main2();

        list.insertAtStart(20);
        list.insertAtStart(10);
        list.insertAtEnd(30);
        list.insertAtEnd(40);

        System.out.println("Circular Linked ist :");
        list.display();
    }

}
