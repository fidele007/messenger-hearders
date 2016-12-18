/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListResponse, MNSecureThreadListResponse;

@interface MNSecureAndSyncedThreadListResponse : FBValueObject <NSCopying> {

	MNThreadListResponse* _syncedThreadListResponse;
	MNSecureThreadListResponse* _secureThreadListResponse;

}

@property (nonatomic,copy,readonly) MNThreadListResponse * syncedThreadListResponse;                    //@synthesize syncedThreadListResponse=_syncedThreadListResponse - In the implementation block
@property (nonatomic,copy,readonly) MNSecureThreadListResponse * secureThreadListResponse;              //@synthesize secureThreadListResponse=_secureThreadListResponse - In the implementation block
-(MNThreadListResponse *)syncedThreadListResponse;
-(MNSecureThreadListResponse *)secureThreadListResponse;
-(id)initWithSyncedThreadListResponse:(id)arg1 secureThreadListResponse:(id)arg2 ;
@end

