/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMCoreMessageProperties, FBMMessageSyncedExtensibleProperties;

@interface FBMSyncedMessageProperties : FBValueObject <NSCopying> {

	FBMCoreMessageProperties* _coreProperties;
	FBMMessageSyncedExtensibleProperties* _extensibleProperties;

}

@property (nonatomic,copy,readonly) FBMCoreMessageProperties * coreProperties;                                //@synthesize coreProperties=_coreProperties - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageSyncedExtensibleProperties * extensibleProperties;              //@synthesize extensibleProperties=_extensibleProperties - In the implementation block
-(id)initWithCoreProperties:(id)arg1 extensibleProperties:(id)arg2 ;
-(FBMCoreMessageProperties *)coreProperties;
-(FBMMessageSyncedExtensibleProperties *)extensibleProperties;
@end

