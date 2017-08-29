/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "LibraryStore.h"

@class DAFolder;

@interface DAMessageStore : LibraryStore {
	DAFolder* _DAFolder;
}
// inherited: -(id)initWithMailboxUid:(id)mailboxUid readOnly:(BOOL)only;
-(id)_folderIDForFetching;
// inherited: -(int)fetchNumMessages:(unsigned)messages preservingUID:(id)uid beforeUID:(unsigned)uid3 synchronize:(BOOL)synchronize compact:(BOOL)compact;
// inherited: -(int)fetchMessagesMatchingCriterion:(id)criterion limit:(unsigned)limit;
-(void)issueFlagUpdates:(id)updates forMessages:(id)messages;
-(void)setServerFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(id)willSetFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(BOOL)allowsAppend;
// inherited: -(id)messageForRemoteID:(id)remoteID;
// inherited: -(void)deleteMessagesOlderThanNumberOfDays:(int)days compact:(BOOL)compact;
// inherited: -(void)purgeMessagesBeyond:(unsigned)beyond;
// inherited: -(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)rowID limit:(unsigned)limit;
// inherited: -(BOOL)shouldSetSummaryForMessage:(id)message;
// inherited: -(BOOL)shouldDownloadBodyDataForMessage:(id)message;
// inherited: -(BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;
// inherited: -(id)loadMeetingExternalIDForMessage:(id)message;
// inherited: -(id)loadMeetingDataForMessage:(id)message;
-(id)_fetchBodyDataForSearchResult:(id)searchResult format:(int)format streamConsumer:(id)consumer;
-(id)_fetchBodyDataForNormalMessage:(id)normalMessage format:(int)format part:(id)part streamConsumer:(id)consumer;
// inherited: -(id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary partial:(BOOL*)partial;
// inherited: -(id)_fetchDataForMimePart:(id)mimePart range:(NSRange)range isComplete:(BOOL*)complete;
// inherited: -(id)defaultAlternativeForMessage:(id)message inPart:(id)part;
// inherited: -(id)bestAlternativeForMessage:(id)message inPart:(id)part;
// inherited: -(BOOL)canFetchSearchResults;
// inherited: -(BOOL)canDeleteMessage:(id)message;
@end

