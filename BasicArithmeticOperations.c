int a, b;
float c;

// Funktionsdeklaration Addieren
float add(int a, int b);
// Funktionsdeklaration Subtrahieren
float sub(int a, int b);

void main(){
	// Addieren
	c = add(3,9);
}

// Funktionsdefinition Addieren
float add(int a, int b){
	return a+b;
}
// Funktionsdefinition Subtrahieren
float sub(int a, int b){
	return a-b;
}
