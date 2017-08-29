/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSString, NSArray, NSDate;

@interface VMUFatHeader : VMUHeader {
	NSDate* _timestamp;
	NSString* _path;
	NSArray* _fatArchs;
}
+(id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;
-(id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;
// inherited: -(BOOL)isFat;
-(id)path;
-(id)timestamp;
-(id)fatArchs;
-(id)fatArchMatchingArchitecture:(id)architecture;
// inherited: -(void)dealloc;
@end

