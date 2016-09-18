/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserPreferences;

@interface FBCLLocationLogger : NSObject {

	unsigned long long _eventCtxCounter;
	unsigned long long _eventDataCounter;
	unsigned long long _impl;
	FBUserPreferences* _userPreferences;

}
+(id)_captureSystemDictionary;
-(id)initWithDataCollectionImpl:(unsigned long long)arg1 userPreferences:(id)arg2 ;
-(void)logVisits:(id)arg1 ;
-(void)logEventTrigger:(id)arg1 didRequestLocation:(BOOL)arg2 ;
-(void)logEventSet:(id)arg1 ;
-(void)logLocations:(id)arg1 eventSet:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)logTrace:(id)arg1 step:(id)arg2 payload:(id)arg3 ;
-(void)logTrace:(id)arg1 step:(id)arg2 ;
@end

