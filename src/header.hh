/*
    src/header.hh
    Q@khaa.pk
 */

#ifndef MOTHER_MOTHER_WHEN_YOU_SENT_ME_OFF_TO_SEE_THE_WORLD_WERE_YOU_SCARED_THAT_I_MIGHT_GET_HURT_HEADER_HH
#define MOTHER_MOTHER_WHEN_YOU_SENT_ME_OFF_TO_SEE_THE_WORLD_WERE_YOU_SCARED_THAT_I_MIGHT_GET_HURT_HEADER_HH

#define PAIRS_TRAINING_PHASE true
#define PAIRS_VALIDATION_PHASE false 
#define PAIRS_VOCABULARY_TRAINING_SPLIT(c) ((c*80)/100)
#define PAIRS_VOCABULARY_VALIDATION_SPLIT(c) ((c*20)/100) 

#include "../../Numcy/header.hh"
#include "../../corpus/corpus.hh"

#include "hyper-parameters.hh"
#include "pairs.hh"

#endif

