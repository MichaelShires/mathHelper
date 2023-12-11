//
// Created by Michael Shires on 12/10/23.
//

#ifndef MATHHELPER_ROW_H
#define MATHHELPER_ROW_H


#include <vector>
#include <memory>

class Row {

public:

    Row();

    explicit Row(std::vector<int> settingData);

    ~Row();

    void set(const int values[]);

    void set(std::vector<int> values);

    void addValue(int valueAdding, int member);

    void addMultiple(int valueAdding, int member, int multiple);

    [[nodiscard]] int getMember(int member) const;

    [[nodiscard]] int getSize() const;

    int* get();

private:

    std::vector<int> data;

    void setValue(int valueToSet, int member);

};


#endif //MATHHELPER_ROW_H
