/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsCheckoutExplanationInfoViewModel;

@interface FBPaymentsCheckoutExplanationInfoConfiguration : FBValueObject <NSCopying> {

	unsigned long long _displayPolicy;
	FBPaymentsCheckoutExplanationInfoViewModel* _viewModel;

}

@property (nonatomic,readonly) unsigned long long displayPolicy;                                         //@synthesize displayPolicy=_displayPolicy - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCheckoutExplanationInfoViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(unsigned long long)displayPolicy;
-(id)initWithDisplayPolicy:(unsigned long long)arg1 viewModel:(id)arg2 ;
-(FBPaymentsCheckoutExplanationInfoViewModel *)viewModel;
@end

