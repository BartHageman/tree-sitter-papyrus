; Bodies that indent their contents.
[
  (function_definition)
  (event_definition)
  (state_definition)
  (struct_definition)
  (group_definition)
  (property_definition)
  (if_statement)
  (elseif_clause)
  (else_clause)
  (while_statement)
] @indent.begin

; End markers dedent on their own line.
[
  "endfunction"
  "endevent"
  "endstate"
  "endstruct"
  "endgroup"
  "endproperty"
  "endif"
  "endwhile"
  "elseif"
  "else"
] @indent.branch

; Don't indent comments-only or zero-content nodes.
[
  (line_comment)
  (block_comment)
] @indent.auto
