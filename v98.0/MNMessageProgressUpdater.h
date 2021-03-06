/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, MNMessageProgressUpdaterDelegate, MNProgressView;
@class NSObject, MNMessageProgressIndicatorConfiguration, UIView;

@interface MNMessageProgressUpdater : NSObject {

	NSObject*<OS_dispatch_source> _progressTimer;
	double _updateIntervalInSeconds;
	MNMessageProgressIndicatorConfiguration* _configuration;
	id<MNMessageProgressUpdaterDelegate> _delegate;
	UIView*<MNProgressView> _progressView;

}

@property (assign,nonatomic,__weak) id<MNMessageProgressUpdaterDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMessageProgressIndicatorConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIView*<MNProgressView> progressView;                             //@synthesize progressView=_progressView - In the implementation block
-(id)initWithProgressView:(id)arg1 ;
-(void)startProgressing;
-(void)stopProgressing;
-(void)setDelegate:(id<MNMessageProgressUpdaterDelegate>)arg1 ;
-(id<MNMessageProgressUpdaterDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setConfiguration:(MNMessageProgressIndicatorConfiguration *)arg1 ;
-(UIView*<MNProgressView>)progressView;
-(MNMessageProgressIndicatorConfiguration *)configuration;
-(void)_updateProgress;
@end

