#define FILE_NOT_FOUND_RC  -2
#define PATH_NOT_FOUND_RC  -3
#define TOO_MANY_OPEN_FILES_RC  -4
#define ACCESS_DENIED_RC  -5
#define MEMORY_CONTROL_BLOCKS_RC  -7
#define INSUFFICIENT_MEMORY_RC  -8
#define INVALID_DRIVE_RC  -15
#define NO_MORE_FILES_RC  -18
#define DISK_IS_WRITE_PROTECTED_RC  -19
#define UNKNOWN_UNIT_RC  -20
#define DRIVE_NOT_READY_RC  -21
#define BAD_DEVICE_COMMAND_RC  -22
#define DATA_ERROR_RC  -23
#define BAD_REQUEST_STRUCTURE_LENGTH_RC  -24
#define SEEK_ERROR_RC  -25
#define UNKNOWN_MEDIA_TYPE_RC  -26
#define SECTOR_NOT_FOUND_RC  -27
#define PRINTER_OUT_OF_PAPER_RC  -28
#define WRITE_FAULT_RC  -29
#define READ_FAULT_RC  -30
#define GENERAL_FAILURE_RC  -31
#define ERROR_OPENING_FILE_RC  -32
#define ERROR_READING_FILE_RC  -33
#define ERROR_WRITING_FILE_RC  -34
#define ERROR_CLOSING_FILE_RC  -35
#define INSUFFICIENT_DISK_SPACE_RC  -36
#define PROGRAM_CAN_NOT_BE_RUN_IN_OS2_RC  -37
#define ERROR_CREATING_DIRECTORY_RC  -38
#define SESSION_PARENT_EXISTS_RC  -39
#define UNABLE_TO_OPEN_KDF_RC  -500

#define UNABLE_TO_READ_KDF_RC  -502

#define INCORECT_KDF_VERSION_RC  -504

#define ERROR_OPENING_KEYBOARD_RC  -506

#define UNABLE_TO_OPEN_TTY_DEV_RC  -508
#define SLICK_EDITOR_VERSION_RC  -2000
#define SPILL_FILE_TOO_LARGE_RC  -2001
#define ON_RC  -2002
#define OFF_RC  -2003
#define EXPECTING_IGNORE_OR_EXACT_RC  -2004
#define ERROR_IN_MARGIN_SETTINGS_RC  -2005
#define ERROR_IN_TAB_SETTINGS_RC  -2006
#define UNKNOWN_COMMAND_RC  -2007
#define MISSING_FILENAME_RC  -2008
#define TOO_MANY_FILES_RC  -2009
#define TOO_MANY_SELECTIONS_RC  -2010
#define LINES_TRUNCATED_RC  -2011
#define TEXT_ALREADY_SELECTED_RC  -2012
#define TEXT_NOT_SELECTED_RC  -2013
#define INVALID_SELECTION_TYPE_RC  -2014
#define SOURCE_DEST_CONFLICT_RC  -2015
#define NEW_FILE_RC  -2016
#define LINE_SELECTION_REQUIRED_RC  -2017
#define BLOCK_SELECTION_REQUIRED_RC  -2018
#define TOO_MANY_GROUPS_RC  -2019
#define MACRO_FILE_NOT_FOUND_RC  -2020

