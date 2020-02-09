
int main(){
  int n;
  printf("Escribe un número: ");
  scanf("%d", &n);
  while(n>0){
    imprimeValor(n);
    n = n/10;
  }
}
void imprimeValor(int n){
  printf("%d ", n % 10);
}

