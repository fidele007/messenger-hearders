/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	CFRunLoopRef _runLoopRef;
	unsigned _flags;
	unsigned long long _status;
	BOOL _localWiFi;

}

@property (nonatomic,retain) CFRunLoopRef runLoopRef;                  //@synthesize runLoopRef=_runLoopRef - In the implementation block
@property (nonatomic,readonly) unsigned flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
+(id)reachabilityWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForInternetConnection;
+(id)reachabilityForLocalWiFi;
+(id)reachabilityWithHostName:(id)arg1 ;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(BOOL)updateFlags;
-(void)setRunLoopRef:(CFRunLoopRef)arg1 ;
-(BOOL)startObservingOnQueue:(id)arg1 ;
-(BOOL)startObservingOnRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopRef)runLoopRef;
-(void)dealloc;
-(unsigned long long)status;
-(void)_updateFlags:(unsigned)arg1 ;
-(unsigned long long)_localWiFiStatusForFlags:(unsigned)arg1 ;
-(unsigned long long)_networkStatusForFlags:(unsigned)arg1 ;
-(void)stopObserving;
-(unsigned)flags;
@end

