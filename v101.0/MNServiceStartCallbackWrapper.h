/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MNServiceStartCallbackWrapper : NSObject {

	/*^block*/id _callback;
	NSString* _serviceId;
	BOOL _callbackExecuted;

}

@property (assign) BOOL callbackExecuted;              //@synthesize callbackExecuted=_callbackExecuted - In the implementation block
-(void)serviceStarted;
-(id)initWithServiceId:(id)arg1 callbackBlock:(/*^block*/id)arg2 ;
-(void)setCallbackExecuted:(BOOL)arg1 ;
-(BOOL)callbackExecuted;
-(void)dealloc;
@end

