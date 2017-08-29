/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DAVKit/AYOperation.h>

@class CalDAVPropertyAdaptor, NSDictionary, NSString, DAVSession;

@interface CalDAVListContentsOperation : AYOperation {
	NSString* _uri;
	DAVSession* _session;
	NSDictionary* _propertiesCallbackMap;
	CalDAVPropertyAdaptor* _adaptor;
}
-(id)initWithSession:(id)session URI:(id)uri properties:(id)properties;
-(id)initWithSession:(id)session URI:(id)uri properties:(id)properties adaptor:(id)adaptor;
// inherited: -(void)dealloc;
-(void)listContents;
@end

