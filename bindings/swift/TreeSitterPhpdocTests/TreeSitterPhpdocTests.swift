import XCTest
import SwiftTreeSitter
import TreeSitterPhpdoc

final class TreeSitterPhpdocTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_phpdoc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Phpdoc grammar")
    }
}
