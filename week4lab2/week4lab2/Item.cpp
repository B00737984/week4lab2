#include "Item.h"

Item::Item(){
}


Item::Item(std::string itemName, int value, float weight)
	: itemName_{ itemName }, itemValue_{ value }, itemWeight_{ weight } {
}

std::string Item::ToString() {
	std::string itemInfo{};
	itemInfo.append(itemName_ + ", worth " + std::to_string(itemValue_) + " Gold coins");
	return itemInfo;
}

void Item::SetItemName(std::string itemname) {
	itemName_ = itemname;
}

std::string Item::GetItemName() const {
	return itemName_;
}

void Item::SetItemValue(int itemvalue) {
	itemValue_ = itemvalue;
}

int Item::GetItemValue() const {
	return itemValue_;
}

void Item::SetItemWeight(float itemweight) {
	itemWeight_ = itemweight;
}

float Item::GetItemWeight() {
	return itemWeight_;
}

