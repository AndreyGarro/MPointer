#include "Sorts.h"

int Sorts::partition(ListaDoble<MPointer<int>> lista, int low, int high)
{
    MPointer<int> pivot = lista.getMPointer(high);
    int i = (low - 1);

    MPointer<int> tmp;
    for (int j = low; j < high; j++)
    {
        if (&lista.getMPointer(j) <= &pivot)
        {
            i++;
            cout << "> swap "<<&lista.getMPointer(i)<<":"<<&lista.getMPointer(j);
            tmp = lista.getMPointer(i);
            lista.setMPointer(i, lista.getMPointer(j));
            lista.setMPointer(j, tmp);
            cout << " => "<<&lista.getMPointer(i) << ":" << &lista.getMPointer(j) << endl;
        }
    }
    cout << "> swap "<<&lista.getMPointer(i+1)<<":"<<&lista.getMPointer(high);
    tmp = lista.getMPointer(i+1);
    lista.setMPointer(i+1, lista.getMPointer(high));
    lista.setMPointer(high, tmp);
    cout << " => "<<&lista.getMPointer(i+1) << ":" << &lista.getMPointer(high) << endl;
    return (i + 1);
}

void Sorts::insertionSort(ListaDoble<MPointer<int>> lista){
    for(int i = 1; i < lista.getLength(); ++i){
        int j = i - 1;
        int key = &lista.getMPointer(i);
        while(j >= 0 && &lista.getMPointer(j) > key){
            lista.getMPointer(j+1) = &lista.getMPointer(j);
            --j;
        }
        *lista.getMPointer(j+1) = key;
    }
}

void Sorts::quickSort(ListaDoble<MPointer<int>> lista) {
    quickSort(lista, 0, lista.getLength()-1);
}
void Sorts::quickSort(ListaDoble<MPointer<int>> lista, int low, int high)
{
    if (low < high)
    {
        int partIndx = partition(lista, low, high);

        quickSort(lista, low, partIndx - 1);
        quickSort(lista, partIndx + 1, high);
    }
}

void Sorts::bubbleSort(ListaDoble<MPointer<int>> lista) {
    bubbleSort(lista, lista.getLength());
}
void Sorts::bubbleSort(ListaDoble<MPointer<int>> lista, int size) {
    MPointer<int> tmp;
    for (int i = 0; i < size-1; i++)  {
        for (int j = 0; j < size-i-1; j++) {
            if (&lista.getMPointer(j) > &lista.getMPointer(j+1)) {
                tmp = lista.getMPointer(j);
                lista.setMPointer(j, lista.getMPointer(j+1));
                lista.setMPointer(j+1, tmp);
            }
        }
    }
}
void Sorts::PrintArray(ListaDoble<MPointer<int>> lista) {
    for (int i = 0; i < lista.getLength(); ++i)
        cout << &lista.getMPointer(i) << " -> " << flush;
    cout << endl;
}
