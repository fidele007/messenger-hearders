/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class AVPlayerLayer;

@interface FBVideoPlayerContentView : UIView {

	AVPlayerLayer* _playerLayer;

}

@property (nonatomic,retain) AVPlayerLayer * playerLayer;              //@synthesize playerLayer=_playerLayer - In the implementation block
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)layoutSubviews;
-(AVPlayerLayer *)playerLayer;
@end
