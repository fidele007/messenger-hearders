/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSSet, NSString;

@interface FBBugReportInfo : NSObject <NSCoding> {

	NSDictionary* _attachments;
	NSSet* _contextsToUploadWithInitialCreationRequest;
	NSString* _creationTime;
	NSString* _descriptionEnteredByPerson;
	unsigned long long _initiationSource;
	NSString* _localBugID;
	NSDictionary* _parameters;
	NSString* _selectedCategory;
	NSString* _appGroupIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * attachments;                                      //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSSet * contextsToUploadWithInitialCreationRequest;              //@synthesize contextsToUploadWithInitialCreationRequest=_contextsToUploadWithInitialCreationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * creationTime;                                         //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptionEnteredByPerson;                           //@synthesize descriptionEnteredByPerson=_descriptionEnteredByPerson - In the implementation block
@property (nonatomic,readonly) unsigned long long initiationSource;                                  //@synthesize initiationSource=_initiationSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * localBugID;                                           //@synthesize localBugID=_localBugID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * parameters;                                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedCategory;                                     //@synthesize selectedCategory=_selectedCategory - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroupIdentifier;                                   //@synthesize appGroupIdentifier=_appGroupIdentifier - In the implementation block
+(id)persistedBugReports:(int)arg1 ;
+(id)loadSavedBugReport:(id)arg1 ;
+(id)loadFirstUnsentBugReport;
+(void)initializeDiskSynchronizationObjectIfNeeded;
+(id)persistedBugsDirectory:(int)arg1 ;
-(void)moveToSentDirectory;
-(NSString *)localBugID;
-(unsigned long long)initiationSource;
-(NSString *)selectedCategory;
-(NSString *)descriptionEnteredByPerson;
-(NSString *)appGroupIdentifier;
-(id)initWithHTTPCookies:(id)arg1 descriptionEnteredByPerson:(id)arg2 initiationSource:(unsigned long long)arg3 selectedCategory:(id)arg4 sharedContainerAppGroupIdentifier:(id)arg5 additionalParameters:(id)arg6 additionalContexts:(id)arg7 ;
-(void)saveToDisk;
-(NSSet *)contextsToUploadWithInitialCreationRequest;
-(id)generateParameters:(id)arg1 ;
-(id)generateAttachmentsWithDescription:(id)arg1 additionalContexts:(id)arg2 ;
-(id)generateContextsToUploadWithInitialCreationRequest;
-(id)_getInfo;
-(id)fetchDebugLogs;
-(id)getNewsfeedLogs:(id)arg1 ;
-(id)_autoLayoutTrace:(id)arg1 ;
-(void)_appendAutoLayoutTraceForView:(id)arg1 intoBuilder:(id)arg2 currentDepth:(unsigned long long)arg3 ;
-(void)removeOldBugs;
-(double)elapsedTimeSinceFileLastModified:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(NSDictionary *)attachments;
-(NSString *)creationTime;
-(id)_logInfo:(id)arg1 ;
@end

