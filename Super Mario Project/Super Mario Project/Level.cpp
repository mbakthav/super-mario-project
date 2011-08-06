////////////////////////////////////////////////////////////////////////
// Level.cpp
// Super Mario Project
// Copyright (C) 2011  
// Lionel Joseph lionel.r.joseph@gmail.com
// Olivier Guittonneau openmengine@gmail.com
////////////////////////////////////////////////////////////////////////

#include "Level.hpp"

namespace SuperMarioProject
{
	Vector2f Level::getSize()
	{
		return _size;
	}

	Vector2f Level::getBlockSize()
	{
		return _blockSize;
	}

	vector<Object*> Level::getObjects()
	{
		return _objects;
	}

	vector<Checkpoint*> Level::getCheckpoints()
	{
		return _checkpoints;
	}

	vector<Projectile*> Level::getProjectiles()
	{
		return _projectiles;
	}

	vector<Monster*> Level::getMonsters()
	{
		return _monsters;
	}

	vector<Pipe*> Level::getPipes()
	{
		return _pipes;
	}

	vector<Item*> Level::getItems()
	{
		return _items;
	}

	vector<Blocks*> Level::getBlocks()
	{
		return _blocks;
	}

	vector<Background*> Level::getBackgrounds()
	{
		return _backgrounds;
	}

	vector<Foreground*> Level::getForegrounds()
	{
		return _foregrounds;
	}

	vector<Finish*> Level::getFinishes()
	{
		return _finishes;
	}

	void Level::update(RenderWindow& app)
	{
		/* Iterators Declarations */
		vector<Pipe*>::iterator itPipes;
		vector<Item*>::iterator itItems;
		vector<Projectile*>::iterator itProjectiles;
		vector<Monster*>::iterator itMonsters;

		/* Items */
		for(itItems = this->_items.begin(); itItems != this->_items.end(); itItems++)
		{
			(*itItems)->update(app);
		}

		// BLOCKS ??

		/* Monsters */
		for(itMonsters = this->_monsters.begin(); itMonsters != this->_monsters.end(); itMonsters++)
		{
			(*itMonsters)->update(app);
		}

		/* Projectiles */
		for(itProjectiles = this->_projectiles.begin(); itProjectiles != this->_projectiles.end(); itProjectiles++)
		{
			(*itProjectiles)->update(app);
		}

		// Persos ??
		
		/* Pipes */
		for(itPipes = this->_pipes.begin(); itPipes != this->_pipes.end(); itPipes++)
		{
			(*itPipes)->update(app);
		}
	}

	void Level::render(RenderWindow& app)
	{
		/* Iterators Declarations */
		vector<Background*>::iterator itBackgrounds;
		vector<Object*>::iterator itObjects;
		vector<Finish*>::iterator itFinish;
		vector<Item*>::iterator itItems;
		vector<Checkpoint*>::iterator itCheckpoints;
		vector<Monster*>::iterator itMonsters;
		vector<Projectile*>::iterator itProjectiles;
		vector<Pipe*>::iterator itPipes;
		vector<Foreground*>::iterator itForegrounds;

		// background_generators ?

		/* Backgrounds */
		for(itBackgrounds = this->_backgrounds.begin(); itBackgrounds != this->_backgrounds.end(); itBackgrounds++)
		{
			(*itBackgrounds)->render(app);
		}

		/* Objects */
		for(itObjects = this->_objects.begin(); itObjects != this->_objects.end(); itObjects++)
		{
			(*itObjects)->render(app);
		}
		
		/* Finish */
		for(itFinish = this->_finishes.begin(); itFinish != this->_finishes.end(); itFinish++)
		{
			(*itFinish)->render(app);
		}

		/* Items */
		for(itItems = this->_items.begin(); itItems != this->_items.end(); itItems++)
		{
			(*itItems)->render(app);
		}

		// BLOCKS 

		/* CheckPoints */
		for(itCheckpoints = this->_checkpoints.begin(); itCheckpoints != this->_checkpoints.end(); itCheckpoints++)
		{
			(*itCheckpoints)->render(app);
		}

		/* Monsters */
		for(itMonsters = this->_monsters.begin(); itMonsters != this->_monsters.end(); itMonsters++)
		{
			(*itMonsters)->render(app);
		}

		/* Projectiles */
		for(itProjectiles = this->_projectiles.begin(); itProjectiles != this->_projectiles.end(); itProjectiles++)
		{
			(*itProjectiles)->render(app);
		}

		// Persos ??
		
		/* Pipes */
		for(itPipes = this->_pipes.begin(); itPipes != this->_pipes.end(); itPipes++)
		{
			(*itPipes)->render(app);
		}

		// foreground_generators ?

		/* Foregrounds */
		for(itForegrounds = this->_foregrounds.begin(); itForegrounds != this->_foregrounds.end(); itForegrounds++)
		{
			(*itForegrounds)->render(app);
		}
	}

    Level::~Level()
    {
		/* Iterators Declarations */
		vector<Background*>::iterator itBackgrounds;
		vector<Object*>::iterator itObjects;
		vector<Finish*>::iterator itFinish;
		vector<Item*>::iterator itItems;
		vector<Checkpoint*>::iterator itCheckpoints;
		vector<Monster*>::iterator itMonsters;
		vector<Projectile*>::iterator itProjectiles;
		vector<Pipe*>::iterator itPipes;
		vector<Foreground*>::iterator itForegrounds;

		// background_generators ?

		/* Backgrounds */
		for(itBackgrounds = this->_backgrounds.begin(); itBackgrounds != this->_backgrounds.end(); itBackgrounds++)
		{
			delete (*itBackgrounds);
		}

		/* Objects */
		for(itObjects = this->_objects.begin(); itObjects != this->_objects.end(); itObjects++)
		{
			delete (*itObjects);
		}
		
		/* Finish */
		for(itFinish = this->_finishes.begin(); itFinish != this->_finishes.end(); itFinish++)
		{
			delete (*itFinish);
		}

		/* Items */
		for(itItems = this->_items.begin(); itItems != this->_items.end(); itItems++)
		{
			delete (*itItems);
		}

		// BLOCKS 

		/* CheckPoints */
		for(itCheckpoints = this->_checkpoints.begin(); itCheckpoints != this->_checkpoints.end(); itCheckpoints++)
		{
			delete (*itCheckpoints);
		}

		/* Monsters */
		for(itMonsters = this->_monsters.begin(); itMonsters != this->_monsters.end(); itMonsters++)
		{
			delete (*itMonsters);
		}

		/* Projectiles */
		for(itProjectiles = this->_projectiles.begin(); itProjectiles != this->_projectiles.end(); itProjectiles++)
		{
			delete (*itProjectiles);
		}

		// Persos ??
		
		/* Pipes */
		for(itPipes = this->_pipes.begin(); itPipes != this->_pipes.end(); itPipes++)
		{
			delete (*itPipes);
		}

		/* Foregrounds */
		for(itForegrounds = this->_foregrounds.begin(); itForegrounds != this->_foregrounds.end(); itForegrounds++)
		{
			delete (*itForegrounds);
		}

		// foreground_generators ?

    }
} // namespace