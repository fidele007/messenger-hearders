/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsReceiptExtensionViewFactory.h>

@class FBImageDownloader, NSString;

@interface FBPaymentsImageReceiptExtensionViewFactory : NSObject <FBPaymentsReceiptExtensionViewFactory> {

	FBImageDownloader* _imageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeWithExtensionViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(id)receiptExtensionViewWithExtensionViewModel:(id)arg1 ;
@end

