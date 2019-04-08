/*
 * rhf.hpp
 * 
 * Copied: Apr 8, 2019
 * Author: Bryce M. Westheimer
 * 
 * Description: Restricted Hartree-Fock wave function class declaration
 * 
 */

#ifndef LIBACCQC_RHF_HPP_
#define LIBACCQC_RHF_HPP_

#include "abstract_scf_wavefns.hpp"

// Distributed template library for distributed vectors and matrices
#include "dtl.hpp"

// Convenience typedef(s)
typedef dtl::distributed::math::Matrix<double> DistribMatrix;
typedef dtl::local::math::Matrix<double> LocalMatrix;


namespace libaccqc {

  namespace wavefunctions {

    namespace single_reference {

      /*! \class RhfWavefn
      *  \ingroup TODO:ADD_GROUP
      * 
      *  \brief The Restricted Hartree-Fock wave function class
      * 
      *  \details TODO
      * 
      *  \author Bryce M. Westheimer
      * 
      *  \date Apr 8, 2019 (Copied)
      * 
      */ 
      class RhfWavefn : public RestrictedScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          RhfWavefn();
          // TODO: Etc.
          ~RhfWavefn();

        /***** Public Member Functions *****/

          // TODO

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

          // Hartree-Fock-Roothaan-Hall matrices
          DistribMatrix overlap_matrix_;
          DistribMatrix core_matrix_;
          DistribMatrix fock_matrix_;
          LocalMatrix density_matrix_;  // No need to distribute, just keep local version
          LocalMatrix coeff_matrix_;    // No need to distribute, just keep local version

          // TODO: Etc.

      };

    } // namespace libaccqc::wavefunctions::single_reference

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_RHF_HPP_ */