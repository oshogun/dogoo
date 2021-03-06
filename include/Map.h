#pragma once
#include "Tile.h"
#include <vector>
#include <SFML/System.hpp>
enum Directions {
	NORTH, SOUTH, EAST, WEST
};

class Map {
public:
	Map(unsigned _rows, unsigned _collumns);
	Tile & getTileAt(unsigned row, unsigned col);
	void setTileAt(unsigned row, unsigned col, const Tile & tile);
	unsigned getRows();
	unsigned getCollumns();
	std::vector<std::vector<Tile>> getMap();
	void movePlayer(Directions direction);
	sf::Vector2i getPlayerPosition();
	void setPlayerPosition(int i, int j);


private:
	// TODO replace this with a proper data structure:
	std::vector<std::vector<Tile>> tileMap;
	//----------------------------------------------
	const unsigned rows;
	const unsigned collumns;
	sf::Vector2i playerPosition; 

};