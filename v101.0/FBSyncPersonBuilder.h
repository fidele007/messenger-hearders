/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBSyncPersonName, FBMImageUrlCollection, NSNumber, NSDictionary, FBSyncChatContext, NSArray, NSDate, FBImportedContact, FBSyncPersonTypeProperties;

@interface FBSyncPersonBuilder : NSObject {

	NSString* _personID;
	FBSyncPersonName* _name;
	FBSyncPersonName* _phoneticName;
	NSString* _username;
	BOOL _isPushable;
	long long _DEPRECATED_lastActiveTime;
	BOOL _isActive;
	FBMImageUrlCollection* _imageUrls;
	unsigned long long _source;
	NSNumber* _communicationRank;
	unsigned long long _onlinePresence;
	NSNumber* _favoriteRank;
	NSDictionary* _profileNames;
	FBSyncChatContext* _chatContext;
	BOOL _hasTimeline;
	NSString* _groupConversationId;
	NSArray* _searchTokens;
	NSDate* _timePersonWasAddedAsContact;
	FBImportedContact* _importedContact;
	BOOL _isMessageBlockedByViewer;
	BOOL _acceptsMessagesFromViewer;
	NSDate* _timeMessengerWasInstalled;
	NSNumber* _messengerInvitePriority;
	NSNumber* _phatRank;
	BOOL _canSeeViewerMontage;
	NSString* _montageThreadFBID;
	BOOL _profilePictureIsSilhouette;
	FBSyncPersonTypeProperties* _typeProperties;
	NSNumber* _activeNowRank;
	BOOL _isWaveEligibleWithViewer;
	BOOL _hasReceivedWaveFromViewer;
	BOOL _hasSentWaveToViewer;

}
+(id)syncPerson;
+(id)syncPersonFromExistingSyncPerson:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withPersonID:(id)arg1 ;
-(id)withImportedContact:(id)arg1 ;
-(id)withSource:(unsigned long long)arg1 ;
-(id)withTypeProperties:(id)arg1 ;
-(id)withTimePersonWasAddedAsContact:(id)arg1 ;
-(id)withSearchTokens:(id)arg1 ;
-(id)withChatContext:(id)arg1 ;
-(id)withIsPushable:(BOOL)arg1 ;
-(id)withFavoriteRank:(id)arg1 ;
-(id)withImageUrls:(id)arg1 ;
-(id)withPhoneticName:(id)arg1 ;
-(id)withUsername:(id)arg1 ;
-(id)withHasTimeline:(BOOL)arg1 ;
-(id)withCommunicationRank:(id)arg1 ;
-(id)withOnlinePresence:(unsigned long long)arg1 ;
-(id)withDEPRECATED_lastActiveTime:(long long)arg1 ;
-(id)withIsActive:(BOOL)arg1 ;
-(id)withIsMessageBlockedByViewer:(BOOL)arg1 ;
-(id)withAcceptsMessagesFromViewer:(BOOL)arg1 ;
-(id)withPhatRank:(id)arg1 ;
-(id)withCanSeeViewerMontage:(BOOL)arg1 ;
-(id)withMontageThreadFBID:(id)arg1 ;
-(id)withActiveNowRank:(id)arg1 ;
-(id)withTimeMessengerWasInstalled:(id)arg1 ;
-(id)withProfileNames:(id)arg1 ;
-(id)withGroupConversationId:(id)arg1 ;
-(id)withMessengerInvitePriority:(id)arg1 ;
-(id)withProfilePictureIsSilhouette:(BOOL)arg1 ;
-(id)withIsWaveEligibleWithViewer:(BOOL)arg1 ;
-(id)withHasReceivedWaveFromViewer:(BOOL)arg1 ;
-(id)withHasSentWaveToViewer:(BOOL)arg1 ;
-(id)build;
@end
