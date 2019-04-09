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

#include "dtl.hpp"  // Distributed Vector and Matrix classes

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

          /// Default constructor
          RhfWavefn();

          /// Typical use-case constructor
          RhfWavefn(std::string basis_set_name, int num_electrons, std::vector<Atom> atoms) :
            RestrictedScfWavefn(BasisSet(basis_set_name, atoms), num_electrons, atoms, 0) {

              matrix_size = num_basis_fns()
              // TODO: Initialize relevant matrices

            }

          // TODO: Etc.

          /// Default destructor
          ~RhfWavefn();

        /***** Public Member Functions *****/

          /// Initialize the Hartree-Fock wave function
          virtual void initialize() override;

          /// Obtain the RHF wave function
          virtual void solve() override;

          /// Calculate the energy corresponding to the wave function
          // Note: This does not include energy terms arising solely
          //       due to interactions between external potential terms
          virtual void energy() override;

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

          /// Iterate to self-consistency
          virtual void scf() override;

          /// Calculate the core (one-electron) matrix
          virtual void calculate_core_matrix();

          /// Calculate external embedding contribution to core (one-electron) matrix
          virtual void calculate_core_embed_matrix();

          /// Calculate two-electron matrix
          virtual void calculate_two_electron_matrix();

          /// Calculate external embedding contribution to two-electron matrix
          virtual void calculate_two_electron_embed_matrix();

          // TODO: Etc.

        /***** Private Member Variables *****/

          // Hartree-Fock-Roothaan-Hall matrices
          DistribMatrix overlap_matrix_;      // Replicated, each rank only needs to calculate a patch of this matrix, then global sync.
          DistribMatrix core_matrix_;         // Replicated, each rank only needs to calculate a patch of this matrix, then global sync.
          DistribMatrix fock_matrix_;         // Replicated, each rank only needs to calculate a patch of this matrix, then global sync.
          LocalMatrix density_matrix_;        // Each rank has its own local copy.
          LocalMatrix orbital_coeff_matrix_;  // Each rank has its own local copy.

          // TODO: Etc.

      };

    } // namespace libaccqc::wavefunctions::single_reference

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_RHF_HPP_ */