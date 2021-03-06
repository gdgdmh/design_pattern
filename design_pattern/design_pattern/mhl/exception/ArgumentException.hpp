#ifndef MH_LIBRABY_EXCEPTION_ARGUMENTEXCEPTION_H_
#define MH_LIBRABY_EXCEPTION_ARGUMENTEXCEPTION_H_

#include <stdexcept>

namespace mhl {

// 渡された引数が無効、不正なときにスローされる例外クラス
class ArgumentException : public std::runtime_error {
public:
  ArgumentException(const std::string& message, int error_code);

  virtual ~ArgumentException();

  int GetResult() {
    return error_code_;
  }
private:
  int error_code_; // エラーコード情報
};

}

#endif  // MH_LIBRABY_EXCEPTION_ARGUMENTEXCEPTION_H_
