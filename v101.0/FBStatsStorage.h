/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

