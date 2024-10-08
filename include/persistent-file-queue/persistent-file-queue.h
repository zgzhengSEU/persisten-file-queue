#pragma once

#include <string>

namespace persistent_file_queue {

  /**  Language codes to be used with the PersistentFileQueue class */
  enum class LanguageCode { EN, DE, ES, FR };

  /**
   * @brief A class for saying hello in multiple languages
   */
  class PersistentFileQueue {
    std::string name;

  public:
    /**
     * @brief Creates a new PersistentFileQueue
     * @param name the name to greet
     */
    PersistentFileQueue(std::string name);

    /**
     * @brief Creates a localized string containing the greeting
     * @param lang the language to greet in
     * @return a string containing the greeting
     */
    std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };
 
}  // namespace persistent_file_queue
