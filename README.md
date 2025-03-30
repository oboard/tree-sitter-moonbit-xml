# tree-sitter-moonbit-xml

A [tree-sitter][] grammar for [MoonBit](https://www.moonbitlang.com) and XML.

[tree-sitter]: https://github.com/tree-sitter/tree-sitter


## Simple XML element

```moonbit
fn app() -> Component {
  <div>Hello World</div>
}
```

---

```
(structure
  (structure_item
    (function_definition
      (function_identifier
        (lowercase_identifier))
      (parameters)
      (return_type
        (type
          (apply_type
            (qualified_type_identifier
              (identifier
                (uppercase_identifier))))))
      (block_expression
        (statement_expression
          (expression
            (xml_expression
              (xml_opening_element
                (xml_identifier))
              (xml_content
                (xml_text))
              (xml_closing_element
                (xml_identifier)))))
        (semicolon
          (automatic_semicolon)))))
  (semicolon
    (automatic_semicolon)))
```