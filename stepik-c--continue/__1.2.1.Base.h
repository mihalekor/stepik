/*
 * https://stepik.org/lesson/53365/step/5?thread=solutions&unit=31457
 *
Вам дана следующая иерархия классов:

struct Base { ... };

struct D1 : Base { ... };

struct D2 : Base { ... };

struct D3 : D1, D2 { ... };

Напишите функцию D1BaseToD2Base, которая преобразует указатель типа Base на объект типа D3, который ссылается на
экземпляр Base, соответствующий D1, в указатель, ссылающийся на экземпляр Base соответствующий D2.

Указание: не забывайте про константность!
*/

#ifndef _1_2_BASE
#define _1_2_BASE

struct Base
{
};

struct D1 : Base
{
};

struct D2 : Base
{
};

struct D3 : D1, D2
{
};

// base указывает на экземпляр Base, соответствующий D1
// нужно вернуть указатель на экземпляр Base, соответствующий D2
Base const *D1BaseToD2Base(Base const *base)
{
  D1 const *pD1 = (D1 *)base;
  D3 *pD3 = (D3 *)pD1;
  D2 *pD2 = (D2 *)pD3;
  // return (Base const *)pD2;

  //коротко решение
  return (D2 *)(D3 *)(D1 *)base;
}

#endif // _1_2_BASE
