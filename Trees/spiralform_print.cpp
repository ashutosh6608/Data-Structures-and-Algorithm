vector<int> LevelOrder(Node* root) {
    if (!root) return {};

    stack<Node*> s1;  // R to L
    stack<Node*> s2;  // L to R

    s1.push(root);
    vector<int> ans;

    while (!s1.empty() || !s2.empty()) {
        // Process R to L
        while (!s1.empty()) {
            Node* temp = s1.top();
            s1.pop();
            ans.push_back(temp->data);

            if (temp->right) s2.push(temp->right);
            if (temp->left)  s2.push(temp->left);
        }

        // Process L to R
        while (!s2.empty()) {
            Node* temp = s2.top();
            s2.pop();
            ans.push_back(temp->data);

            if (temp->left)  s1.push(temp->left);  // ✅ left first
            if (temp->right) s1.push(temp->right); // ✅ then right
        }
    }
    return ans;
}
