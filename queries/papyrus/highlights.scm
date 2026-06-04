; Comments & docs
(line_comment) @comment
(block_comment) @comment
(docstring) @comment.documentation

; Literals
(string_literal) @string
(escape_sequence) @string.escape
(int_literal) @number
(float_literal) @number.float
(bool_literal) @boolean
(none_literal) @constant.builtin

; Types
(builtin_type) @type.builtin
(type (identifier) @type)
(type (qualified_identifier) @type)
(cast_expression type: (type) @type)
(is_expression type: (type) @type)
(new_expression type: (identifier) @type)
(new_expression type: (qualified_identifier) @type)
(new_expression type: (builtin_type) @type.builtin)

; Flags / modifiers
(flag) @keyword.modifier

; Self / Parent
(self_expression) @variable.builtin
(parent_expression) @variable.builtin

; Declarations: names
(script_header name: (_) @type.definition)
(script_header parent: (_) @type)
(struct_definition name: (identifier) @type.definition)
(struct_member name: (identifier) @property)
(custom_event_definition name: (identifier) @function)
(property_definition name: (identifier) @property)
(auto_property name: (identifier) @property)
(auto_readonly_property name: (identifier) @property)
(group_definition name: (identifier) @namespace)
(state_definition name: (identifier) @label)
(function_definition name: (identifier) @function)
(event_definition name: (identifier) @function)
(event_definition owner: (_) @type)
(parameter name: (identifier) @variable.parameter)
(variable_definition name: (identifier) @variable)
(variable_declaration name: (identifier) @variable)
(import_statement module: (_) @module)

; Calls
(call_expression callee: (identifier) @function.call)
(call_expression callee: (member_access member: (identifier) @function.method.call))
(argument name: (identifier) @variable.parameter)
(member_access member: (identifier) @variable.member)

; Operators
[
  "+" "-" "*" "/" "%"
  "=" "+=" "-=" "*=" "/=" "%="
  "==" "!=" "<" ">" "<=" ">="
  "&&" "||" "!"
] @operator

["as" "is" "new"] @keyword.operator

; Punctuation
["(" ")" "[" "]"] @punctuation.bracket
["," "."] @punctuation.delimiter
[":"] @punctuation.delimiter

; Keywords — declarations
[
  "scriptname"
  "extends"
  "import"
  "struct" "endstruct"
  "customevent"
  "property" "endproperty"
  "auto" "autoreadonly"
  "group" "endgroup"
  "state" "endstate"
] @keyword

["function" "endfunction" "event" "endevent"] @keyword.function

; Keywords — control flow
["if" "elseif" "else" "endif"] @keyword.conditional
["while" "endwhile"] @keyword.repeat
"return" @keyword.return

; Spell-check inside comments & docstrings
((line_comment) @spell)
((block_comment) @spell)
((docstring) @spell)
((string_literal) @spell)

; ERROR fallback
(ERROR) @error
