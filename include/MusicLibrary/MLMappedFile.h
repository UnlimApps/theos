/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLMappedFile : NSObject {
@private
	NSString* _path;
	int _file;
	long long _size;
	unsigned _granularity;
	unsigned _numberOfSegments;
	MLMappedFileSegment** _segments;
	BOOL _dying;
	BOOL _assumeFileIsFixedSize;
}
+(id)mappedFileWithPath:(id)path fileIsFixedSize:(BOOL)size;
-(id)initWithPath:(id)path fileIsFixedSize:(BOOL)size;
-(void)release;
-(void)dealloc;
-(id)_segmentAtIndex:(unsigned long)index;
-(void)_refreshFileInfo;
-(void)refreshFileSizeAndDependentInfo;
-(id)mappedImageDataAtOffset:(long long)offset length:(unsigned long)length;
-(void)releaseSegment:(unsigned long)segment;
-(int)fileDescriptor;
-(long long)size;
-(unsigned long)granularity;
@end

