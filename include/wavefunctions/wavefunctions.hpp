/*
 * wavefunctions.hpp: Collects all wave function convenience headers
 * 
 * Created: Mar 20, 2019
 * Author: Bryce M. Westheimer
 * 
 */

#ifndef LIBACCQC_WAVEFUNCTIONS_HPP_
#define LIBACCQC_WAVEFUNCTIONS_HPP_

/***** Single Reference Wave Functions *****/

  // Hartree-Fock 
  #include "rhf.hpp"
  #include "rohf.hpp"
  #include "uhf.hpp"
  #include "ext_hf.hpp"

  // Configuration Interaction
  #include "ci.hpp"
  #include "ext_ci.hpp"

  // Moller-Plesset Perturbation Theory (aka Many-body Perturbation Theory)
  #include "mp.hpp"
  #include "ext_mp.hpp"

  // Coupled Cluster
  #include "cc.hpp"
  #include "ext_cc.hpp"

/***** Multireference Wave Functions *****/

  // MCSCF
  #include "/source/multi_reference/mcscf/mcscf.hpp"
  #include "/multi_reference/ext_mcscf.hpp"

#endif /* LIBACCQC_WAVEFUNCTIONS_HPP_ */