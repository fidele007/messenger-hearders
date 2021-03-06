/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesComposingViewAnimationBeginningConfig : FBValueObject <NSCopying> {

	double _initialHeight;
	double _finalHeight;
	double _duration;

}

@property (nonatomic,readonly) double initialHeight;              //@synthesize initialHeight=_initialHeight - In the implementation block
@property (nonatomic,readonly) double finalHeight;                //@synthesize finalHeight=_finalHeight - In the implementation block
@property (nonatomic,readonly) double duration;                   //@synthesize duration=_duration - In the implementation block
-(id)initWithInitialHeight:(double)arg1 finalHeight:(double)arg2 duration:(double)arg3 ;
-(double)initialHeight;
-(double)finalHeight;
-(double)duration;
@end

