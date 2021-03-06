/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCheckoutHeaderViewFactory.h>

@class FBImageDownloader, MNCDNProfileImageDownloader, NSString;

@interface MNPaymentsPeerToPeerPayMoneyRequestHeaderViewFactory : NSObject <FBPaymentsCheckoutHeaderViewFactory> {

	FBImageDownloader* _imageDownloader;
	MNCDNProfileImageDownloader* _profileImageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newCheckoutHeaderView;
-(id)initWithImageDownloader:(id)arg1 profileImageDownloader:(id)arg2 ;
@end

