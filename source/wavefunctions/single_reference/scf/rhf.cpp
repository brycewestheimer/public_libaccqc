/*
 * rhf.cpp
 * 
 * Copied: Apr 9, 2019
 * Author: Bryce M. Westheimer
 * 
 * Description: Restricted Hartree-Fock wave function class definitions
 * 
 */

#include "wavefunctions/single_reference/scf/hatree_fock/rhf.hpp"

namespace libaccqc {

  namespace wavefunctions {

    namespace single_reference {

    /***** Constructor(s) and Destructor(s) *****/

      // Default constructor
      RhfWavefn::RhfWavefn() {

        // TODO: Etc.

      }

      RhfWavefn::~RhfWavefn() {

        // TODO

      }

    /***** Public Member Functions *****/

      // Initialize parameters for the wave function
      void RhfWavefn::initialize() {

        // TODO

      }

      // Solve for Hartree-Fock-Roothann-Hall equations for the RHF wave function
      void RhfWavefn::solve() {

        // TODO

      }

      // Calculate the energy (only terms involving wave function)
      void RhfWavefn::energy() {

        // TODO

      }

    /***** Private Member Functions *****/

      // Iterate to self-consistency
      void RhfWavefn::scf() {

        // TODO

      }

      // Calculate the core (one-electron) matrix
      void RhfWavefn::calculate_core_matrix() {

        // TODO

      }

      // Calculate embedding contribution to the core (one-electron) matrix
      void RhfWavefn::calculate_core_embed_matrix() {

        // TODO

      }

      // Calculate the two-electron matrix (J and K matrices)
      void RhfWavefn::calculate_two_electron_matrix() {

        // TODO

      }

      // Calculate two-electron embedding matrix contribution
      void RhfWavefn::calculate_two_electron_embed_matrix() {

        // TODO

      }

      // TODO: Etc.

    } // namespace libaccqc::wavefunctions::single_reference

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc