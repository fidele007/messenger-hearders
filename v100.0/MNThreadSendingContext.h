/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadSendTarget, MNMessageSendConversionContext, NSDictionary;

@interface MNThreadSendingContext : FBValueObject <NSCopying> {

	FBMThreadSendTarget* _sendTarget;
	MNMessageSendConversionContext* _conversionContext;
	long long _messageLifeTime;
	NSDictionary* _additionalClientTags;
	NSDictionary* _extras;

}

@property (nonatomic,copy,readonly) FBMThreadSendTarget * sendTarget;                                //@synthesize sendTarget=_sendTarget - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendConversionContext * conversionContext;              //@synthesize conversionContext=_conversionContext - In the implementation block
@property (nonatomic,readonly) long long messageLifeTime;                                            //@synthesize messageLifeTime=_messageLifeTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalClientTags;                             //@synthesize additionalClientTags=_additionalClientTags - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extras;                                           //@synthesize extras=_extras - In the implementation block
-(long long)messageLifeTime;
-(NSDictionary *)additionalClientTags;
-(FBMThreadSendTarget *)sendTarget;
-(MNMessageSendConversionContext *)conversionContext;
-(id)initWithSendTarget:(id)arg1 conversionContext:(id)arg2 messageLifeTime:(long long)arg3 additionalClientTags:(id)arg4 extras:(id)arg5 ;
-(NSDictionary *)extras;
@end

