//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

///Punto de entrada a la aplicación///
int main() {
	//////Variables//////
	Texture textureCuadradoG, textureCuadradoB, textureCuadradoR, textureCuadradoY;
	Sprite grey, blue, red, yellow;

	//Cargamos la textura del archivo
	textureCuadradoG.loadFromFile("imagenes/cuad_grey.png");
	textureCuadradoB.loadFromFile("imagenes/cuad_blue.png");
	textureCuadradoR.loadFromFile("imagenes/cuad_red.png");
	textureCuadradoY.loadFromFile("imagenes/cuad_yellow.png");

	//Cargamos el material del sprite
	grey.setTexture(textureCuadradoG);
	blue.setTexture(textureCuadradoB);
	red.setTexture(textureCuadradoR);
	yellow.setTexture(textureCuadradoY);

	//Escalamos todos los cuadrados para que queden de 256x256
	grey.setScale(4, 4);
	blue.setScale(2, 2);
	red.setScale(1, 1);
	yellow.setScale(0.5, 0.5);

	//Posicionamos la plataforma final
	red.setPosition(144, 44);
	yellow.setPosition(400, 44);
	blue.setPosition(144, 300);
	grey.setPosition(400, 300);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();

		//Dibujamos la escena
		App.draw(grey);
		App.draw(blue);
		App.draw(red);
		App.draw(yellow);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}
