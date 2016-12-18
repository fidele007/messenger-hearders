/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBConversationContact.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMImageUrlCollection, FBSyncPersonName, NSNumber, NSDictionary, FBSyncChatContext, NSArray, NSDate, FBImportedContact, FBSyncPersonTypeProperties;

@interface FBSyncPerson : FBValueObject <FBConversationContact, NSCopying> {

	BOOL _isPushable;
	BOOL _isActive;
	BOOL _hasTimeline;
	BOOL _isMessageBlockedByViewer;
	BOOL _acceptsMessagesFromViewer;
	BOOL _canSeeViewerMontage;
	BOOL _profilePictureIsSilhouette;
	BOOL _isWaveEligibleWithViewer;
	BOOL _hasReceivedWaveFromViewer;
	BOOL _hasSentWaveToViewer;
	NSString* _personID;
	FBSyncPersonName* _name;
	FBSyncPersonName* _phoneticName;
	NSString* _username;
	long long _DEPRECATED_lastActiveTime;
	FBMImageUrlCollection* _imageUrls;
	unsigned long long _source;
	NSNumber* _communicationRank;
	unsigned long long _onlinePresence;
	NSNumber* _favoriteRank;
	NSDictionary* _profileNames;
	FBSyncChatContext* _chatContext;
	NSString* _groupConversationId;
	NSArray* _searchTokens;
	NSDate* _timePersonWasAddedAsContact;
	FBImportedContact* _importedContact;
	NSDate* _timeMessengerWasInstalled;
	NSNumber* _messengerInvitePriority;
	NSNumber* _phatRank;
	NSString* _montageThreadFBID;
	FBSyncPersonTypeProperties* _typeProperties;
	NSNumber* _activeNowRank;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contactFBID; 
@property (nonatomic,readonly) BOOL contactIsGroupConversation; 
@property (nonatomic,readonly) NSNumber * contactFavoriteRank; 
@property (nonatomic,copy,readonly) NSString * contactName; 
@property (nonatomic,readonly) BOOL contactIsEmailOnly; 
@property (nonatomic,readonly) BOOL contactHasMessenger; 
@property (nonatomic,readonly) BOOL contactIsMobilePushable; 
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls; 
@property (nonatomic,copy,readonly) NSString * firstNameForSort; 
@property (nonatomic,copy,readonly) NSString * lastNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilFirstNameForSort; 
@property (nonatomic,copy,readonly) NSString * nonNilLastNameForSort; 
@property (nonatomic,readonly) BOOL contactIsMemorialized; 
@property (nonatomic,copy,readonly) NSString * email; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * personID;                                      //@synthesize personID=_personID - In the implementation block
@property (nonatomic,copy,readonly) FBSyncPersonName * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) FBSyncPersonName * phoneticName;                          //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                      //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL isPushable;                                               //@synthesize isPushable=_isPushable - In the implementation block
@property (nonatomic,readonly) long long DEPRECATED_lastActiveTime;                           //@synthesize DEPRECATED_lastActiveTime=_DEPRECATED_lastActiveTime - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                                 //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,copy,readonly) FBMImageUrlCollection * imageUrls;                        //@synthesize imageUrls=_imageUrls - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                     //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * communicationRank;                             //@synthesize communicationRank=_communicationRank - In the implementation block
@property (nonatomic,readonly) unsigned long long onlinePresence;                             //@synthesize onlinePresence=_onlinePresence - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * favoriteRank;                                  //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * profileNames;                              //@synthesize profileNames=_profileNames - In the implementation block
@property (nonatomic,copy,readonly) FBSyncChatContext * chatContext;                          //@synthesize chatContext=_chatContext - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeline;                                              //@synthesize hasTimeline=_hasTimeline - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupConversationId;                           //@synthesize groupConversationId=_groupConversationId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchTokens;                                   //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timePersonWasAddedAsContact;                     //@synthesize timePersonWasAddedAsContact=_timePersonWasAddedAsContact - In the implementation block
@property (nonatomic,copy,readonly) FBImportedContact * importedContact;                      //@synthesize importedContact=_importedContact - In the implementation block
@property (nonatomic,readonly) BOOL isMessageBlockedByViewer;                                 //@synthesize isMessageBlockedByViewer=_isMessageBlockedByViewer - In the implementation block
@property (nonatomic,readonly) BOOL acceptsMessagesFromViewer;                                //@synthesize acceptsMessagesFromViewer=_acceptsMessagesFromViewer - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timeMessengerWasInstalled;                       //@synthesize timeMessengerWasInstalled=_timeMessengerWasInstalled - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * messengerInvitePriority;                       //@synthesize messengerInvitePriority=_messengerInvitePriority - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * phatRank;                                      //@synthesize phatRank=_phatRank - In the implementation block
@property (nonatomic,readonly) BOOL canSeeViewerMontage;                                      //@synthesize canSeeViewerMontage=_canSeeViewerMontage - In the implementation block
@property (nonatomic,copy,readonly) NSString * montageThreadFBID;                             //@synthesize montageThreadFBID=_montageThreadFBID - In the implementation block
@property (nonatomic,readonly) BOOL profilePictureIsSilhouette;                               //@synthesize profilePictureIsSilhouette=_profilePictureIsSilhouette - In the implementation block
@property (nonatomic,copy,readonly) FBSyncPersonTypeProperties * typeProperties;              //@synthesize typeProperties=_typeProperties - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * activeNowRank;                                 //@synthesize activeNowRank=_activeNowRank - In the implementation block
@property (nonatomic,readonly) BOOL isWaveEligibleWithViewer;                                 //@synthesize isWaveEligibleWithViewer=_isWaveEligibleWithViewer - In the implementation block
@property (nonatomic,readonly) BOOL hasReceivedWaveFromViewer;                                //@synthesize hasReceivedWaveFromViewer=_hasReceivedWaveFromViewer - In the implementation block
@property (nonatomic,readonly) BOOL hasSentWaveToViewer;                                      //@synthesize hasSentWaveToViewer=_hasSentWaveToViewer - In the implementation block
-(FBSyncPersonTypeProperties *)typeProperties;
-(FBImportedContact *)importedContact;
-(BOOL)profilePictureIsSilhouette;
-(NSNumber *)communicationRank;
-(FBMImageUrlCollection *)imageUrls;
-(NSNumber *)messengerInvitePriority;
-(NSString *)nonNilFirstNameForSort;
-(NSString *)nonNilLastNameForSort;
-(BOOL)acceptsMessagesFromViewer;
-(FBSyncChatContext *)chatContext;
-(BOOL)contactIsGroupConversation;
-(NSString *)contactFBID;
-(NSNumber *)phatRank;
-(BOOL)canSeeViewerMontage;
-(NSNumber *)favoriteRank;
-(NSNumber *)contactFavoriteRank;
-(NSString *)firstNameForSort;
-(NSString *)lastNameForSort;
-(BOOL)contactIsEmailOnly;
-(BOOL)contactHasMessenger;
-(BOOL)contactIsMobilePushable;
-(BOOL)contactIsMemorialized;
-(BOOL)isMessageBlockedByViewer;
-(NSDate *)timePersonWasAddedAsContact;
-(NSArray *)searchTokens;
-(BOOL)isPushable;
-(BOOL)hasTimeline;
-(NSDate *)timeMessengerWasInstalled;
-(NSString *)montageThreadFBID;
-(NSNumber *)activeNowRank;
-(long long)DEPRECATED_lastActiveTime;
-(unsigned long long)onlinePresence;
-(NSDictionary *)profileNames;
-(NSString *)groupConversationId;
-(BOOL)isWaveEligibleWithViewer;
-(BOOL)hasReceivedWaveFromViewer;
-(BOOL)hasSentWaveToViewer;
-(id)initWithPersonID:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 username:(id)arg4 isPushable:(BOOL)arg5 DEPRECATED_lastActiveTime:(long long)arg6 isActive:(BOOL)arg7 imageUrls:(id)arg8 source:(unsigned long long)arg9 communicationRank:(id)arg10 onlinePresence:(unsigned long long)arg11 favoriteRank:(id)arg12 profileNames:(id)arg13 chatContext:(id)arg14 hasTimeline:(BOOL)arg15 groupConversationId:(id)arg16 searchTokens:(id)arg17 timePersonWasAddedAsContact:(id)arg18 importedContact:(id)arg19 isMessageBlockedByViewer:(BOOL)arg20 acceptsMessagesFromViewer:(BOOL)arg21 timeMessengerWasInstalled:(id)arg22 messengerInvitePriority:(id)arg23 phatRank:(id)arg24 canSeeViewerMontage:(BOOL)arg25 montageThreadFBID:(id)arg26 profilePictureIsSilhouette:(BOOL)arg27 typeProperties:(id)arg28 activeNowRank:(id)arg29 isWaveEligibleWithViewer:(BOOL)arg30 hasReceivedWaveFromViewer:(BOOL)arg31 hasSentWaveToViewer:(BOOL)arg32 ;
-(BOOL)isActive;
-(FBSyncPersonName *)name;
-(unsigned long long)source;
-(FBSyncPersonName *)phoneticName;
-(NSString *)contactName;
-(NSString *)personID;
-(NSString *)username;
-(NSString *)firstName;
-(NSString *)lastName;
@end

