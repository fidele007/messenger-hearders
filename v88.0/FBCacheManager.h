/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSHashTable;

@interface FBCacheManager : NSObject {

	NSHashTable* _caches;
	mutex _mutex;
	BOOL _enabled;
	BOOL _shouldClearOnResignActive;

}

@property (assign,nonatomic) BOOL shouldClearOnResignActive;              //@synthesize shouldClearOnResignActive=_shouldClearOnResignActive - In the implementation block
+(id)sharedManager;
-(void)turnOffCaches;
-(void)turnOnCaches;
-(void)receivedEnterBackgroundNotification;
-(void)receivedLowMemoryWarning;
-(void)_performActionOnCaches:(/*^block*/id)arg1 ;
-(void)registerCache:(id)arg1 ;
-(BOOL)cachesEnabled;
-(void)compactCachesWithFactor:(double)arg1 ;
-(BOOL)shouldClearOnResignActive;
-(void)setShouldClearOnResignActive:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allCaches;
@end

