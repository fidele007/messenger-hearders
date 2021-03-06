/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBInstantGameListUIMetrics, UIImageView, UILabel, NSString;

@interface FBInstantGameListGameTitleTagView : UIView {

	FBInstantGameListUIMetrics* _metrics;
	UIImageView* _backgroundView;
	UILabel* _tagLabel;
	NSString* _gameTagName;

}

@property (nonatomic,copy) NSString * gameTagName;              //@synthesize gameTagName=_gameTagName - In the implementation block
-(void)setGameTagName:(NSString *)arg1 ;
-(id)initWithTagName:(id)arg1 ;
-(NSString *)gameTagName;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTagName:(id)arg1 ;
@end

