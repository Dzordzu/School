//
// Created by dzordzu on 11.11.18.
//

#include "Implementation.h"

void Implementation::printGeneralInfo() {
    std::cout<<"Working set: "<<std::endl;
    for(KnapsackItem i : _WorkingSet.getItems()) {
        std::cout<<i.getInfo()<<std::endl;
    }
    std::cout<<std::endl<<"Knapsack capacity (size): "<<_KnapsackSize<<std::endl;
    std::cout<<"Iterations: "<<_Iterations<<std::endl;
    std::cout<<"Population: "<<_PopulationSize<<std::endl;
    std::cout<<"Crossing Prob: "<<_CrossingProbability<<std::endl;
    std::cout<<"Mutation Prob: "<<_MutationProbability<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
}


void Implementation::setKnapsackSize(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    _KnapsackSize = std::stoul(resultString);
}

void Implementation::setPopulationSize(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    _PopulationSize = std::stoul(resultString);
}

void Implementation::setCrossingProbability(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    _CrossingProbability= std::stof(resultString);
}

void Implementation::setMutationProbability(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    _MutationProbability= std::stof(resultString);
}

void Implementation::setIterations(std::istream &value) {
    std::string resultString = InputValidator::getInstance().getNumericString(value);
    _Iterations = std::stoul(resultString);
}

void Implementation::generateRandomWorkingSet(uint16_t amount, uint32_t min, uint32_t max) {
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(min, max);

    for(int n=0; n<amount; n++) {
        _WorkingSet.getItems().emplace_back(KnapsackItem(dis(gen), dis(gen)));
    }
}

void Implementation::init(bool showProcess) {

    Knapsack knapsack(_KnapsackSize);

    _Algorithm.setPopulationSize(_PopulationSize);
    _Algorithm.setMutationProbability(_MutationProbability);
    _Algorithm.setCrossingProbability(_CrossingProbability);
    _Algorithm.setKnapsack(&knapsack);
    _Algorithm.setWorkingSet(&_WorkingSet);
    _Algorithm.setIterations(_Iterations);

    if(showProcess) printGeneralInfo();

    Instance supposedBest = _Algorithm.run(showProcess);
    _BestInstance = supposedBest.getFitness() > _BestInstance.getFitness() ? supposedBest : _BestInstance;
}

Instance Implementation::getBestInstance() {
    return _BestInstance;
}
