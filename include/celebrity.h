#ifndef CELEBRITY_H
#define CELEBRITY_h
#include <string>

class celebrity{

public:

  celebrity(std::string &name, int &desperation, std::string &field, bool &met);

  void  setName(std::string &name);

  std::string getName() const;

  void setDesperation(int &desperation);

  int getDesperation() const;

  void setField(std::string &field);

  std::string getField() const;

  void setMet(bool &met);

  bool getMet() const;

  bool & operator <(celebrity &other);

private:
  std::string name;

  int desperation;

  std::string field;

  bool met;
};
#endif
