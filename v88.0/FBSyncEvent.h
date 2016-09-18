/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFavoriteContact;
@class FBSyncGroupConversation, FBSyncPerson, FBSyncPresence, FBSyncMessengerStatusUpdate, NSArray, FBPersonSyncSummary;

@interface FBSyncEvent : NSObject {

	FBSyncGroupConversation* _groupConversation;
	FBSyncPerson* _person;
	FBSyncPresence* _presence;
	id<FBFavoriteContact> _favoriteContact;
	FBSyncMessengerStatusUpdate* _messengerStatus;
	NSArray* _searchTokens;
	FBPersonSyncSummary* _summary;
	unsigned long long _type;

}

@property (nonatomic,readonly) FBSyncGroupConversation * groupConversation;                     //@synthesize groupConversation=_groupConversation - In the implementation block
@property (nonatomic,readonly) FBSyncPerson * person;                                           //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) FBSyncPresence * presence;                                  //@synthesize presence=_presence - In the implementation block
@property (nonatomic,readonly) id<FBFavoriteContact> favoriteContact;                           //@synthesize favoriteContact=_favoriteContact - In the implementation block
@property (nonatomic,copy,readonly) FBSyncMessengerStatusUpdate * messengerStatus;              //@synthesize messengerStatus=_messengerStatus - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchTokens;                                     //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy,readonly) FBPersonSyncSummary * summary;                              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
+(id)invalidatePresenceSyncEvent;
+(id)presenceUpdateEvent:(id)arg1 ;
+(id)invalidateChatContextSyncEvent;
+(id)completeChatContextSyncEvent;
+(id)updateChatContextEventWithSyncPerson:(id)arg1 ;
+(id)completeMessengerStatusUpdateEventWithSummary:(id)arg1 ;
+(id)invalidateFavoritesSyncEvent;
+(id)syncEventWithFavoriteContact:(id)arg1 ;
+(id)completePresenceSyncEventWithSummary:(id)arg1 ;
+(id)removePersonEventWithPersonId:(id)arg1 ;
+(id)invalidateFBFriendsSyncEvent;
+(id)completeFBFriendsSyncEventWithSummary:(id)arg1 ;
+(id)addPersonEventWithSyncPerson:(id)arg1 searchTokens:(id)arg2 ;
+(id)statusUpdateEvent:(id)arg1 ;
-(FBSyncPresence *)presence;
-(NSArray *)searchTokens;
-(FBSyncGroupConversation *)groupConversation;
-(id)initWithPerson:(id)arg1 groupConversation:(id)arg2 favoriteContact:(id)arg3 eventType:(unsigned long long)arg4 searchTokens:(id)arg5 summary:(id)arg6 presence:(id)arg7 statusUpdate:(id)arg8 ;
-(id<FBFavoriteContact>)favoriteContact;
-(FBSyncMessengerStatusUpdate *)messengerStatus;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(FBSyncPerson *)person;
-(FBPersonSyncSummary *)summary;
@end

