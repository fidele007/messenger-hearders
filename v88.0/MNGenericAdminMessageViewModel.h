/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNGameAdminMessageViewModel, FBMMessageKey, MNMessageCollapsingGroupViewModel, MNPollAdminMessageViewModel, MNContentSubscriptionAdminMessageViewModel;

@interface MNGenericAdminMessageViewModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNGameAdminMessageViewModel* _gameAdminMessage_gameAdminMessageViewModel;
	FBMMessageKey* _gameAdminMessage_messageKey;
	long long _gameAdminMessage_viewState;
	MNMessageCollapsingGroupViewModel* _messageCollapsingGroup;
	MNPollAdminMessageViewModel* _pollAdminMessage_pollAdminMessageViewModel;
	FBMMessageKey* _pollAdminMessage_messageKey;
	long long _pollAdminMessage_viewState;
	MNContentSubscriptionAdminMessageViewModel* _mediaAdminMessage_contentSubscriptionAdminMessageViewModel;
	FBMMessageKey* _mediaAdminMessage_messageKey;
	long long _mediaAdminMessage_viewState;

}
+(id)gameAdminMessageWithGameAdminMessageViewModel:(id)arg1 messageKey:(id)arg2 viewState:(long long)arg3 ;
+(id)pollAdminMessageWithPollAdminMessageViewModel:(id)arg1 messageKey:(id)arg2 viewState:(long long)arg3 ;
+(id)mediaAdminMessageWithContentSubscriptionAdminMessageViewModel:(id)arg1 messageKey:(id)arg2 viewState:(long long)arg3 ;
+(id)messageCollapsingGroup:(id)arg1 ;
-(void)matchGameAdminMessage:(/*^block*/id)arg1 messageCollapsingGroup:(/*^block*/id)arg2 pollAdminMessage:(/*^block*/id)arg3 mediaAdminMessage:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

