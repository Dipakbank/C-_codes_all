#include <iostream>
using namespace std;
class LIST
{
public:
 struct node
 {
 int PRN;
 string name;
 struct node *next;
 };
 typedef struct node *LINK;
 LINK head = NULL, temp = NULL, tail = NULL;
 void addPres(int PRN, string name)
 {
 if (head == NULL)
 {
 LINK newnode;
 newnode = (LINK) new (struct node);
 newnode->name = name;
 newnode->PRN = PRN;
 newnode->next = NULL;
 head = newnode;
 temp = newnode;
 tail = newnode;
 }
 else
 {
 head->name = name;
 head->PRN = PRN;
 }
 }
 void addSec(int PRN, string name)
 {
 if (head == NULL)
 {
 cout << "Please cretate list by adding the president name in it :)" << endl;
 }
 else
 {
 LINK temp = tail;
 LINK newnode;
 newnode = (LINK) new (struct node);
 newnode->name = name;
 newnode->PRN = PRN;
 newnode->next = NULL;
 temp->next = newnode;
 }
 }
 void addMembers(int PRN, string name)
 {
 if (head == NULL)
 {
 cout << "Please cretate list by adding the president name in it :)" << endl;
 }
 else
 {
 LINK temp = head;
 LINK newnode;
 newnode = (LINK) new (struct node);
 newnode->name = name;
 newnode->PRN = PRN;
 if (head->next == NULL)
 {
 head->next = newnode;
 newnode->next = NULL;
 }
 else
 {
 newnode->next = head->next;
 head->next = newnode;
 }
 tail = newnode;
 }
 }void display()
 {
 LINK temp_display;
 temp_display = head;
 int i = 0;
 while (temp_display != NULL)
 {
 cout << "THE Name of THE " << i << " POSITION IS THE " << temp_display->name << endl;
 cout << "THE PRN of THE " << i << " POSITION IS THE " << temp_display->PRN << endl;
 temp_display = temp_display->next;
 i++;
 }
 cout << "LIST is completed" << endl
 << endl
 << endl;
 }
 int len()
 {
 int leng = 0;
 LINK temp_len;
 temp_len = head;
 while (temp_len != NULL)
 {
 temp_len = temp_len->next;
 leng++;
 }
 cout << "THE LIST HAVE THE " << leng << " LENGTH" << endl;
 return (leng);
 }
 int deleteNode(int PRN)
 {
 if (head == NULL)
 {
 cout << "Please crete list first" << endl;
 }
 else if (head->next == NULL)
 {
 if (head->PRN == PRN)
 {
 free(head);
 }
 }
 else
 {
 LINK temp_prev = head;
 temp = head;
 int count = 0;
 while (temp != NULL)
 {
 if (temp->PRN == PRN)
 {
 break;
 }
 if (count)
 {
 temp_prev = temp->next;
 count++;
 }
 temp = temp->next;
 }
 LINK tempDelete;
 if (count == 0)
 {
 tempDelete = head;
 head = head->next;
 free(tempDelete);
 }
 else
 {
 tempDelete = temp;
 temp_prev->next = temp->next;
 free(tempDelete);
 }
 }
 }
 int deleteNode(string name)
 {
 }
}
;
int main()
{
 LIST akash;
 cout<<"Adding the secratroy no while no head is present"<<endl;
 akash.addSec(0, "ghadge");
 akash.display();
 cout<<"Adding the president node as head node"<<endl;
 akash.addPres(1, "akash");
 akash.display();
 cout<<"Edit the head while head is present but if it not present it will create new "<<endl;
 akash.addPres(1, "ash");
 akash.display();
 cout<<"Adding secratory node now it will not throw warning "<<endl;
 akash.addSec(0, "ghadge");
 cout<<"Adding some mebers in club :)"<<endl;
 akash.addMembers(2, "ash1");
 akash.addMembers(3, "ash2");
 akash.addMembers(4, "ash3");
 cout<<"calculating length of the list"<<endl;
 akash.len();
 cout<<"Deleting node with PRN 1"<<endl;
 akash.deleteNode(1);
 akash.display();
 cout<<"Deleting node with PRN 4"<<endl;
 akash.deleteNode(4);
 cout<<"Final list "<<endl;
 akash.display();
}