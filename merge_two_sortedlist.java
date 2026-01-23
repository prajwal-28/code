class Solution {  // javaCode
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        // Ek dummy node banaya (value 0) – iska kaam sirf starting mein help karna hai
        ListNode dummy = new ListNode(0);      // Flow: dummy node bana diya
        
        // current pointer jo nayi list banayega
        ListNode current = dummy;              // Flow: current abhi dummy pe point kar raha hai
        
        // Jab tak dono lists mein nodes bache hain
        while (list1 != null && list2 != null) {
            
            if (list1.val <= list2.val) {      // Agar list1 ka value chhota ya barabar hai
                current.next = list1;          // toh current ke next mein list1 laga do
                list1 = list1.next;            // aur list1 ko aage badha do
            } 
            else {                             // Warna list2 ka value chhota hai
                current.next = list2;          // current ke next mein list2 laga do
                list2 = list2.next;            // aur list2 ko aage badha do
            }
            
            current = current.next;            // current ko bhi aage badha do (nayi list banate jao)
        }
        
        // Ab ek list khatam ho chuki hogi (ya dono)
        // Jo bachi hai usko poori ki poori current ke next mein laga do
        
        if (list1 != null) {                   // Agar list1 mein kuch bacha hai
            current.next = list1;
        } else {                               // Warna list2 mein bacha hoga
            current.next = list2;
        }
        
        // Dummy node ko chhod ke asli head return karo
        return dummy.next;
    }
}
 
https://youtu.be/0ougDTvVOFI?si=McWGyxBZ1hjdnFd4