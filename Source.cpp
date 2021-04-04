#include "Number.h"
#include "Real.h"
#include "Object.h"
#include <iostream>

using namespace std;
int main()
{
	Number k;
	cin >> k;
	cout << k;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	k.Sum();
	k.Div_x1_x2();
	k.Div_x2_x1();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	Real g;
	cin >> g;
	cout << g;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	g.set_l(k);
	g.Step1();
	g.Step2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	g.Log1();
	g.Log2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	return 0;
}
