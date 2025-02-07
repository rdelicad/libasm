#include "../includes/libasm.h"
#include "test_utils.h"

void test_strcmp_equal_strings() {
    print_test_name("Equal strings");
    const char *s1 = "hola";
    const char *s2 = "hola";
    int result = ft_strcmp(s1, s2);
    if (result != 0) {
        print_fail("Expected 0 for equal strings.");
    } else {
        print_pass();
    }
}

void test_strcmp_different_strings_same_length() {
    print_test_name("Different strings with same length");
    const char *s1 = "hola";
    const char *s2 = "holi";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since 'a' < 'i'.");
    } else {
        print_pass();
    }
}

void test_strcmp_different_strings_different_length() {
    print_test_name("Different strings with different lengths");
    const char *s1 = "hola";
    const char *s2 = "holamundo";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since 'a' < 'm'.");
    } else {
        print_pass();
    }
}

void test_strcmp_empty_strings() {
    print_test_name("Empty strings");
    const char *s1 = "";
    const char *s2 = "";
    int result = ft_strcmp(s1, s2);
    if (result != 0) {
        print_fail("Expected 0 for empty strings.");
    } else {
        print_pass();
    }
}

void test_strcmp_one_empty_string() {
    print_test_name("One empty string");
    const char *s1 = "";
    const char *s2 = "hola";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since '\\0' < 'h'.");
    } else {
        print_pass();
    }
}

void test_strcmp_special_characters() {
    print_test_name("Strings with special characters");
    const char *s1 = "hola!";
    const char *s2 = "hola?";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since '!' < '?'.");
    } else {
        print_pass();
    }
}

void test_strcmp_numbers() {
    print_test_name("Strings with numbers");
    const char *s1 = "123";
    const char *s2 = "124";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since '3' < '4'.");
    } else {
        print_pass();
    }
}

void test_strcmp_case_sensitivity() {
    print_test_name("Case sensitivity");
    const char *s1 = "Hola";
    const char *s2 = "hola";
    int result = ft_strcmp(s1, s2);
    if (result >= 0) {
        print_fail("Expected a negative value since 'H' < 'h'.");
    } else {
        print_pass();
    }
}

void test_strcmp_null_pointer_s1() {
    print_test_name("Null pointer for s1");
    const char *s1 = NULL;
    const char *s2 = "hola";
    errno = 0; // Limpiar errno antes de la prueba
    int result = ft_strcmp(s1, s2);
    if (result != 0 || errno != EFAULT) {
        print_fail("Expected 0 return and errno = EFAULT for null s1.");
    } else {
        print_pass();
    }
}

void test_strcmp_null_pointer_s2() {
    print_test_name("Null pointer for s2");
    const char *s1 = "hola";
    const char *s2 = NULL;
    errno = 0; // Limpiar errno antes de la prueba
    int result = ft_strcmp(s1, s2);
    if (result != 0 || errno != EFAULT) {
        print_fail("Expected 0 return and errno = EFAULT for null s2.");
    } else {
        print_pass();
    }
}

void test_strcmp_both_null_pointers() {
    print_test_name("Both pointers are null");
    const char *s1 = NULL;
    const char *s2 = NULL;
    errno = 0; // Limpiar errno antes de la prueba
    int result = ft_strcmp(s1, s2);
    if (result != 0 || errno != EFAULT) {
        print_fail("Expected 0 return and errno = EFAULT for both null pointers.");
    } else {
        print_pass();
    }
}

// Función principal para ejecutar todas las pruebas
void test_ft_strcmp() {
    printf(YELLOW"\n#################### ft_strcmp #####################\n"RESET);

    test_strcmp_equal_strings();
    test_strcmp_different_strings_same_length();
    test_strcmp_different_strings_different_length();
    test_strcmp_empty_strings();
    test_strcmp_one_empty_string();
    test_strcmp_special_characters();
    test_strcmp_numbers();
    test_strcmp_case_sensitivity();
    test_strcmp_null_pointer_s1();
    test_strcmp_null_pointer_s2();
    test_strcmp_both_null_pointers();
}