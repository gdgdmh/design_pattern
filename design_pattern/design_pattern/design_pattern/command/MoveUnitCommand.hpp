#ifndef DESIGN_PATTERN_COMMAND_MOVEUNITCOMMAND_H_
#define DESIGN_PATTERN_COMMAND_MOVEUNITCOMMAND_H_

#include "../GameObject.hpp"

namespace design_pattern {

// ユニット移動クラス
class MoveUnitCommand : public design_pattern::ICommandable {
public:

  MoveUnitCommand() {
  }

  /**
   * @brief Destroy the MoveUnitCommand object
   * 
   */
  virtual ~MoveUnitCommand() {
  }

  /**
   * @brief コマンドを実行する
   * 
   */
  virtual void Execute() {
  }

  /**
   * @brief コマンドのキャンセル
   * 
   */
  virtual void Undo() {
  }
};

}

#endif  // DESIGN_PATTERN_COMMAND_MOVEUNITCOMMAND_H_
