//
//  JLTokenPattern.h
//  iGitpad
//
//  Created by Johannes Lund on 2013-06-30.
//  Copyright (c) 2013 Anviking. All rights reserved.
//

#import "JLScope.h"

@interface JLTokenPattern : JLScope

+ (instancetype)tokenPatternWithPatternAndColor:(UIColor *)color;

// The color
@property (nonatomic, strong) UIColor *color;

// Setting either expression or pattern causes the other one to update.
@property (nonatomic, strong) NSRegularExpression *expression;
@property (nonatomic, copy) NSString *pattern;

/// Describes if the pattern search for matches in indexes marked as unclear. If false, the search will happen in the scopes clearIndexes. If true, the serach will happen in the scope itself. Default: FALSE.
@property (nonatomic, assign) BOOL dirtySearch;

@end