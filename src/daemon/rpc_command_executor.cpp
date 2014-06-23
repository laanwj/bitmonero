#include "daemon/rpc_command_executor.h"

using namespace daemonize;

bool t_rpc_command_executor::print_peer_list() {
  std::cout << "print peer list" << std::endl;
  return true;
}

bool t_rpc_command_executor::save_blockchain() {
  std::cout << "save blockchain" << std::endl;
  return true;
}

bool t_rpc_command_executor::show_hash_rate() {
  std::cout << "show hash rate" << std::endl;
  return true;
}

bool t_rpc_command_executor::hide_hash_rate() {
  std::cout << "hide hash rate" << std::endl;
  return true;
}

bool t_rpc_command_executor::show_difficulty() {
  std::cout << "show difficulty" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_connections() {
  std::cout << "print connections" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_blockchain_info(uint64_t start_block_index, uint64_t end_block_index) {
  std::cout << "print blockchain info" << std::endl;
  return true;
}

bool t_rpc_command_executor::set_log_level(uint16_t level) {
  std::cout << "set log level" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_block_by_hash(crypto::hash block_hash) {
  std::cout << "print block by hash" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_block_by_height(uint64_t height) {
  std::cout << "print block by height" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_transaction(crypto::hash transaction_hash) {
  std::cout << "print transaction" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_transaction_pool_long() {
  std::cout << "print transaction pool long" << std::endl;
  return true;
}

bool t_rpc_command_executor::print_transaction_pool_short() {
  std::cout << "print transaction pool short" << std::endl;
  return true;
}

bool t_rpc_command_executor::start_mining(cryptonote::account_public_address address, uint64_t num_threads) {
  std::cout << "start mining" << std::endl;
  return true;
}

bool t_rpc_command_executor::stop_mining() {
  std::cout << "stop mining" << std::endl;
  return true;
}
