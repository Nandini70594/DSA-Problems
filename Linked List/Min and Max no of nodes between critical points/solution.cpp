class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    int pos = 1;

    int first = -1;       // first critical point
    int prev = -1;        // previous critical point

    int minDist = INT_MAX;
    int maxDist = -1;

    ListNode* curr = head->next;
    ListNode* prevNode = head;

    while (curr->next != nullptr) {

        // Check if curr is a critical point
        if ((curr->val > prevNode->val && curr->val > curr->next->val) ||
            (curr->val < prevNode->val && curr->val < curr->next->val)) {

            // First critical point
            if (first == -1) {
                first = pos;
            }

            // We already have a previous critical point
            else {
                minDist = min(minDist, pos - prev);
                maxDist = pos - first;
            }

            prev = pos;
        }

        prevNode = curr;
        curr = curr->next;
        pos++;
    }

    if (minDist == INT_MAX)
        return {-1, -1};

    return {minDist, maxDist};
}
};