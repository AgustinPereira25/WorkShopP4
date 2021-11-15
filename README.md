# WorkShopP4
Pequeña librería que vende novelas y libros de texto (algunos de los cuales son libros escolares). Se desea implementar un pequeño prototipo en C++ que gestione únicamente la información de los libros vendidos y de los autores de novelas, junto con algunas funcionalidades. 

Se desea que el Sistema resuelva los siguientes requerimientos:
1) Registro de un nuevo libro, chequeando que no exista otro con el mismo código isbn. La
cantidad inicial de unidades vendidas será cero. En caso de tratarse de una novela, se debe
verificar que su autor haya sido previamente registrado y asociarle dicho autor a la novela. En
otro caso, el registro será cancelado, emitiendo un mensaje de error.
2) Listado básico de libros registrados. No se pide ningún orden para este listado. El listado debe
tener el siguiente formato:
Código 1 – Título 1 – Tipo de Libro 1
Código 2 – Título 2 – Tipo de Libro 2
Código 3 – Título 3 – Tipo de Libro 3
… (etc.) …
3) Listado detallado de un libro. Dado el código ISBN de un libro, listar todos sus datos. En caso de
que sea una novela, se debe listar también los datos de su autor. En caso de que el código no
exista, emitir un mensaje de error.
4) Registro de un nuevo autor, chequeando que no exista otro autor con la misma cédula. En otro
caso, el registro será cancelado, emitiendo un mensaje de error.
5) Listado de autores registrados. Este listado debe realizarse ordenado por cédula de identidad de
menor a mayor. El listado debe tener el siguiente formato:
Cédula 1 – Nombre 1 – FechaNac 1
Cédula 2 – Nombre 2 – FechaNac 2
Cédula 3 – Nombre 3 – FechaNac 3
… (etc.) …
6) Calcular el monto total de dinero recaudado por concepto de unidades de libros vendidas.
Recordar que la forma de cálculo de cada unidad depende del tipo de libro que se trate.
7) Dado el código isbn de un libro, registrar la venta de una nueva unidad de dicho libro (es decir,
incrementar en 1 su cantidad de unidades vendidas). En caso de que el código no exista, el
registro será cancelado, emitiendo un mensaje de error.
8) Obtener la cantidad total de unidades vendidas de cada tipo de libro (es decir, la cantidad total
de novelas, la cantidad total de libros de texto comunes y la cantidad total de libros escolares).
9) Listar los datos del libro con la mayor cantidad de unidades vendidas. En caso de que haya
más de uno, listar cualquiera de ellos. Si es una novela, se debe listar también los datos de su
autor. En caso de que no haya ningún libro registrado, emitir un mensaje de error.
10) Dada una fecha, contar cuántos autores hay registrados cuya fecha de nacimiento sea posterior
a dicha fecha.
