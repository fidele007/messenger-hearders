/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayRule.h>

@class FBUserSession, NSString;

@interface FBVideoManuallyPausedAutoPlayRule : FBVideoAutoPlayRule {

	FBUserSession* _session;
	NSString* _videoID;

}
-(id)reasonForErrorCode:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 ;
-(unsigned long long)shouldAutoplay;
@end
