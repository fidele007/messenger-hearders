/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessengerCodeScanErrorPresenter;
@class FBTimer;

@interface MNMessengerCodeScanErrorManager : NSObject {

	long long _invalidHashErrorsInTimeWindow;
	FBTimer* _invalidCodeTimer;
	id<MNMessengerCodeScanErrorPresenter> _presenter;

}

@property (assign,nonatomic,__weak) id<MNMessengerCodeScanErrorPresenter> presenter;              //@synthesize presenter=_presenter - In the implementation block
-(void)_resetInvalidHashErrors;
-(void)startScanSession;
-(void)stopScanSession;
-(void)recordFrameProcessedDidFailWithError:(long long)arg1 ;
-(void)_reset;
-(id<MNMessengerCodeScanErrorPresenter>)presenter;
-(void)setPresenter:(id<MNMessengerCodeScanErrorPresenter>)arg1 ;
@end

