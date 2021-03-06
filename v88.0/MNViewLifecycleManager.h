/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MNViewLifecycleManager : NSObject {

	NSMutableDictionary* _reuseQueueByKey;
	BOOL _removalOnRecycle;

}
-(id)dequeueViewForKey:(id)arg1 ontoContainer:(id)arg2 viewBlock:(/*^block*/id)arg3 ;
-(void)recycleView:(id)arg1 forKey:(id)arg2 ;
-(id)initWithRemovalOnRecycle:(BOOL)arg1 ;
-(id)_dequeueViewForKey:(id)arg1 forContainerView:(id)arg2 ;
-(void)_setUpView:(id)arg1 toContainerView:(id)arg2 ;
-(void)_recycleView:(id)arg1 forKey:(id)arg2 ;
-(void)_tearDownView:(id)arg1 ;
-(void)purge;
@end

