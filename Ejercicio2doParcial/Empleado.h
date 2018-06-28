#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct S_Empleado
{
  int id;
  char nombre[128];
  int horasTrabajadas;
};
typedef struct S_Empleado Empleado;

int em_trabajaMasDe120Horas(void* item);

#endif // EMPLEADO_H_INCLUDED
