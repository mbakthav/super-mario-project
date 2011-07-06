////////////////////////////////////////////////////////////////////////
// Item.hpp
// Super Mario Project
// Copyright (C) 2011  
// Lionel Joseph lionel.r.joseph@gmail.com
// Olivier Guittonneau openmengine@gmail.com
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef HPP_ITEM
#define HPP_ITEM

#include "ItemOccurrence.hpp"
#include "Resource.hpp"
#include <SFML/Graphics.hpp>
#include <vector>


using namespace std;
using namespace sf;

namespace Collisions
{
	class Item : public SuperMarioProject::Resource
	{
	
	public:
		enum Type
		{
			COIN,
			MUSHROOM,
			FLOWER,
			ICE_FLOWER,
			MINI_MUSHROOM,
			POISON_MUSHROOM,
			STAR,
			LIFE_MUSHROOM
		};
	
		/* Constructors */
        Item(const string& textureName, Type type = COIN, int submission = 0);

		/* Item type */
		Type getType();

		/* Physic submission */
		int getSubmission();

		/* Initial Speed of Item */
		Vector2f getInitialSpeed();

		/* Add New Item Occurrence */
		void Item::addNewItemOccurrence(Vector2f& position = Vector2f(0,0), Vector2f& speed = Vector2f(0,0), 
			ItemOccurrence::State state = ItemOccurrence::State::NORMAL, ItemOccurrence::Side side = ItemOccurrence::Side::RIGHT_SIDE);
		
		/* Remove Item Occurrence */
		void removeItemOccurrence(const ItemOccurrence* item);

		/* Update data */
		void update(RenderWindow& app);

		/* Render all occurrences */
		void render(RenderWindow& App);

		/* Destructor */
		virtual ~Item();

	private:
		Type _type;
		int _submission;
		Vector2f _initialSpeed;
		vector<ItemOccurrence*> _itemOccurrences;
		map<ItemOccurrence::State, int> _nbSpritesByState;
		map<ItemOccurrence::State, int> _vAnimByState;

		/* Loading Item */
		void loadItem();
	};
} // namespace

#endif // HPP_ITEM
