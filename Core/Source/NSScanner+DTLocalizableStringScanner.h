//
//  NSScanner+DTLocalizableStringScanner.h
//  genstrings2
//
//  Created by Oliver Drobnik on 29.12.11.
//  Copyright (c) 2011 Drobnik KG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSScanner (DTLocalizableStringScanner)

- (BOOL)scanQuotedAndEscapedString:(NSString **)value;

- (BOOL)scanMacroParameters:(NSArray **)parameters parametersAreBare:(BOOL)bare;

- (BOOL)scanMacro:(NSString **)macro validMacroCharacters:(NSCharacterSet *)macroCharacterSet andParameters:(NSArray **)parameters parametersAreBare:(BOOL)bare;

@end
