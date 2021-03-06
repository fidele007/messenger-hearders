/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMLocationUpdateRequestConfiguration : FBValueObject <NSCopying> {

	BOOL _userTriggered;
	BOOL _canRunInBackground;
	double _timeout;

}

@property (nonatomic,readonly) BOOL userTriggered;                   //@synthesize userTriggered=_userTriggered - In the implementation block
@property (nonatomic,readonly) BOOL canRunInBackground;              //@synthesize canRunInBackground=_canRunInBackground - In the implementation block
@property (nonatomic,readonly) double timeout;                       //@synthesize timeout=_timeout - In the implementation block
-(id)initWithUserTriggered:(BOOL)arg1 canRunInBackground:(BOOL)arg2 timeout:(double)arg3 ;
-(BOOL)userTriggered;
-(BOOL)canRunInBackground;
-(double)timeout;
@end

