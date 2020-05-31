#ifndef DESIGN_PATTERN_COMMAND_HANDLEINPUT_H_
#define DESIGN_PATTERN_COMMAND_HANDLEINPUT_H_

#include "../GameObject.hpp"
#include "ICommandable.hpp"

namespace design_pattern {

  /**
   * @brief 入力処理クラス(設計例なので実動作はしない)
   * 
   * @details 以下のような形で使用
   * ICommandable* command = handleInput.InputHandle();
   * if (command) {
   *   command->Execute();
   * }
   */
  class HandleInput {
  public:

    HandleInput() : button_x_(nullptr), button_y_(nullptr), button_a_(nullptr), button_b_(nullptr) {
    }

    /**
     * @brief 入力処理
     * 
     * @details 入力に対応したコマンドインターフェースを返す
     * 何もしないときはnullptr
     */
    design_pattern::ICommandable* InputHandle() {
      if (IsPressX()) {
        return button_x_;
      }
      if (IsPressY()) {
        return button_y_;
      }
      if (IsPressA()) {
        return button_a_;
      }
      if (IsPressB()) {
        return button_b_;
      }
      return nullptr;
    }

    /**
     * @brief ボタン入力の判定
     * 
     * @details ここでは設計例なので実装はしない
     * @return true ボタンを押した
     * @return false ボタンを押していない
     */
    bool IsPressX() {
      return false;
    }

    /**
     * @brief ボタン入力の判定
     * 
     * @details ここでは設計例なので実装はしない
     * @return true ボタンを押した
     * @return false ボタンを押していない
     */
    bool IsPressY() {
      return false;
    }

    /**
     * @brief ボタン入力の判定
     * 
     * @details ここでは設計例なので実装はしない
     * @return true ボタンを押した
     * @return false ボタンを押していない
     */
    bool IsPressA() {
      return false;
    }

    /**
     * @brief ボタン入力の判定
     * 
     * @details ここでは設計例なので実装はしない
     * @return true ボタンを押した
     * @return false ボタンを押していない
     */
    bool IsPressB() {
      return false;
    }

  private:
    // 各ボタンに対応したコマンド(コード上では作成や設定をしていないが実際は設定する)
    design_pattern::ICommandable* button_x_;
    design_pattern::ICommandable* button_y_;
    design_pattern::ICommandable* button_a_;
    design_pattern::ICommandable* button_b_;

  };

}

#endif  // DESIGN_PATTERN_COMMAND_HANDLEINPUT_H_
