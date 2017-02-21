#ifndef PerfUtils_mpi_local_ranks_HPP
#define PerfUtils_mpi_local_ranks_HPP

#include <mpi.h>
#include <string>
#include <Teuchos_Comm.hpp>
#include <Teuchos_RCP.hpp>


namespace PerfUtils {
/*
 * API usage:
 * get information about how many processes are on a single node
      MPI_Comm nodeComm;
      get_node_mpi_comm (&nodeComm);
      const int local_rank = get_local_rank (nodeComm);
      const int local_procs = get_local_size (nodeComm);
 */
void getNodeComm (MPI_Comm* nodeComm);

std::string getHostname ();

} // end namespace PerfUtils

#endif // PerfUtils_mpi_local_ranks_HPP
