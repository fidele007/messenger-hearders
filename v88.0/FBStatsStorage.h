/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBStatsStorage : NSObject {

	NSMutableDictionary* _counters;

}
-(void)reportInt:(long long)arg1 forEvent:(int)arg2 action:(short)arg3 ;
-(void)reportString:(id)arg1 forEvent:(int)arg2 action:(short)arg3 ;
-(id)toDictionaryWithEventData:(id)arg1 ;
-(id)_statsObjectForTestingWithEvent:(int)arg1 action:(short)arg2 ;
-(id)init;
@end

