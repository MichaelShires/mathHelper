//
// Created by Michael Shires on 12/10/23.
//

#include "Row.h"

#include <utility>

/**
 * Default Constructor.
 */
Row::Row() = default;

/**
 *
 */
Row::Row(std::vector<int> settingData) {
    this->data = std::move(settingData);
    data.
}

/**
 *
 */
Row::~Row() = default;

/**
 * @param values
 * @return
 */
void Row::set(const int *values) {
    for (int i = 0; i < data.size(); i++) {
        data[i] = values[i];
    }
}

void Row::set(std::vector<int> values) {
    data = std::move(values);
}

/**
 *
 * @param valueToSet
 * @param member
 */
void Row::setValue(int valueToSet, int member) {

}

/**
 *
 * @param valueAdding
 * @param member
 */
void Row::addValue(int valueAdding, int member) {

}

/**
 *
 * @param valueAdding
 * @param member
 * @param multiple
 */
void Row::addMultiple(int valueAdding, int member, int multiple) {

}

/**
 *
 * @param member
 * @return
 */
int Row::getMember(int member) const {
    return data[member];
}

/**
 *
 * @return
 */
int Row::getSize() const {
    return data.size();
}

/**
 *
 * @return
 */
int* Row::get() {
}

