#ifndef DESIGN_PATTERN_COMMAND_ICOMMANDABLE_H_
#define DESIGN_PATTERN_COMMAND_ICOMMANDABLE_H_

namespace design_pattern {

// コマンドインターフェースクラス(シミュレーションゲーム風)
class ICommandable {
public:
  /**
   * @brief Destroy the ICommandable object
   * 
   */
  virtual ~ICommandable() {
  }

  /**
   * @brief コマンドを実行する
   * 
   */
  virtual void Execute() = 0;

  /**
   * @brief コマンドのキャンセル
   * 
   */
  virtual void Undo() = 0;
};

}

#endif  // DESIGN_PATTERN_COMMAND_ICOMMANDABLE_H_
