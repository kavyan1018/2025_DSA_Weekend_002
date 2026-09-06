/*
class Node {

    int data;
    Node prev;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }

}

public class main {

    Node head = null;
    Node tail = null;

    // Insert at start
    void insertFirst(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = tail = newNode;
        } else {
            newNode.next = head;
            head.prev = newNode;
            head = newNode;
        }
    }

    // Insert at End 
    void insertEnd(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = tail = newNode;
        } else {
            tail.next = newNode;
            newNode.prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + "<-> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    void displayBackward() {
        Node temp = tail;

        while (temp != null) {
            System.out.print(temp.data + "<-> ");
            temp = temp.prev;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {

        main list = new main();

        list.insertFirst(20);
        list.insertFirst(40);

        list.insertEnd(30);
        list.insertEnd(50);

        System.out.println("Forward :");
        list.displayForward();

        System.out.println("Backward :");
        list.displayBackward();

    }

}
 */

class Node {

    int data;
    Node next;
    Node prev;

    Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

public class main {

    Node head = null;
    Node tail = null;

    void insertAtStart(int data) {

        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
        } else {

            newNode.next = head;
            head.prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int data) {

        Node newNode = new Node(data);
        if (head == null) {
            head = tail = newNode;
        } else {

            tail.next = newNode;
            newNode.prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {

        Node temp = head;

        while (temp != null) {

            System.out.print(temp.data + "<-> ");
            temp = temp.next;
        }
        System.out.print("null");
    }

    void displayBackward() {

        Node temp = tail;

        while (temp != null) {

            System.out.print(temp.data + "<-> ");
            temp = temp.prev;
        }
        System.out.print("null");
    }

    public static void main(String[] args) {
        main list = new main();

        list.insertAtStart(20);
        list.insertAtStart(10);
        list.insertAtEnd(30);
        list.insertAtEnd(40);

        System.out.println("Displaying the list from start:");
        list.displayForward();

        System.out.println("Displaying the list from end:");
        list.displayBackward();
    }
}
