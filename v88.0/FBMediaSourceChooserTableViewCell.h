/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface FBMediaSourceChooserTableViewCell : UITableViewCell <FBAccessibilityInvalidationEventsListener> {

	UILabel* _label;
	UILabel* _subLabel;
	UIImageView* _checkMarkImageView;
	UIImageView* _iconImageView;
	NSString* _title;
	UIImage* _icon;
	unsigned long long _numAssets;

}

@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * icon;                            //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long numAssets;              //@synthesize numAssets=_numAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(void)setNumAssets:(unsigned long long)arg1 ;
-(unsigned long long)numAssets;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end

