/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKWebBalloonView.h"

@class UIImageView;

@interface CKWebImageBalloonView : CKWebBalloonView {
	CGSize _originalImageSize;
	UIImageView* _stillImage;
}
@property(assign, nonatomic) CGSize originalImageSize;
+(CGPoint)offsetForBubbleInsetAtPoint:(CGPoint)point;
+(float)additionalHeightForBubbleWhenInsetAtPoint:(CGPoint)point;
-(void)dealloc;
-(void)setText:(id)text;
-(float)heightForWidth:(float)width;
-(float)tightenedWidth;
-(void)tighten;
-(void)setImage:(id)image mimeType:(id)type;
-(void)setImageWithFilename:(id)filename;
-(void)setStillImage:(id)image;
-(id)_htmlForImageWithFilename:(id)filename size:(CGSize)size;
-(id)_htmlForImageWithData:(id)data mimeType:(id)type size:(CGSize)size;
-(CGSize)_scaledImageSize;
-(void)_wvSetHTML:(id)html;
@end

