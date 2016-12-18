/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface MNParticleEffectMediaFilterConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _opticalFlowDisabled;
	NSString* _effectName;
	NSArray* _emitters;

}

@property (nonatomic,copy,readonly) NSString * effectName;              //@synthesize effectName=_effectName - In the implementation block
@property (nonatomic,readonly) BOOL opticalFlowDisabled;                //@synthesize opticalFlowDisabled=_opticalFlowDisabled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emitters;                 //@synthesize emitters=_emitters - In the implementation block
-(NSArray *)emitters;
-(BOOL)opticalFlowDisabled;
-(NSString *)effectName;
-(id)initWithEffectName:(id)arg1 opticalFlowDisabled:(BOOL)arg2 emitters:(id)arg3 ;
@end