#define HIT_ANY_KEY_RC  -2023
#define BOTTOM_OF_FILE_RC  -2024
#define TOP_OF_FILE_RC  -2025
#define INVALID_POINT_RC  -2026
#define TYPE_ANY_KEY_RC  -2027
#define TOO_MANY_WINDOWS_RC  -2028
#define NOT_ENOUGH_MEMORY_RC  -2029
#define PRESS_ANY_KEY_TO_CONTINUE_RC  -2030
#define SPILL_FILE_IO_ERROR_RC  -2031
#define TYPE_NEW_DRIVE_LETTER_RC  -2032
#define NOTHING_TO_UNDO_RC  -2033
#define NOTHING_TO_REDO_RC  -2034
#define LINE_OR_BLOCK_SELECTION_REQUIRED_RC  -2035
#define INVALID_SELECTION_HANDLE_RC  -2036
#define SEARCHING_AND_REPLACING_RC  -2037
#define COMMAND_CANCELLED_RC  -2038
#define ERROR_CREATING_SEMAPHORE_RC  -2039
#define ERROR_CREATING_THREAD_RC  -2040
#define ERROR_CREATING_QUEUE_RC  -2041
#define PROCESS_ALREADY_RUNNING_RC  -2042
#define CANT_FIND_INIT_PROGRAM_RC  -2043
#define CMDLINE_TOO_LONG_RC  -2044
#define SERIAL_NUMBER_RC  -2045
#define FAILED_TO_BACKUP_FILE_RC  -2101
#define FAILED_TO_BACKUP_FILE_ACCESS_DENIED_RC  -2105
#define FAILED_TO_BACKUP_FILE_INSUFFICIENT_DISK_SPACE_RC -2111
#define INVALID_REGULAR_EXPRESSION_RC  -2500
#define INCORRECT_VERSION_RC  -3000
#define NO_MAIN_ENTRY_POINT_RC  -3001
#define INTERPRETER_OUT_OF_MEMORY_RC  -3002
#define PROCEDURE_NOT_FOUND_RC  -3003

#define MODULE_ALREADY_LOADED_RC  -3006
#define CANT_REMOVE_MODULE_RC  -3007
#define NUMERIC_OVERFLOW_RC  -3008
#define INVALID_NUMBER_ARGUMENT_RC  -3009
#define RECURSION_TOO_DEEP_RC  -3010
#define INVALID_NUMBER_OF_PARAMETERS_RC  -3011
#define OUT_OF_STRING_SPACE_RC  -3012
#define EXPRESSION_STACK_OVERFLOW_RC  -3013
#define ILLEGAL_OPCODE_RC  -3014
#define INVALID_ARGUMENT_RC  -3015
#define LOOP_STACK_OVERFLOW_RC  -3016
#define DIVIDE_BY_ZERO_RC  -3017
#define INVALID_CALL_BY_REFERENCE_RC  -3018
#define PROCEDURE_NEEDS_MORE_ARGS_RC  -3019
#define BREAK_KEY_PRESSED_RC  -3020
#define CANT_WRITE_STATE_DURING_REL_RC  -3021
#define STRING_NOT_FOUND_RC  -3022
/* KBD_MACRO_TOO_LONG_RC = -3023  Can't get this any more. */
#define COMMAND_NOT_FOUND_RC  -3024

#define FUNCTION_NOT_SUPPORTED_IN_DOS_RC  -3027
#define FUNCTION_NOT_SUPPORTED_IN_OS2_RC  -3028
#define INVALID_NAME_INDEX_RC  -3029
#define INVALID_OPTION_RC  -3030


#define SPELL_FILE_NOT_FOUND_RC       -3501
#define SPELL_ERROR_OPENING_MAIN_DICT_FILE_RC         -3504
#define SPELL_ERROR_OPENING_USER_DICT_FILE_RC         -3507
#define SPELL_NOT_ENOUGH_MEMORY_RC    -3510
#define SPELL_ERROR_READING_MAIN_INDEX_RC     -3511
#define SPELL_ERROR_OPENING_COMMON_DICT_RC    -3514
#define SPELL_COMMON_DICT_TOO_LARGE_RC        -3517
#define SPELL_ERROR_READING_COMMON_DICT_RC    -3518
#define SPELL_USER_DICT_TOO_LARGE_RC  -3521
#define SPELL_ERROR_READING_USER_DICT_RC      -3524
#define SPELL_ERROR_UPDATING_USER_DICT_FILE_RC        -3527
#define SPELL_ACCESS_DENIED_RC        -3530
#define SPELL_OUT_OF_DISK_SPACE_RC    -3533
#define SPELL_ERROR_READING_MAIN_DICT_RC      -3536
#define SPELL_WORD_NOT_FOUND_RC      -3537
#define SPELL_CAPITALIZATION_RC      -3538
#define SPELL_WORD_TOO_SMALL_RC      -3539
#define SPELL_WORD_TOO_LARGE_RC      -3540
#define SPELL_WORD_INVALID_RC        -3541
#define SPELL_REPLACE_WORD_RC        -3542
#define SPELL_HISTORY_TOO_LARGE_RC   -3543
#define SPELL_USER_DICT_NOT_LOADED_RC        -3544
#define SPELL_NO_MORE_WORDS_RC       -3545
#define SPELL_REPEATED_WORD_RC       -3546

