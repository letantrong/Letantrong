#include <bits/stdc++.h>

typedef struct Node* node;
struct Node{
	int Data;
	node Next;
};


node makeNode(int x){
	node tmp =  new Node();
	tmp->Data = x;
	tmp->Next = NULL;  //con tro NUlL
	return tmp;
}


//kiem tra rong
bool empty (node a){
	return a == NULL;
}


int Size(node a){
	int count = 0;
	while( a != NULL){
		++count;
		a = a->Next;  // gan gia tri tiep theo cho Node hien tai
		// cho node hien tai nhay sang node tiep theo
	}
	return count;
}

// them phan tu vao dau danh sach lien ket
void insertFirst(node a, int x){
	node tmp = makeNode(x);
	if( a == NULL){
		a = tmp;
	}
	else{
		tmp->Next = a;
		a = tmp;
	}
}
	
	
// Them phan tu vao cuoi danh sach
void insertLast(node a, int x){
	node tmp = makeNode(x);
	if(a == NULL){
		a = tmp;
	}
	else{
		node p = a;
		while(p-> Next!= NULL){
			p = p->Next;
		}
		p->Next = tmp;
	}
}

// Them phan tu o giua danh sach
void insertMidle(node a, int x, int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n -1){
		printf("vi tri chen khong hop le!");
	}
	if(n == 1){
		insertFirst(a,x); return;
	}
	else if(n == pos +1){
		insertlast(a,x); return;
	}
	node p = a;
	for(int i =1; I < pos -1; i++){
		p = p->Next;
	}
	node tmp = makeNode(x);
	tmp->Next = p->Next;
	p->Next = tmp;
}

// xoa phan tu o dau
void deleteFirst(node a){
	if( a == NULL){
		return;
	}
	a = a->Next;
}


// xoa phan tu o cuoi
void deletelast(node a){
	if( a== NULL) return;
	node truoc = NULL , sau = a;
	while(sau->Next != NULL){
		truoc = sau;
		sau = sau->Next;
	}
	if(truoc == NULL){
		a = NULL;
	}
	else{
		truoc->Next = NULL;
	}
}
int main () {
	node head = NULL;
}
