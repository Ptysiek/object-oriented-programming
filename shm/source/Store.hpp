#pragma once

#include "Cargo.hpp"
#include "Player.hpp"
#include "Time.hpp"

#include <memory>
#include <vector>

class Store {
	enum class Response {
		Done, 
		Lack_of_money, 
		Lack_of_cargo, 
		Lack_of_space
	};

	// Time* time_;
	// std::vector<std::unique_ptr<Cargo>> cargo_;

public:
	//Store(Time* time);

	//~Store() override;

	//void NextDay() override;
	
	//Cargo* GetCargo(const size_t pos);
	
	//Response Buy(Cargo* cargo, size_t amount, Player* player);
	
	//Response Sell(Cargo* caergo, size_t amount, Player* player);
	
	//friend std::ostream& operator<<(std::ostream& out, const Store& store);

private:
	//void GenerateCargo();
	
	//Cargo* FindMatchCargo(Cargo* cargo);
	
	//void RemoveFromStore(Cargo* cargo);
};