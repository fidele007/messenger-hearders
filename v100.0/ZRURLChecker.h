/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ZRURLCheckerDelegate;
@interface ZRURLChecker : NSObject {

	id<ZRURLCheckerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ZRURLCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)checkURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 fencePrefKeyForURL:(id)arg3 ;
-(void)checkURL:(id)arg1 withZRTariffedUxSentry:(id)arg2 fencePrefKeyForURL:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_setupSentry:(id)arg1 fencePrefKeyForURL:(id)arg2 ;
-(void)setDelegate:(id<ZRURLCheckerDelegate>)arg1 ;
-(id<ZRURLCheckerDelegate>)delegate;
@end

