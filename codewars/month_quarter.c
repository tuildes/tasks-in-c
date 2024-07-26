// Retorna o quarter de um certo mes
// Se o mes passar de 12, retorna qual seria seu quarter relativo
int quarter_of(int month) {
  for (int i=1; 1; i++) {
    if ((1 + (i*3)) > month) return i;
  }
}
