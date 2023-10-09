#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "MoveableObject.h"

using string = std::string;

class Player : public MoveableObject
{
    private:
        // Might be boolean for each colour 
        string color;
    
    public:
        Player();

        Player(int x, int y, string color, GameTextures& gameTextures);   // No need to set Velocity as it will be set to 0 be default
        

        virtual bool update(GameObjectArray& objects) override;


        void playerInputs();

        void moveLeft();

       void moveRight();

        void jump();

        void interact();
    
        void friction();
        
        ~Player();
};

#endif