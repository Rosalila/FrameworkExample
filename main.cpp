#include "Rosalila/Rosalila.h"

int main()
{
  rosalila()->init("../assets/config.json");

  Image* image = rosalila()->graphics->getImage("../assets/rosalila.png");

  while(true)
  {
    rosalila()->graphics->drawImage(image, 0, 0);

    // Close if player 1 pressed z key or button 1 on gamepad, see assets/config.json
    if(rosalila()->receiver->isPressed(0, "a"))
      break;

    rosalila()->update();
  }
  return 0;
}