/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNMontageComposerHudNavigationConfig : FBValueObject <NSCopying> {

	BOOL _nextButtonVisible;
	long long _dismissMode;
	long long _leftNavigation;
	long long _rightNavigation;

}

@property (nonatomic,readonly) long long dismissMode;                  //@synthesize dismissMode=_dismissMode - In the implementation block
@property (nonatomic,readonly) long long leftNavigation;               //@synthesize leftNavigation=_leftNavigation - In the implementation block
@property (nonatomic,readonly) long long rightNavigation;              //@synthesize rightNavigation=_rightNavigation - In the implementation block
@property (nonatomic,readonly) BOOL nextButtonVisible;                 //@synthesize nextButtonVisible=_nextButtonVisible - In the implementation block
-(id)initWithDismissMode:(long long)arg1 leftNavigation:(long long)arg2 rightNavigation:(long long)arg3 nextButtonVisible:(BOOL)arg4 ;
-(long long)dismissMode;
-(long long)leftNavigation;
-(long long)rightNavigation;
-(BOOL)nextButtonVisible;
@end

