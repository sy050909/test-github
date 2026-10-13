# 2024405110_박서연_HW3

class Node:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None


def insert(root, key):
    if root is None:
        return Node(key)

    if key < root.key:
        root.left = insert(root.left, key)
    elif key > root.key:
        root.right = insert(root.right, key)

    return root


def find_min(node):
    # 왼쪽 끝에 있는 노드가 가장 작은 값을 가짐
    while node.left is not None:
        node = node.left
    return node


def delete_node(root, key):
    if root is None:
        return None

    if key < root.key:
        root.left = delete_node(root.left, key)
    elif key > root.key:
        root.right = delete_node(root.right, key)
    else:
        # 자식이 없거나 하나만 있는 경우
        if root.left is None:
            return root.right
        if root.right is None:
            return root.left

        # 자식이 둘이면 오른쪽에서 가장 작은 값으로 바꿈
        min_node = find_min(root.right)
        root.key = min_node.key
        root.right = delete_node(root.right, min_node.key)

    return root


def inorder(root):
    if root is not None:
        inorder(root.left)
        print(root.key, end=" ")
        inorder(root.right)


root = None
data = [55, 15, 60, 8, 28, 90, 3, 18, 30, 48, 38, 50, 33, 32, 36]

for value in data:
    root = insert(root, value)

print("삭제 전:")
inorder(root)
print()

delete_value = 28
root = delete_node(root, delete_value)

print("삭제 후:")
inorder(root)
print()