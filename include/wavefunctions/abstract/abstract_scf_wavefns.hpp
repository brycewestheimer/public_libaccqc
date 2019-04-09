// abstract_scf_wavefns.hpp: Abstract base classes for SCF-type wave functions 

#ifndef LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_
#define LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_

#include "abstract_wavefn.hpp"

namespace libaccqc {

  namespace wavefunctions {

    namespace abstract {

      /*! \class ScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract self-consistent-field wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      class ScfWavefn : public Wavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          ScfWavefn();

          ScfWavefn(std::string basis_set_name, int num_electrons, std::vector<Atom> atoms) :
            Wavefn(basis_set_name, num_electrons, atoms) {

              // TODO: Any additional initializing

            }

          ~ScfWavefn();

        /***** Public Member Functions *****/

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

          // Iterate to self-consistency
          virtual void scf() = 0;

          // TODO: Etc.

        /***** Private Member Variables *****/

          // TODO: Etc.

      };

      /*! \class RestrictedScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract restricted self-consistent-field wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      class RestrictedScfWavefn : public ScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          
          RestrictedScfWavefn();

          RestrictedScfWavefn(std::string basis_set_name, int num_electrons, 
                              std::vector<Atom> atoms, int spin) :
            ScfWavefn(basis_set_name, num_electrons, atoms), spin_(spin) {

              // TODO: Any additional initialization required

            }
          
          ~RestrictedScfWavefn();

        /***** Public Member Functions *****/

          // Initialize the wave function
          virtual void initialize() = 0;

          // Obtain the wave function
          virtual void solve() = 0;

          // Iterate to self-consistency
          virtual void scf() = 0;

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

          // Spin of the wave function
          int spin_;

          // Number of paired electrons 
          // = Number of electrons - (number of unpaired alpha electrons + number of unpaired beta electrons)
          int num_electron_pairs_;

          // TODO: Etc.

      };

      /*! \class UnrestrictedScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract unrestricted self-consistent-field wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      class UnrestrictedScfWavefn : public ScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          UnrestrictedScfWavefn();
          // TODO: Etc.
          ~UnrestrictedScfWavefn();

        /***** Public Member Functions *****/

          // Initialize the wave function
          virtual void initialize() = 0;

          // Obtain the wave function
          virtual void solve() = 0;

          // Iterate to self-consistency
          virtual void scf() = 0;

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

          // Spin of the wave function
          double spin_;

          // Number of alpha electrons
          int num_alpha_electrons_;

          // Number of beta electrons
          int num_beta_electrons_;
          
          // TODO: Etc.

      };

      /*! \class MultirefScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract multireference self-consistent-field wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      template<class RefWavefnType>
      class MultirefScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          MultirefScfWavefn();
          // TODO: Etc.
          ~MultirefScfWavefn();

        /***** Public Member Functions *****/

          // Initialize the wave function
          virtual void initialize() = 0;

          // Obtain the wave function
          virtual void solve() = 0;

          // Iterate to self-consistency
          virtual void scf() = 0;

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

          struct RefGenerator {

            // TODO: Define struct which acts on RefWavefn to generate each reference

          };

        /***** Private Member Functions *****/

          // TODO

        /***** Private Member Variables *****/

          // Reference wave function
          RefWavefnType reference_wavefn_;

          // Spin of the wave function
          int spin_;

          // Number of reference wave functions
          int num_ref_wavefns_;
          
          // TODO: Etc.

      };

    } // namespace libaccqc::wavefunctions::abstract

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_ */