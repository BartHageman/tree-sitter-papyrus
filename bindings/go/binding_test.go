package tree_sitter_Papyrus_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-Papyrus"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_Papyrus.Language())
	if language == nil {
		t.Errorf("Error loading Papyrus grammar")
	}
}
