/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBPaymentsTableFooterView, FBPaymentsFooterErrorView, NSString;

@interface FBPaymentsFooterWrapperView : UIView {

	FBPaymentsTableFooterView* _footerView;
	FBPaymentsFooterErrorView* _errorView;
	NSString* _errorDescription;

}

@property (nonatomic,copy) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
-(id)initWithTitle:(id)arg1 buttonTitles:(id)arg2 buttonActionBlock:(/*^block*/id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setErrorDescription:(NSString *)arg1 ;
-(NSString *)errorDescription;
@end
