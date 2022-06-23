

#include "blb.hpp"
#include "AGamestate.hpp"
#include <memory>

class proof : public blb::AGamestate {
    public:
        proof()
        {

        }

        ~proof()
        {

        }

        bool update() override
        {
            return (true);

        }

        void load() override
        {

        }

        void unload() override
        {

        }
};

int main(void)
{
    blb::Core *core = blb::Core::getInstance();

    core->setWindow(new blb::Window(800, 600, "hello"));

    core->pushGameState(std::shared_ptr<blb::AGamestate>(new proof()));

    core->run();
}
