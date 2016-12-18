/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesComposingViewAnimationEndingConfig : FBValueObject <NSCopying> {

	double _overshotHeight;
	double _finalHeight;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) double overshotHeight;              //@synthesize overshotHeight=_overshotHeight - In the implementation block
@property (nonatomic,readonly) double finalHeight;                 //@synthesize finalHeight=_finalHeight - In the implementation block
@property (nonatomic,readonly) id completionBlock;                 //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithOvershotHeight:(double)arg1 finalHeight:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)finalHeight;
-(double)overshotHeight;
-(id)completionBlock;
@end
