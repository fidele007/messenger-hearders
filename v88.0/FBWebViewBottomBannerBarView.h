/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol NSObject;
@class CKComponentHostingView, NSString;

@interface FBWebViewBottomBannerBarView : UIView {

	CKComponentHostingView* _hostingView;
	id<NSObject> _target;
	SEL _action;
	unsigned long long _style;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(FBBottomButtonViewComponentStyle)componentStyleForViewStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