#define CLEX_NOT_ENOUGH_MEMORY_RC     -3547
#define CLEX_TOO_MANY_MLCOMMENTS_DEFINED_RC   -3548
#define CLEX_IDENTIFIER_MLCOMMENTS_NOT_SUPPORTED_RC -3549
#define CLEX_TOO_MANY_CFLINECOMMENTS_DEFINED_RC -3550
#define CLEX_IDCHARS_MUST_BE_DEFINED_FIRST_RC -3551
#define CLEX_INVALID_STYLE_RC       -3552
#define CLEX_INVALID_MLCOMMENT_RC   -3553
#define CLEX_INVALID_LINECOMMENT_RC -3554
#define CLEX_INVALID_NAME_RC        -3555
#define CLEX_FILE_NOT_FOUND_RC      -3556
#define CLEX_ACCESS_DENIED_RC       -3557
#define CLEX_UNABLE_TO_OPEN_FILE_RC -3558


#define BT_KEY_ALREADY_EXISTS_RC	-3900
#define BT_RECORD_NOT_FOUND_RC	-3901
#define BT_UNABLE_TO_RW_FILE_RC	-3902
#define BT_DATABASE_CORRUPT_RC	-3903
#define BT_RECORD_LENGTH_TOO_LARGE_RC	-3904
#define BT_INCORRECT_VERSION_RC	-3905
#define BT_INCORRECT_MAGIC_RC	-3906
#define BT_TOO_MANY_KEYS_RC	-3907
#define BT_FEATURE_NOT_FINISHED_RC	-3908
#define BT_FIELD_IS_FIXED_LENGTH_RC	-3909
#define BT_FIELD_IS_VARIABLE_LENGTH_RC	-3910
#define BT_BLOCK_FULL_RC	-3911
#define BT_UNABLE_TO_DELETE_RC	-3912
#define BT_INVALID_BLOCK_SIZE_RC	-3913
#define BT_MISSING_REQUIRED_FIELD_RC	-3914
#define BT_ERROR_UPDATING_INDEX_RC	-3915
#define BT_ERROR_CREATING_TABLE_RC	-3916
#define BT_ERROR_CREATING_INDEX_RC	-3917
#define BT_ERROR_OPENING_TABLE_RC	-3918
#define BT_ERROR_OPENING_INDEX_RC	-3919
#define BT_FEATURE_NOT_ALLOWED_RC	-3920
#define BT_TABLE_NOT_FOUND_RC	-3921
#define BT_KEY_NOT_FOUND_RC	-3922
#define BT_FIELD_NOT_FOUND_RC	-3923
#define BT_INDEX_NOT_FOUND_RC	-3924
#define BT_INTERNAL_ERROR_RC	-3925
#define BT_FIELD_NOT_SEARCHABLE_RC	-3926
#define BT_FIELD_ALREADY_EXISTS_RC	-3927
#define BT_INDEX_ALREADY_EXISTS_RC	-3928
#define BT_TABLE_ALREADY_EXISTS_RC	-3929
#define BT_FIELD_NAME_REQUIRED_RC	-3930
#define BT_INDEX_NAME_REQUIRED_RC	-3931
#define BT_TABLE_NAME_REQUIRED_RC	-3932
#define BT_DATABASE_NAME_REQUIRED_RC	-3933
#define BT_FIELD_INVALID_RC	-3934
#define BT_INVALID_DB_HANDLE_RC	-3935
#define BT_INVALID_TAG_TYPE_RC	-3936
#define BT_INVALID_TABLE_HANDLE_RC	-3937
#define BT_INVALID_INDEX_HANDLE_RC	-3938
#define BT_INVALID_SEEKPOS_RC	-3939
#define BT_DATABASE_IS_FOR_UNIX_RC	-3940
#define BT_DATABASE_IS_FOR_DOS_RC	-3941
#define BT_DATABASE_IS_READ_ONLY_RC	-3942
