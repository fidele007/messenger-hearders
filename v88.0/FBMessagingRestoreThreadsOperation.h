/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class FBMessagingState, EGODatabase, EGODatabaseStatement, NSError;

@interface FBMessagingRestoreThreadsOperation : NSOperation {

	FBMessagingState* _restoredState;
	EGODatabase* _db;
	EGODatabaseStatement* _selectContinuousThreadListSummariesStatement;
	EGODatabaseStatement* _selectMessagesStatement;
	/*^block*/id _selectExtensibleMessagePropsQueryBuilder;
	/*^block*/id _selectPinnedThreadSummariesQueryBuilder;
	EGODatabaseStatement* _selectBlobWithKeyStatement;
	EGODatabaseStatement* _selectThreadListContinuityStatement;
	NSError* _error;

}

@property (nonatomic,retain) EGODatabase * db;                                                                 //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) EGODatabaseStatement * selectContinuousThreadListSummariesStatement;              //@synthesize selectContinuousThreadListSummariesStatement=_selectContinuousThreadListSummariesStatement - In the implementation block
@property (nonatomic,retain) EGODatabaseStatement * selectMessagesStatement;                                   //@synthesize selectMessagesStatement=_selectMessagesStatement - In the implementation block
@property (nonatomic,copy) id selectExtensibleMessagePropsQueryBuilder;                                        //@synthesize selectExtensibleMessagePropsQueryBuilder=_selectExtensibleMessagePropsQueryBuilder - In the implementation block
@property (nonatomic,copy) id selectPinnedThreadSummariesQueryBuilder;                                         //@synthesize selectPinnedThreadSummariesQueryBuilder=_selectPinnedThreadSummariesQueryBuilder - In the implementation block
@property (nonatomic,retain) EGODatabaseStatement * selectBlobWithKeyStatement;                                //@synthesize selectBlobWithKeyStatement=_selectBlobWithKeyStatement - In the implementation block
@property (nonatomic,retain) EGODatabaseStatement * selectThreadListContinuityStatement;                       //@synthesize selectThreadListContinuityStatement=_selectThreadListContinuityStatement - In the implementation block
@property (nonatomic,copy) FBMessagingState * restoredState;                                                   //@synthesize restoredState=_restoredState - In the implementation block
@property (nonatomic,copy) NSError * error;                                                                    //@synthesize error=_error - In the implementation block
-(FBMessagingState *)restoredState;
-(unsigned long long)_findOldestTimestampOfThreadInInboxResults:(id)arg1 ;
-(void)setRestoredState:(FBMessagingState *)arg1 ;
-(id)initWithDB:(id)arg1 selectInboxThreadSummariesStatement:(id)arg2 selectMessagesStatement:(id)arg3 selectExtensibleMessagePropsQueryBuilder:(/*^block*/id)arg4 selectPinnedThreadSummariesQueryBuilder:(/*^block*/id)arg5 selectBlobWithKeyStatement:(id)arg6 selectThreadListContinuityStatement:(id)arg7 ;
-(EGODatabaseStatement *)selectContinuousThreadListSummariesStatement;
-(void)setSelectContinuousThreadListSummariesStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)selectMessagesStatement;
-(void)setSelectMessagesStatement:(EGODatabaseStatement *)arg1 ;
-(id)selectExtensibleMessagePropsQueryBuilder;
-(void)setSelectExtensibleMessagePropsQueryBuilder:(id)arg1 ;
-(id)selectPinnedThreadSummariesQueryBuilder;
-(void)setSelectPinnedThreadSummariesQueryBuilder:(id)arg1 ;
-(EGODatabaseStatement *)selectBlobWithKeyStatement;
-(void)setSelectBlobWithKeyStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)selectThreadListContinuityStatement;
-(void)setSelectThreadListContinuityStatement:(EGODatabaseStatement *)arg1 ;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(EGODatabase *)db;
-(void)setDb:(EGODatabase *)arg1 ;
@end

