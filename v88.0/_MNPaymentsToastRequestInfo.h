/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, MNPaymentsPeerToPeerPaymentRequestBannerActionHandler, FBToast;

@interface _MNPaymentsToastRequestInfo : NSObject {

	NSOperationQueue* _fetchOperationQueue;
	MNPaymentsPeerToPeerPaymentRequestBannerActionHandler* _bannerActionHandler;
	FBToast* _toast;

}

@property (nonatomic,retain) NSOperationQueue * fetchOperationQueue;                                                   //@synthesize fetchOperationQueue=_fetchOperationQueue - In the implementation block
@property (nonatomic,retain) MNPaymentsPeerToPeerPaymentRequestBannerActionHandler * bannerActionHandler;              //@synthesize bannerActionHandler=_bannerActionHandler - In the implementation block
@property (nonatomic,retain) FBToast * toast;                                                                          //@synthesize toast=_toast - In the implementation block
-(NSOperationQueue *)fetchOperationQueue;
-(void)setFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)bannerActionHandler;
-(void)setBannerActionHandler:(MNPaymentsPeerToPeerPaymentRequestBannerActionHandler *)arg1 ;
-(FBToast *)toast;
-(void)setToast:(FBToast *)arg1 ;
@end

