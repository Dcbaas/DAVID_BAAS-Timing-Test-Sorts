#ifndef CELEBRITY_H
#define CELEBRITY_H
#include <string>
/******************************************************************************
 * The celebrity class creates a celebrity object that tracks a celebrities 
 * name, how desperatly one wants to meet them, what feild they are in, and
 * if one has met them.
 *
 * Author: David Baas
 * Version: 3/28/2018
 *****************************************************************************/

class celebrity{

public:
 /*****************************************************************************
  * The constructor initializes all of the instance variables.
  *
  * Param: name string that is the name of the celebrity.
  * Param: desperation int which is how deperatly I want to meet them.
  * Param: field string which is the feild this celebrity is in.
  * Param: met boolean to track if I have met this celebrity. 
  ****************************************************************************/
  celebrity(std::string &name, int &desperation, std::string &field, bool &met);

  /****************************************************************************
   * Sets the name of this celebrity.
   * 
   * Param: name the name this celebrity is being set to.
   ***************************************************************************/ 
  void  setName(std::string &name);
   
  /****************************************************************************
   * Gets the name of this celebrity.
   * 
   * Return: The name of this celebrity.
   ***************************************************************************/ 
  std::string getName() const;
  
  /****************************************************************************
   * Sets how desperatly I want to meet this celebrity.
   * 
   * Param: desperation the desperation factor this celebrity is being set to.
   ***************************************************************************/ 
  void setDesperation(int &desperation);
  
  /****************************************************************************
   * Gets how desperatly I want to meet this celebrity.
   * 
   * Return: The desperation factor of this celebrity.
   ***************************************************************************/
  int getDesperation() const;
  
  /****************************************************************************
   * Sets what field this celebrity is in.-
   * 
   * Param: field The field this celebrity is being set to.
   ***************************************************************************/
  void setField(std::string &field);

  /****************************************************************************
   * Gets what field this celebrity is in.
   * 
   * Return: The field this celebrity is in.
   ***************************************************************************/
  std::string getField() const;
  
  
/****************************************************************************
   * Sets weather I have met this celebrity.
   * 
   * Param: met Weather or not I've met this celebrity.
   ***************************************************************************/
  void setMet(bool &met);
  
  /****************************************************************************
   * Gets weather I have met this celebrity.
   * 
   * Return: Weather I have met this celebrity or not.
   ***************************************************************************/
  bool getMet() const;

  /****************************************************************************
   * Compares this celebrity to another. The order of comparison goes:
   * 1. Desperation Factor
   * 2. Having met them or not.
   * 3. Thier name.
   * 
   * Param: other Celebrity being compared.
   ***************************************************************************/
  friend bool operator<(const celebrity & c1,const celebrity & c2);
  
  friend bool operator<=(const celebrity & c1, const celebrity & c2);

private:
  
  //A string for the name of the celebrity.
  std::string name;

  //An integer for the desperation factor.
  int desperation;

  //A string for what field this celebrity is in.
  std::string field;

  //A boolean to flag weather I have met them or not.
  bool met;
};
#endif
