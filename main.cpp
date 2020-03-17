#include <iostream>
#include <vector>
#include <string>
using namespace std;                        //de la randul 5 pana la 57 este rezolvarea partiala prin structuri si functii
/*
struct Nod
{
    int n;

    Nod *next;
};
Nod *cap=NULL;

void inserareInceput(Nod* &cap, int valoare)
{
    //Creeam noul nod si ii atribuim valoarea din paramentru
    Nod *elem = new Nod;
    elem->n = valoare;
    elem->next = cap; //Mutam sageata catre primul element din lista
    cap = elem; //Inlocuim primul element din lista
}


void inserareFinal(Nod* &cap, int valoare)
{
    //Creeam noul nod si ii atribuim valoarea din paramentru
    Nod *elem_final = new Nod;
    elem_final->n = valoare;
    elem_final->next = NULL;
    if (cap == NULL) // In cazul in care lista noastra este vida, punem elementul in lista
        cap = elem_final;
    else
    {
        //Parcurgem lista pana la final
        Nod *nod_curent = cap;
        while (nod_curent->next != NULL)
            nod_curent = nod_curent->next;
        //Mutam sageata ultimului element catre elementul creat anterior
        nod_curent->next = elem_final;
    }
}

void stergere(Nod* predecesor)http://tutorialeplusplus.blogspot.com/2012/01/lista-circulara-simplu-inlantuita.html
{
    Nod* victima = predecesor->next;

    predecesor->next = predecesor->next->next;

    delete victima;
}
void afisareLista(Nod* cap)
{
    while (cap != NULL)
    {
        cout << cap->n << "\n"; // Afisam numarul stocat
        cap = cap->next;         // Mutam elementul curent la urmatorul element din lista
    }
}*/
/*void creare_lista()
{
    Nod *c;
    c=new Nod;
    cout<<"info ";
    cin>>c->info;
    if(!prim)

    {
        prim=c;
        prim->next=0;
        ultim=prim;
    }

    else

    {
        ultim->next=c;
        ultim=c;
        ultim->next=0;
    }
}*/
class Nod{
        public:
        int info;
        Nod *next;
        Nod (){
            int head=0;
            int tail=0;
            }
        ~Nod()
        {

        }
};

class Lista_circulara{
    private:
    public:
        void insInceput(int elem); // Inserare in fata primului nod
        void insSfarsit(int elem); // Inserare la capat
        void SteregereEl();
}
void Lista_circulara::insInceput(int elem)
{
    // Daca lista este vida, atunci
    if(isEmpty())
    {
        head = new Nod; // Aloc memorie pentru primul nod
        head->data = elem;
        head->next = head; // Fiind singurul nod, urmatorul este head
        tail = head; // si tail == head
    }
    else  // altfel
    {
        Nod * nod = new Nod; // Aloc memorie pentru noul nod
        nod->data = elem;    // Scriu informatia in data
        nod->next = head;    // Leg nod de head
        head = nod;          // nod devine noul head
        tail->next = head;   // Actualizez legatura lui tail
    }
}

void Lista_circulara::insSfarsit(int elem)
{
    // Daca lista este vida, atunci
    if(isEmpty())
    {
        head = new Nod; // Aloc memorie pentru primul nod
        head->data = elem;
        head->next = head; // Fiind singurul nod, urmatorul este NIMIC adica NULL
        tail = head; // si tail == head
    }
    else  // altfel
    {
        Nod * nod = new Nod; // Aloc memorie pentru noul nod
        nod->data = elem;    // Scriu informatia in data
        nod->next = head;    // Ultimul nod va fi mereu legat de primul
        tail->next = nod;    // Fostul tail este legat de noul tail
        tail = nod;          // nod devine tail
    }
}
void Lista_circulara::stergeEl()
{
    if(isEmpty()) throw "Empty List"; // Daca lista este vida
    if(head == tail) // Daca lista are un singur nod
    { delete head; head = tail = nullptr; return; }
    Nod * temp = head; // Salvez adresa obiectului head
    head = head->next; // Succesorul lui head devine noul head
    tail->next = head; // Actualizez legatura lui tail
    delete temp; // Eliberez memoria ocupata de vechiul obiect head
}

void Lista_circulara::clear()
{
    Nod *it = head, *temp;
    while(it != nullptr)
    {
        temp = it; // Salvez adresa nodului curent
        it = it->next; // Trec mai departe
        delete temp; // Distrug nodul curent
    }
    head = tail = nullptr; // Lista Vida
}
int main()
{
  /*inserareInceput(cap,16);            //testare fara clase
    inserareInceput(cap,17);            //elementele sunt inserate pe dos, astfel va afisa 2, 18,17,16
    inserareInceput(cap,18);            //pt inserare corecta se foloseste inserareFinal
    inserareInceput(cap,2);
    afisareLista(cap);*/
    return 0;
}
