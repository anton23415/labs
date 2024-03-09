#include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

class PlasticBottle {
public:
  std::vector<std::string> parts_;
  void ListParts() const {
    std::cout << "Составные части бутылки: ";
    for (size_t i = 0; i < parts_.size(); i++) {
      std::cout << parts_[i] << " ";
    }
    std::cout << "\n\n";
  }
};

class BottleBuilder {
public:
  virtual ~BottleBuilder() {}
  virtual void CreateBottleBody() const = 0;
  virtual void CreateBottleNeck() const = 0;
  virtual void CreateBottleCap() const = 0;
};

class WaterBottleBuilder : public BottleBuilder {
private:
  PlasticBottle* product;

public:
  WaterBottleBuilder() { this->Reset(); }
  ~WaterBottleBuilder() { delete product; }
  void Reset() { this->product = new PlasticBottle(); }
  void CreateBottleBody() const override { this->product->parts_.push_back("Прозрачный корпус"); }
  void CreateBottleNeck() const override { this->product->parts_.push_back("Длинное горлышко"); }
  void CreateBottleCap() const override { this->product->parts_.push_back("Завинчивающаяся крышка"); }
  PlasticBottle* GetProduct() {
    PlasticBottle* result = this->product;
    this->Reset();
    return result;
  }
};

class SodaBottleBuilder : public BottleBuilder {
private:
  PlasticBottle* product;

public:
  SodaBottleBuilder() { this->Reset(); }
  ~SodaBottleBuilder() { delete product; }
  void Reset() { this->product = new PlasticBottle(); }
  void CreateBottleBody() const override { this->product->parts_.push_back("Цветной корпус"); }
  void CreateBottleNeck() const override { this->product->parts_.push_back("Короткое горлышко"); }
  void CreateBottleCap() const override { this->product->parts_.push_back("Крышка с клапаном"); }
  PlasticBottle* GetProduct() {
    PlasticBottle* result = this->product;
    this->Reset();
    return result;
  }
};

class BottleDirector {
private:
  BottleBuilder* builder;

public:
  void set_builder(BottleBuilder* builder) { this->builder = builder; }
  void BuildMinimalViableProduct() {
    this->builder->CreateBottleBody();
    this->builder->CreateBottleNeck();
  }
  void BuildFullFeaturedProduct() {
    this->builder->CreateBottleBody();
    this->builder->CreateBottleNeck();
    this->builder->CreateBottleCap();
  }
};
