/*------------------------------------------*/
/* 1. promedio de un alumno en un trimestre */
/*------------------------------------------*/

/* Tamaño de una lista  */
tamano([],0).
tamano([_|Xs], L) :-
	tamano(Xs, N), L is N + 1.

/* Suma los elementos numericos de una lista */
suma([],0).
suma([X|Xs], S) :- 
    suma(Xs, SS), S is SS + X.

/* Asignar calificaciones numericas a las letras */
asignar(mb,10).
asignar(b,8).
asignar(s,6).
asignar(na,5).

/* Promedio de los elementos de una lista */
promedio(L,P) :-
	tamano(L, N),
	suma(L, S),
	P is S/N.

/* promedio final */
promFinal(A,T,L,P) :-
    findall(X,(reg(A,_,C,T),asignar(C,X)),L), promedio(L,P).

