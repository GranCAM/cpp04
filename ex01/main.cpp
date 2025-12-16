/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 18:29:42 by carbon-m          #+#    #+#             */
/*   Updated: 2025/12/16 19:40:28 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include "dog.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"
#include "brain.hpp"

int main()
{
    std::cout << "=== BASIC POLYMORPHISM WITH BRAIN TEST ===" << std::endl;
    
    // Basic test as specified in subject
    const animal* j = new dog();
    const animal* i = new cat();
    
    delete j; // should not create a leak
    delete i;
    
    std::cout << "\n=== ARRAY OF ANIMALS (50% Dogs, 50% Cats) ===" << std::endl;
    
    // Create array of 10 animals (5 dogs, 5 cats)
    const int ARRAY_SIZE = 10;
    animal* animals[ARRAY_SIZE];
    
    // Fill first half with dogs
    for (int index = 0; index < ARRAY_SIZE / 2; index++) {
        animals[index] = new dog();
    }
    
    // Fill second half with cats  
    for (int index = ARRAY_SIZE / 2; index < ARRAY_SIZE; index++) {
        animals[index] = new cat();
    }
    
    // Test polymorphism
    std::cout << "\n--- Testing polymorphism ---" << std::endl;
    for (int index = 0; index < ARRAY_SIZE; index++) {
        std::cout << "Animal " << index << " (" << animals[index]->getType() << "): ";
        animals[index]->makeSound();
    }
    
    // Clean up - delete as Animals (polymorphic destruction)
    std::cout << "\n--- Deleting animals (testing virtual destructors) ---" << std::endl;
    for (int index = 0; index < ARRAY_SIZE; index++) {
        delete animals[index];
    }
    
    std::cout << "\n=== DEEP COPY TESTS ===" << std::endl;
    
    // Test 1: Dog deep copy
    std::cout << "\n--- Dog deep copy test ---" << std::endl;
    dog* original_dog = new dog();
    
    // Test copy constructor
    dog* copied_dog = new dog(*original_dog);
    
    std::cout << "Original and copy should be independent:" << std::endl;
    std::cout << "Original dog: " << original_dog->getType() << std::endl;
    std::cout << "Copied dog: " << copied_dog->getType() << std::endl;
    
    delete original_dog;
    std::cout << "After deleting original, copy should still work:" << std::endl;
    copied_dog->makeSound();
    delete copied_dog;
    
    // Test 2: Cat deep copy
    std::cout << "\n--- Cat deep copy test ---" << std::endl;
    cat original_cat;
    cat copied_cat = original_cat; // Copy constructor
    
    cat assigned_cat;
    assigned_cat = original_cat; // Assignment operator
    
    std::cout << "All cats should work independently:" << std::endl;
    original_cat.makeSound();
    copied_cat.makeSound();
    assigned_cat.makeSound();
    
    // Test 3: Brain independence test
    std::cout << "\n--- Brain independence test ---" << std::endl;
    dog dog1;
    dog dog2 = dog1; // This should create independent brains
    
    // If you implement setIdea method, you could test:
    // dog1.getBrain()->setIdea("I like bones");
    // dog2.getBrain()->setIdea("I like playing");
    // And verify they're different
    
    std::cout << "\n=== POLYMORPHIC ASSIGNMENT TEST ===" << std::endl;
    
    animal* poly_dog = new dog();
    animal* poly_cat = new cat();
    
    std::cout << "Polymorphic types:" << std::endl;
    std::cout << poly_dog->getType() << " says: ";
    poly_dog->makeSound();
    std::cout << poly_cat->getType() << " says: ";
    poly_cat->makeSound();
    
    delete poly_dog;
    delete poly_cat;
    
    return 0;
}