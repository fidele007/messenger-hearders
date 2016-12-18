/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAppMessage, FBMThreadCustomizationInfo;

@interface MNAppMessageCustomizationInfoTuple : FBValueObject <NSCopying> {

	MNAppMessage* _message;
	FBMThreadCustomizationInfo* _customizationInfo;

}

@property (nonatomic,copy,readonly) MNAppMessage * message;                                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadCustomizationInfo * customizationInfo;              //@synthesize customizationInfo=_customizationInfo - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(FBMThreadCustomizationInfo *)customizationInfo;
-(id)initWithMessage:(id)arg1 customizationInfo:(id)arg2 ;
-(MNAppMessage *)message;
@end
