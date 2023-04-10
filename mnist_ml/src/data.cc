#include "data.hpp"

    data::data(){
        fetture_vector = new std::vector<uint8_t> 
    }
    
    data::~data();

    void data::set_feature_vector(std::vector<uint8_t> *vect){
         feature_vector = vect
    }
       
    
    void data::append_to_feature_vector(uint8_t){
        feature_vect->push_back(val);
    }

    void data::set_label(uint8_t val){
        label = val
    }

   
    void data::set_enumerated_label(int){
        enum_label = val;
    }

    int get_feture_ data::vector_size(){
        return feature_vector->size();
    }

    int data::get_feture_vector_size()
    {
        return 0;
    }

    uint8_t data::get_label()
    {
        return label;
    }

    uint8_t data::get_enumerated_label(){
        return enum_label;
    }

    std::vector<uint8_t> * data::get_feature_vector(){
        return feature_vector;
    }
