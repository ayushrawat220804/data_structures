cmake_minimum_required(VERSION 3.29)
project(cpp_dsa)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(data_structures)
include_directories(object_oriented_programming)
include_directories(paid_course)
include_directories(pattern)

add_executable(cpp_dsa
    data_structures/array/123.cpp
    data_structures/array/2131213.cpp
    "data_structures/array/2d array.cpp"
    data_structures/array/3333.cpp
    data_structures/array/array_complete.cpp
    data_structures/array/complete_array.cpp
    data_structures/array/declaration.cpp
    "data_structures/array/defaukt 3by3martirxs.cpp"
    "data_structures/array/do hile array.cpp"
    data_structures/array/menu_drive_array.cpp
    data_structures/linkedlist/complete_singly_linkedlist.cpp
    data_structures/linkedlist/doublyl_linkedlist_insertion.c
    data_structures/linkedlist/doublyl_linkedlist_insertion.cpp
    data_structures/linkedlist/practice.cpp
    "data_structures/linkedlist/singlylinkedlist in c.c"
    "data_structures/linkedlist/singlylinkedlist in c.cpp"
    object_oriented_programming/123123.cpp
    object_oriented_programming/22.cpp
    object_oriented_programming/access_class_members.cpp
    "object_oriented_programming/all_the _memeber_of_one_class_as_the_friend_of_another_class.cpp"
    object_oriented_programming/array_of_object.cpp
    object_oriented_programming/array_of_object_ex1.cpp
    object_oriented_programming/array_of_object_ex2.cpp
    object_oriented_programming/callby_address_or_passby_pointer.cpp
    object_oriented_programming/class.cpp
    object_oriented_programming/class_object_code.cpp
    object_oriented_programming/constant_classroom.cpp
    object_oriented_programming/constant_objects.cpp
    object_oriented_programming/constants_literals.cpp
    "object_oriented_programming/constructor (2).cpp"
    "object_oriented_programming/constructor theory.cpp"
    object_oriented_programming/constructor.cpp
    object_oriented_programming/constructor_limites.cpp
    object_oriented_programming/constructor_limites_theory.cpp
    object_oriented_programming/constructor_overloading.cpp
    object_oriented_programming/copy_constructor.cpp
    object_oriented_programming/default_constructor.cpp
    object_oriented_programming/destructor_example.cpp
    object_oriented_programming/destructors.cpp
    object_oriented_programming/destructors_declaration.cpp
    object_oriented_programming/encapsulation.cpp
    object_oriented_programming/friend_function.cpp
    object_oriented_programming/friend_function_by_reference.cpp
    object_oriented_programming/friend_function_ex1.cpp
    object_oriented_programming/friend_function_ex1_objectpass.cpp
    object_oriented_programming/friend_function_ex1_simple.cpp
    object_oriented_programming/friend_function_friend_to_more_classes.cpp
    object_oriented_programming/friend_function_friend_to_more_classes_ex1.cpp
    object_oriented_programming/inheritance.cpp
    object_oriented_programming/inheritance_declaration.cpp
    object_oriented_programming/inheritance_importance.cpp
    object_oriented_programming/member_functions.cpp
    object_oriented_programming/nesting_of_member.cpp
    object_oriented_programming/NOOTEPAD.cpp
    object_oriented_programming/objects.cpp
    object_oriented_programming/objects_as_function_arguments.cpp
    object_oriented_programming/objects_as_function_arguments_by_reference.cpp
    object_oriented_programming/objects_as_function_arguments_by_reference_ex1.cpp
    object_oriented_programming/objects_as_function_arguments_ex1.cpp
    object_oriented_programming/objects_as_function_arguments_ex2.cpp
    object_oriented_programming/operate_on_objects_of_two_different_class_using_friend.cpp
    "object_oriented_programming/paramemters and arguments.cpp"
    object_oriented_programming/parameterized_constructors.cpp
    object_oriented_programming/pass_by_value.cpp
    object_oriented_programming/passby_reference.cpp
    object_oriented_programming/qwe.cpp
    object_oriented_programming/reference_value.cpp
    object_oriented_programming/returning_object_function_definition_inside_class.cpp
    object_oriented_programming/returning_object_function_definition_outside_class.cpp
    object_oriented_programming/returning_object_function_definition_outside_class_ex1.cpp
    "object_oriented_programming/returning_object_with friend_function_inside_function_definition.cpp"
    "object_oriented_programming/returning_object_with friend_function_outside_function_definition.cpp"
    object_oriented_programming/shop_item_class.cpp
    "object_oriented_programming/static function.cpp"
    object_oriented_programming/static_classroom_example.cpp
    object_oriented_programming/static_data_membe.cpp
    object_oriented_programming/static_membe_and_member_function.cpp
    object_oriented_programming/static_member_function.cpp
    object_oriented_programming/unable_to_create_objects.cpp
    object_oriented_programming/visibility_mode2.cpp
    object_oriented_programming/why_do_we_use_friend.cpp
    paid_course/02.DS-ARRAYS/first.cpp
    paid_course/02.DS-ARRAYS/Untitled1.c
    paid_course/02.DS-ARRAYS/Untitled1.cpp
    paid_course/03.DS-CHARACTER-ARRAY/123123.cpp
    paid_course/03.DS-CHARACTER-ARRAY/cin.getline.cpp
    paid_course/03.DS-CHARACTER-ARRAY/inbuilt_functions.cpp
    paid_course/03.DS-CHARACTER-ARRAY/introduction.cpp
    paid_course/03.DS-CHARACTER-ARRAY/length_string.cpp
    paid_course/03.DS-CHARACTER-ARRAY/reverse_a_string.cpp
    paid_course/03.DS-CHARACTER-ARRAY/strcmp.cpp
    "paid_course/03.DS-CHARACTER-ARRAY/strcpy\;.cpp"
    paid_course/03.DS-CHARACTER-ARRAY/strlen.cpp
    paid_course/03.DS-CHARACTER-ARRAY/strncpy.cpp
    paid_course/03.DS-CHARACTER-ARRAY/tempCodeRunnerFile.cpp
    pattern/invertedtriangle.cpp
    pattern/square.cpp
    pattern/triangle.cpp
    1.cpp
    1d_char_arry_string.cpp
    2darray.cpp
    2darray_byuser.cpp
    2darray_forloop.cpp
    2darray_string_forloop_user.cpp
    40.1_fuctions.cpp
    40_fuctions.cpp
    41.1_iamvoid.cpp
    41_iamvoid.cpp
    42_inline_function.cpp
    "add two numbers.cpp"
    adventure.cpp
    another_example_of_while_loop.cpp
    array.cpp
    basicsofcpp.cpp
    bitwise.cpp
    bitwise_operator.cpp
    break_statement.cpp
    builtin_datatypes.cpp
    continue_statement.cpp
    cppinfo.cpp
    do_while_loop.cpp
    else_if.cpp
    for_loop.cpp
    fuctions.cpp
    function_overloading.cpp
    hello.cpp
    helloinfo.cpp
    helloworld.cpp
    if_else.cpp
    Implicit_Explicit_Conversion.cpp
    inline_function.cpp
    input.cpp
    input_user_2darray.cpp
    inputs.cpp
    logical_and_operator.cpp
    logical_operator.cpp
    nested_for_loop.cpp
    parameterised_function.cpp
    pointer.cpp
    precedence_operator.cpp
    setprecision.cpp
    "sizeof operator.cpp"
    speacial_operators.cpp
    statements_types.cpp
    structure.cpp
    switch_case.cpp
    union.cpp
    while_loop.cpp)
