/*
 * abstract_wavefn.hpp
 * 
 * Copied: Apr 8, 2019
 * Author: Bryce M. Westheimer
 * 
 * Description: Abstract base wave function class declaration
 * 
 */

#ifndef LIBACCQC_ABSTRACT_WAVEFN_HPP_
#define LIBACCQC_ABSTRACT_WAVEFN_HPP_

#include "libaccint.hpp"  // Atom, BasisSet, TODO: Etc.

#include <vector>
#include <string>

// Convenience typedef(s)
typedef libaccint::host::core::BasisSet BasisSet;
typedef libaccint::host::core::Atom Atom;
// TODO: Etc.

namespace libaccqc {

  namespace wavefunctions {

    namespace abstract {

      /*! \class Wavefn
      *  \ingroup TODO:ADD_GROUP
      * 
      *  \brief The abstract base Wavefn class
      * 
      *  \details TODO
      * 
      *  \author Bryce M. Westheimer
      * 
      *  \date Apr 8, 2019 (Copied)
      * 
      */ 
      class Wavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          // Default constructor
          Wavefn();

          // Typical use-case
          Wavefn(std::string basis_set_name, int num_electrons, std::vector<Atom> atoms) :
            basis_set_(BasisSet(basis_set_name, atoms)), num_electrons_(num_electrons) {

              // TODO: Add 'atoms' as external potential

            }

          // Default destructor
          ~Wavefn();

        /***** Public Member Functions *****/

          // Number of basis functions
          const int num_basis_fns() { return basis_set_.num_basis_fns(); }

          // Number of electrons
          const int num_electrons() { return num_electrons_; }

          // Determine if initialized
          const bool initialized() { return initialized_; }

          // Initialize the wave function
          virtual void initialize() = 0;

          // Obtain the wave function
          virtual void solve() = 0;

          // Calculate the energy corresponding to the wave function
          // Note: This does not include energy terms arising solely
          //       due to interactions between external potential terms
          virtual void energy() = 0;

        /***** Public Member Variables *****/

          // TODO

        /***** Operator Overloads *****/

          // TODO
        
        protected:

        /***** Protected Member Functions *****/

          // TODO

        /***** Protected Member Variables *****/

          // TODO

        private:

        /***** Private Member Functions *****/

          // TODO

        /***** Private Member Variables *****/

          // Basis set that wave function is expanded in
          BasisSet basis_set_;

          // Number of electrons
          int num_electrons_;

          // External potential
          // TODO: Use Operator class template from libaccint

          // Energy (of the wave function ONLY)
          double energy_;

          // Wave function is fully initialized
          bool initialized_;

          // TODO: Etc.

      };

    } // namespace libaccqc::wavefunctions::abstract

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_ABSTRACT_WAVEFN_HPP_ */