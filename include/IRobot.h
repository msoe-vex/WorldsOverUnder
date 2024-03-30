

class IRobot {
public:
    /* Controllers */
    virtual void initialize() = 0;
    virtual void disabled() = 0;
    virtual void competition_initialize() = 0;
    virtual void autonomous() = 0;
    virtual void opcontrol() = 0;
};