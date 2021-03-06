/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingRemoteIdentityValidating.h>

@protocol MNSecureMessagingRemoteIdentityStoring;
@class NSString;

@interface MNSecureMessagingRemoteIdentityValidator : NSObject <MNSecureMessagingRemoteIdentityValidating> {

	id<MNSecureMessagingRemoteIdentityStoring> _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addTrustedIdentityKey:(id)arg1 otherUserFbId:(id)arg2 codeName:(id)arg3 timestamp:(unsigned long long)arg4 ;
-(void)disableDeviceWithIdentityKey:(id)arg1 otherUserFbId:(id)arg2 ;
-(BOOL)isTrustedIdentityKey:(id)arg1 otherUserFbId:(id)arg2 ;
-(id)lastSeenIdentityKeyForOtherUserFbId:(id)arg1 ;
-(id)initWithIdentityStore:(id)arg1 ;
@end

