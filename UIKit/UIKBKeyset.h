/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface UIKBKeyset : NSObject <NSCoding> {
	NSString* m_name;
	NSMutableArray* m_keylists;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSMutableArray* keylists;
+(id)keyset;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)keylistWithName:(id)name;
-(BOOL)addKeylist:(id)keylist;
-(id)description;
@end
