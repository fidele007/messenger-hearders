/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListRequestFilter, MNSecureThreadListRequestFilter;

@interface MNSecureAndSyncedThreadListRequestFilter : FBValueObject <NSCopying> {

	MNThreadListRequestFilter* _syncedThreadListRequestFilter;
	MNSecureThreadListRequestFilter* _secureThreadListRequestFilter;

}

@property (nonatomic,copy,readonly) MNThreadListRequestFilter * syncedThreadListRequestFilter;                    //@synthesize syncedThreadListRequestFilter=_syncedThreadListRequestFilter - In the implementation block
@property (nonatomic,copy,readonly) MNSecureThreadListRequestFilter * secureThreadListRequestFilter;              //@synthesize secureThreadListRequestFilter=_secureThreadListRequestFilter - In the implementation block
-(id)initWithSyncedThreadListRequestFilter:(id)arg1 secureThreadListRequestFilter:(id)arg2 ;
-(MNThreadListRequestFilter *)syncedThreadListRequestFilter;
-(MNSecureThreadListRequestFilter *)secureThreadListRequestFilter;
@end

