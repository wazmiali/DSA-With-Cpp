class Hero
{

      // properties
      // char name[100];
      // int health;
      // char level;

private:
      int health;

public:
      char level;

      int getHealth()
      {
            return health;
      }

      int getLevel(){
            return level;
      }

      int setHealth(int  h){
            health = h;
      }

      int setLevel(char ch){
            level = ch;
      }

};