 public static void targetSumPair(Node root, Node node, int tar) {
        if (node == null) {
            return;
        }

        targetSumPair(root, node.left, tar);

        int comp = tar - node.data;
        if (comp > node.data) {
            if (find(root, comp)) {
                cout<<node.data + " " + <<comp;
            }
        }

        targetSumPair(root, node.right, tar);
    }