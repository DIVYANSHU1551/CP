 public static Node add(Node node, int data) {
        if (node == null) {
            return new Node(data, null, null);
        }

        if (data > node.data) {
            node.right = add(node.right, data);
            return node;
        } else if (data < node.data) {
            node.left = add(node.left, data);
            return node;
        } else {
            return node;
        }
    }