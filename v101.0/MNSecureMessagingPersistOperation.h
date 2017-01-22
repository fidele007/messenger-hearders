/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol FBClock;
@class EGODatabase, MNThreadEncryptionKeyResolver, EGODatabaseStatement, NSArray, NSError;

@interface MNSecureMessagingPersistOperation : NSOperation {

	EGODatabase* _db;
	MNThreadEncryptionKeyResolver* _encryptionKeyResolver;
	EGODatabaseStatement* _updateThreadStatement;
	EGODatabaseStatement* _insertMessageStatement;
	EGODatabaseStatement* _deleteThreadStatement;
	EGODatabaseStatement* _deleteMessagesStatement;
	EGODatabaseStatement* _copyMessageToHoldingTankStatement;
	EGODatabaseStatement* _deleteSingleMessageStatement;
	EGODatabaseStatement* _deleteSingleMessageFromHoldingTankStatement;
	EGODatabaseStatement* _insertAttachmentStatement;
	EGODatabaseStatement* _deleteAttachmentForMessageStatement;
	EGODatabaseStatement* _deleteAttachmentForThreadStatement;
	EGODatabaseStatement* _deleteHoldingTankMessagesForThreadStatement;
	NSArray* _jobs;
	id<FBClock> _clock;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)_nowInMilliseconds;
-(id)initWithEncryptionKeyResolver:(id)arg1 updateThreadStatement:(id)arg2 insertMessageStatement:(id)arg3 deleteThreadStatement:(id)arg4 deleteMessagesStatement:(id)arg5 deleteMessageStatement:(id)arg6 deleteHoldingTankMessageForThreadStatement:(id)arg7 copyMessageToHoldingTankStatement:(id)arg8 deleteMessageFromHoldingTankStatement:(id)arg9 insertAttachmentStatement:(id)arg10 deleteAttachmentForMessageStatement:(id)arg11 deleteAttachmentForThreadStatement:(id)arg12 database:(id)arg13 jobList:(id)arg14 clock:(id)arg15 ;
-(id)_encodeObject:(id)arg1 encryptedForThread:(id)arg2 ;
-(void)main;
-(NSError *)error;
@end
