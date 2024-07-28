class Node {
    public int data;
    Node next;

    public Node() {
    }

    public Node(int data) {
        this.data = data;
        this.next = null;
    }

    public Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }

    public Node convertArrayToLinkedlist(int[] arr) {
        Node head = new Node(arr[0]);
        Node ptr = head;
        for (int i = 1; i < arr.length; i++) {
            Node temp = new Node(arr[i]);
            ptr.next = temp;
            ptr = ptr.next;
        }
        return head;
    }

    public void Traversal(Node head) {
        Node ptr = head;
        while (ptr != null) {
            System.err.println(ptr.data);
            ptr = ptr.next;
        }

    }
};

public class convertArrayToLinkedlist {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5 };
        Node head = new Node();
        head = head.convertArrayToLinkedlist(arr);
        head.Traversal(head);
        head.Traversal(head);
    }
}