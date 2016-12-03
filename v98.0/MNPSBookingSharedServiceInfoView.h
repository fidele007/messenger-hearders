/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSString, FBNetworkImageView, UIImageView, UILabel;

@interface MNPSBookingSharedServiceInfoView : UIView {

	NSString* _title;
	NSString* _subtitle;
	FBNetworkImageView* _productImageView;
	UIImageView* _glyphImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _isGlyphMode;

}
+(CGSize)sizeThatFits:(CGSize)arg1 withTitle:(id)arg2 subtitle:(id)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 glyphName:(unsigned long long)arg3 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 imageDownloader:(id)arg4 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 imageDownloader:(id)arg4 glyphName:(unsigned long long)arg5 isGlyphMode:(BOOL)arg6 ;
-(id)_imageViewWithGlyphName:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
