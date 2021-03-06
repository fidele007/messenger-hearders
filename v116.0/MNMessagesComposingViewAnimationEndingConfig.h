/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMessagesComposingViewAnimationEndingConfig : FBValueObject <NSCopying> {

	double _overshotHeight;
	double _finalHeight;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) double overshotHeight;                //@synthesize overshotHeight=_overshotHeight - In the implementation block
@property (nonatomic,readonly) double finalHeight;                   //@synthesize finalHeight=_finalHeight - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)initWithOvershotHeight:(double)arg1 finalHeight:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(double)finalHeight;
-(double)overshotHeight;
-(id)completionBlock;
@end

