/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadListRequestHandling.h>

@protocol MNSecureThreadReading, OS_dispatch_queue;
@class FBAnalytics, NSObject, NSString;

@interface MNSecureThreadListRequestHandler : NSObject <MNSecureThreadListRequestHandling> {

	id<MNSecureThreadReading> _secureThreadReader;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleResult:(id)arg1 forRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)handleSecureThreadListRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSecureThreadReader:(id)arg1 analytics:(id)arg2 queue:(id)arg3 ;
@end

