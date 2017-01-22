/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAVPlayerVolumeRamp : NSObject {

	float _duration;
	float _toValue;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) float duration;                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float toValue;                 //@synthesize toValue=_toValue - In the implementation block
@property (nonatomic,copy) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(float)duration;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setDuration:(float)arg1 ;
-(void)setToValue:(float)arg1 ;
-(float)toValue;
@end
