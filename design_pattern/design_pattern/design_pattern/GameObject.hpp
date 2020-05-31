#ifndef DESIGN_PATTERN_GAMEOBJECT_H_
#define DESIGN_PATTERN_GAMEOBJECT_H_

namespace design_pattern {

// ゲームオブジェクトクラス
class GameObject {
public:

  /**
   * @brief Destroy the Game Object object
   * 
   */
  virtual ~GameObject() {
  }

  /**
   * @brief ゲームオブジェクトのタスク実行
   * 
   */
  virtual void Task() {
  }
};

}

#endif  // DESIGN_PATTERN_GAMEOBJECT_H_
