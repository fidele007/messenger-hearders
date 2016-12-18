/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUser;

@interface MNMontageSeenStateViewModel : FBValueObject <NSCopying> {

	FBMUser* _user;
	unsigned long long _readTimestamp;

}

@property (nonatomic,copy,readonly) FBMUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) unsigned long long readTimestamp;              //@synthesize readTimestamp=_readTimestamp - In the implementation block
-(unsigned long long)readTimestamp;
-(id)initWithUser:(id)arg1 readTimestamp:(unsigned long long)arg2 ;
-(FBMUser *)user;
@end

