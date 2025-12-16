/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:42 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/14 20:08:09 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	std::cout << "=== CORRECT POLYMORPHISM TEST ===" << std::endl;
	
	// Basic polymorphism test as specified
	const animal* meta = new animal();
	const animal* j = new dog();
	const animal* i = new cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the animal sound!
	
	delete meta;
	delete j;
	delete i;
	
	std::cout << "\n=== WRONG POLYMORPHISM TEST ===" << std::endl;
	
	// Wrong polymorphism test - should demonstrate the problem
	const wrongAnimal* wrong_meta = new wrongAnimal();
	const wrongAnimal* wrong_i = new wrongCat();
	
	std::cout << wrong_i->getType() << " " << std::endl;
	std::cout << wrong_meta->getType() << " " << std::endl;
	wrong_i->makeSound(); //will NOT output cat sound - outputs wrongAnimal sound!
	wrong_meta->makeSound(); //outputs wrongAnimal sound
	
	delete wrong_meta;
	delete wrong_i;
	
	std::cout << "\n=== ADDITIONAL COMPREHENSIVE TESTS ===" << std::endl;
	
	// Test 1: Array of animals with polymorphism
	std::cout << "\n--- Test 1: Array polymorphism ---" << std::endl;
	const animal* animals[3] = {new animal(), new dog(), new cat()};
	for (int k = 0; k < 3; k++) {
		std::cout << "Type: " << animals[k]->getType() << " -> ";
		animals[k]->makeSound();
	}
	for (int k = 0; k < 3; k++) {
		delete animals[k];
	}
	
	// Test 2: Copy constructors and assignment
	std::cout << "\n--- Test 2: Copy behavior ---" << std::endl;
	dog original_dog;
	std::cout << "Original dog type: " << original_dog.getType() << std::endl;
	original_dog.makeSound();
	
	dog copied_dog(original_dog);
	std::cout << "Copied dog type: " << copied_dog.getType() << std::endl;
	copied_dog.makeSound();
	
	// Test 3: Stack vs Heap allocation
	std::cout << "\n--- Test 3: Stack allocation ---" << std::endl;
	cat stack_cat;
	dog stack_dog;
	std::cout << "Stack cat: ";
	stack_cat.makeSound();
	std::cout << "Stack dog: ";
	stack_dog.makeSound();
	
	// Test 4: Wrong animals array (shows no polymorphism)
	std::cout << "\n--- Test 4: Wrong array (no polymorphism) ---" << std::endl;
	const wrongAnimal* wrong_animals[2] = {new wrongAnimal(), new wrongCat()};
	for (int k = 0; k < 2; k++) {
		std::cout << "Type: " << wrong_animals[k]->getType() << " -> ";
		wrong_animals[k]->makeSound(); // Both will call wrongAnimal::makeSound()
	}
	for (int k = 0; k < 2; k++) {
		delete wrong_animals[k];
	}
	
	// Test 5: Assignment operator
	std::cout << "\n--- Test 5: Assignment operator ---" << std::endl;
	cat cat1;
	cat cat2;
	cat1.makeSound();
	cat2 = cat1;
	std::cout << "After assignment: ";
	cat2.makeSound();
	
	std::cout << "\n=== ALL TESTS COMPLETED ===" << std::endl;
	
	return 0;
}