struct noh
{
    int dado;
    struct noh* esquerda;
    struct noh* direita;
};


void arvore();

struct noh* inserir(noh* nohzito, int dado);

struct noh* criar_noh(int dado);

void em_ordem(struct noh* raiz);
void pre_ordem(struct noh* raiz);
void pos_ordem(struct noh* raiz);

