/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maujogue <maujogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:37:47 by maujogue          #+#    #+#             */
/*   Updated: 2023/10/19 15:37:19 by maujogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Character.hpp"

Character::Character() : _name("Default Character"){
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(const std::string name) : _name(name){
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character::Character(const Character & src) : _name(src._name){
	std::cout << "Character " << this->_name << " created" << std::endl;
}

Character &Character::operator=(const Character & src){
	this->_name = src._name;
	return (*this);
}

Character::~Character(){
	std::cout << "Character " << this->_name << " destroyed" << std::endl;
}

void Character::use(int adx, ICharacter & target){
	(void)adx;
	(void)target;
}

void Character::equip(AMateria* m){
	(void)m;
}

void Character::unequip(int idx){
	(void)idx;
}

std::string const & Character::getName() const {
	return (this->_name);
}