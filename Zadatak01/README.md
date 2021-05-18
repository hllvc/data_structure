# Zadatak 01

Implementirati _stack_ _string_-ova dvostruko linkanom listom, tako da vrh _stack_-a
bude posljednji element u listi. Struktura treba implementirati _interface_:

```
struct StackInterface {
	virtual void push(const std::string&) = 0;
	virtual const std:string& top() const = 0;
	virtual std::string pop() = 0;
	virtual bool prazan() const = 0;
	virtual void ispisi() const = 0;
};
```

Metod za ispis treba svaki element ispisati u novom redu , pocevsi od vrha _stack_-a.
Dakle, ako smo ubacili elemente 4, 3, -1, 10, ispis treba biti:

```
10
-1
3
4
```
