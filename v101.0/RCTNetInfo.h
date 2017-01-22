/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTEventEmitter.h>

@class NSString;

@interface RCTNetInfo : RCTEventEmitter {

	SCNetworkReachabilityRef _reachability;
	NSString* _status;
	NSString* _host;

}
+(id)moduleName;
+(id)__rct_export__950;
+(void)load;
-(id)supportedEvents;
-(id)initWithHost:(id)arg1 ;
-(void)getCurrentConnectivity:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
@end
