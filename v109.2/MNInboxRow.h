/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadRow, MNConversationStarterViewModel, MNThreadCollectionViewModel, MNInboxMessageRequestUnitViewModel, MNInboxSectionHeaderViewModel, FBMemMessengerInboxUnit, MNInboxSeeAllViewModel, MNHorizontalScrollInboxUnitViewModel, MNCYMKContactViewModel, MNInboxGYMLViewModel, MNInboxAdViewModel, MNInboxDirectMViewModel, MNInboxMontageSeenHeadsBarViewModel, MNRoomSuggestionItemType;

@interface MNInboxRow : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNThreadRow* _thread;
	MNConversationStarterViewModel* _conversationStarter;
	MNThreadCollectionViewModel* _threadActorCollection;
	MNInboxMessageRequestUnitViewModel* _messageRequests;
	MNInboxSectionHeaderViewModel* _sectionHeader;
	FBMemMessengerInboxUnit* _seeAll_unit;
	MNInboxSeeAllViewModel* _seeAll_seeAllViewModel;
	long long _seeAll_numberOfAllItems;
	MNHorizontalScrollInboxUnitViewModel* _cymk;
	MNHorizontalScrollInboxUnitViewModel* _invites;
	MNHorizontalScrollInboxUnitViewModel* _horizontalScroll;
	BOOL _loadMoreThreads_shouldLoadAll;
	BOOL _loadMoreThreads_usesCK;
	MNCYMKContactViewModel* _cymkContact;
	MNInboxGYMLViewModel* _gyml;
	MNInboxAdViewModel* _ad;
	MNInboxDirectMViewModel* _directM;
	MNInboxMontageSeenHeadsBarViewModel* _seenHeadsBar;
	MNRoomSuggestionItemType* _rymj;

}
+(id)gyml:(id)arg1 ;
+(id)sectionHeader:(id)arg1 ;
+(id)thread:(id)arg1 ;
+(id)loadMoreThreadsWithShouldLoadAll:(BOOL)arg1 usesCK:(BOOL)arg2 ;
+(id)threadActorCollection:(id)arg1 ;
+(id)conversationStarter:(id)arg1 ;
+(id)seeAllWithUnit:(id)arg1 seeAllViewModel:(id)arg2 numberOfAllItems:(long long)arg3 ;
+(id)horizontalScroll:(id)arg1 ;
+(id)cymk:(id)arg1 ;
+(id)invites:(id)arg1 ;
+(id)seenHeadsBar:(id)arg1 ;
+(id)messageRequests:(id)arg1 ;
+(id)rymj:(id)arg1 ;
+(id)ad:(id)arg1 ;
+(id)directM:(id)arg1 ;
+(id)cymkContact:(id)arg1 ;
-(void)matchThread:(/*^block*/id)arg1 conversationStarter:(/*^block*/id)arg2 threadActorCollection:(/*^block*/id)arg3 messageRequests:(/*^block*/id)arg4 sectionHeader:(/*^block*/id)arg5 seeAll:(/*^block*/id)arg6 cymk:(/*^block*/id)arg7 invites:(/*^block*/id)arg8 horizontalScroll:(/*^block*/id)arg9 loadMoreThreads:(/*^block*/id)arg10 cymkContact:(/*^block*/id)arg11 gyml:(/*^block*/id)arg12 ad:(/*^block*/id)arg13 directM:(/*^block*/id)arg14 seenHeadsBar:(/*^block*/id)arg15 rymj:(/*^block*/id)arg16 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

