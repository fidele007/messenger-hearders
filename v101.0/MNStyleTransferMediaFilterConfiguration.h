/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNStyleTransferMediaFilterConfiguration : FBValueObject <NSCopying, NSCoding> {

	NSString* _effectName;
	NSString* _effectModelIdentifier;
	NSString* _effectModelWeightsIdentifier;

}

@property (nonatomic,copy,readonly) NSString * effectName;                                //@synthesize effectName=_effectName - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectModelIdentifier;                     //@synthesize effectModelIdentifier=_effectModelIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectModelWeightsIdentifier;              //@synthesize effectModelWeightsIdentifier=_effectModelWeightsIdentifier - In the implementation block
-(NSString *)effectName;
-(id)initWithEffectName:(id)arg1 effectModelIdentifier:(id)arg2 effectModelWeightsIdentifier:(id)arg3 ;
-(NSString *)effectModelIdentifier;
-(NSString *)effectModelWeightsIdentifier;
@end
