/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CKMediaObject : NSObject {
	NSString* _filename;
	NSData* _data;
	NSString* _mimeType;
	NSString* _exportedFilename;
	double _duration;
}
@property(readonly, assign, nonatomic) NSData* data;
@property(readonly, assign, nonatomic) NSString* filename;
@property(readonly, assign, nonatomic) NSString* mimeType;
@property(readonly, assign, nonatomic) NSString* exportedFilename;
@property(assign, nonatomic) double duration;
+(id)mimeTypesToFileExtensions;
+(id)supportedMIMETypes;
+(id)fileExtensionForMIMEType:(id)mimetype;
+(id)previewDataMIMEType;
+(BOOL)supportsMIMEType:(id)type;
+(CGSize)transcodeMaxSize;
-(int)mediaType;
-(void)cleanupAfterTranscode;
-(id)initWithData:(id)data mimeType:(id)type exportedFilename:(id)filename;
-(id)initWithFilename:(id)filename mimeType:(id)type exportedFilename:(id)filename3;
-(float)balloonHeightWithPreviewData:(id)previewData;
-(void)dealloc;
-(id)previewTitle;
-(Class)balloonPreviewClassWithPreviewData:(id)previewData;
-(BOOL)shouldTranscodeForMMS;
-(id)newTranscodingForMMSWithMaxByteLength:(int)maxByteLength;
-(id)newPreview:(int)preview highlight:(BOOL)highlight;
-(void)configureBalloon:(id)balloon withPreviewData:(id)previewData;
-(void)copyToPasteboard:(id)pasteboard;
-(id)dataRepresentation;
-(unsigned long long)sizeInBytes;
-(id)sizeInBytesString;
-(id)filenameForMedia;
-(id)dataForMedia;
-(id)dataFileExtensionForMedia;
-(id)optionsForMedia;
@end

