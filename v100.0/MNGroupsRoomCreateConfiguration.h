/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNGroupsRoomCreateConfiguration : FBValueObject <NSCopying> {

	unsigned long long _entryPoint;
	NSString* _facebookGroupID;

}

@property (nonatomic,readonly) unsigned long long entryPoint;                //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * facebookGroupID;              //@synthesize facebookGroupID=_facebookGroupID - In the implementation block
-(NSString *)facebookGroupID;
-(id)initWithEntryPoint:(unsigned long long)arg1 facebookGroupID:(id)arg2 ;
-(unsigned long long)entryPoint;
@end

