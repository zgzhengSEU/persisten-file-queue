#include <doctest/doctest.h>
#include <persistent-file-queue/persistent-file-queue.h>
#include <persistentfilequeue/version.h>

#include <string>

TEST_CASE("PersistentFileQueue") {
  using namespace persistent_file_queue;

  PersistentFileQueue persistent_file_queue("Tests");

  CHECK(persistent_file_queue.greet(LanguageCode::EN) == "Hello, Tests!");
  CHECK(persistent_file_queue.greet(LanguageCode::DE) == "Hallo Tests!");
  CHECK(persistent_file_queue.greet(LanguageCode::ES) == "¡Hola Tests!");
  CHECK(persistent_file_queue.greet(LanguageCode::FR) == "Bonjour Tests!");
}

TEST_CASE("PersistentFileQueue version") {
  static_assert(std::string_view(PERSISTENTFILEQUEUE_VERSION) == std::string_view("1.0"));
  CHECK(std::string(PERSISTENTFILEQUEUE_VERSION) == std::string("1.0"));
}
