/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface MNSoccerFeedbackEmojisView : UIView {

	double _ballTop;
	double _ballBottom;
	NSArray* _scoredEmojiTexts;
	NSArray* _missedEmojiTexts;

}
-(void)setBallTop:(double)arg1 bottom:(double)arg2 ;
-(void)showFeedbackForScoreValue:(BOOL)arg1 location:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
