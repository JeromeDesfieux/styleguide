/*
* Copyright 2019 NAVBLUE. All rights reserved.
*/
#pragma once

namespace navblue {
namespace missionplus {

  class OtherClass;

/**
* \class ARealyNiceClass
* \brief A really nice class demonstrating our code guidelines
*/
class MyClass
{
   public:
    // CTors & DTor

    /** \brief constructor */
    MyClass();
    /** \brief destructor */
    ~MyClass() = default;

    // Methods

    /**
    * \brief A very ususeful method doing a lot of thing like this and that
    * \param[in] argWellNamed is a parameter that we just use for example
    * \return the result of a very complicated operation
    */
    double oneUsefulMethod(const OtherClass& argWellNamed);



   protected:

   private:
    // copy constructor
    MyClass(const MyClass&) = delete;
    // copy assignment
    MyClass& operator=(const MyClass&) = delete;
    // move constructor
    MyClass(MyClass&&) = delete;
    // move assignment
    MyClass& operator=(MyClass&&) = delete;

    // Methods
    int onePrivateMethod(int nbWaypoints);

    // Private attributes

    /** \brief Here is a nice attribut called _file and doing something */
    int _nbFlightPlans {1};

};

}  // namespace missionplus
}  // namespace navblue

