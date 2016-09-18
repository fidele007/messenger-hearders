/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNSettingsSectionFooterView.h>

@class UILabel, UIProgressView, NSString;

@interface MNSettingsSectionFooterWithProgressView : MNSettingsSectionFooterView {

	BOOL _showsDownloadProgress;
	UILabel* _downloadProgressTitleLabel;
	UIProgressView* _downloadProgressView;

}

@property (nonatomic,readonly) BOOL showsDownloadProgress;                         //@synthesize showsDownloadProgress=_showsDownloadProgress - In the implementation block
@property (nonatomic,copy,readonly) NSString * downloadProgressTitle; 
@property (nonatomic,readonly) UILabel * downloadProgressTitleLabel;               //@synthesize downloadProgressTitleLabel=_downloadProgressTitleLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * downloadProgressView;              //@synthesize downloadProgressView=_downloadProgressView - In the implementation block
-(UILabel *)downloadProgressTitleLabel;
-(NSString *)downloadProgressTitle;
-(BOOL)showsDownloadProgress;
-(UIProgressView *)downloadProgressView;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 edgeInsets:(UIEdgeInsets)arg3 linkRanges:(id)arg4 showsDownloadProgress:(BOOL)arg5 downloadProgressTitle:(id)arg6 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

