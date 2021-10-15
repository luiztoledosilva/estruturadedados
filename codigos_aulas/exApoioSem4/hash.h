class Hash {
public:
Hash(int max_items = 20); //construtor - numero maximo que o vetor tera se nao for passado nenhum valor
~Hash(); //destrutor do vetor
bool isFull(); //ver se o vetor está cheio
int getLenght(); //ver quantos elementos

void retrieveItem(int& item, bool& found); //pega o elemento por referencia para buscar na hash
void insertItem(int item); //insere o elemento na hash
void deleteItem(int item); //deleta o elemento da hash, mas sem mexer na variavel que foi passada por valor
void print(); //imprime a hash

private:
int getHash(int item); //funcao para converter para uma chave pra hash
int max_items;
int lenght;
int* structure;
};
